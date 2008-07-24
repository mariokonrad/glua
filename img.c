#include "img.h"
#include <stdint.h>
#include <fcntl.h>
#include <unistd.h>

#define BMP 19778

union pixel_t {
	struct {
		unsigned char b;
		unsigned char g;
		unsigned char r;
		unsigned char a;
	} col __attribute__((packed));
	unsigned char x[4];
};

struct bmp_fileheader {
	uint16_t type;		/* must always be 19778 ('BM') to identify it's a BMP file */
	uint32_t size;		/* size of the file in bytes */
	uint16_t reserved1;	/* must be 0 */
	uint16_t reserved2;	/* must be 0 */
	uint32_t off_bits;	/* offset of the bitmap data in bytes from the beginning of the file */
} __attribute__((packed));

struct bmp_infoheader {
	uint32_t size;		/* size of the BITMAPINFOHEADER in bytes */
	int32_t  width;		/* image width in pixels */
	int32_t  height;	/* image height in pixels */
	uint16_t planes;	/* number of planes of the target device */
	uint16_t bit_count;	/* number of bits per pixel: 1 (black/white), 4 (16 colors), 8 (256 colors), 24 (16.7 million colors) */
	uint32_t compression;	/* type of compression (0 = no compression) */
	uint32_t size_image;	/* specifies the size of the image data, in bytes. If there is no compression, it is valid to set this member to zero */
	int32_t  x_pixels_per_m;	/* specifies the the horizontal pixels per meter on the designated targer device, usually set to zero */
	int32_t  y_pixels_per_m;	/* specifies the the vertical pixels per meter on the designated targer device, usually set to zero */
	uint32_t color_used;		/* specifies the number of colors used in the bitmap, if set to zero the number of colors is calculated using the biBitCount member */
	uint32_t color_important;	/* specifies the number of color that are 'important' for the bitmap, if set to zero, all colors are important */
} __attribute__((packed));

struct RGBQUAD {
	uint8_t r;
	uint8_t g;
	uint8_t b;
	uint8_t reserved;
} __attribute__((packed));

struct RGB {
	uint8_t r;
	uint8_t g;
	uint8_t b;
} __attribute__((packed));

static void load_888_uncompressed(int fd, struct image * img)
{
    int i;
    int x;
    int y;
	uint8_t tch[4];
	uint8_t * tpx;
    union pixel_t * p;
    int size;

    size = sizeof(uint8_t) * img->width * 3;
    img->depth = 24;
    tpx = (uint8_t *)malloc(size);
	for (y = 0; y < img->height; ++y) {
		read(fd, tpx, size);
		if ((img->width*3) % 4) read(fd, tch, 4-((img->width*3)%4));
		for (x = 0, i = 0; x < img->width; ++x, i += 3) {
			p = &(((union pixel_t *)img->data)[x+y*img->width]);
			p->col.r = tpx[i+0];
			p->col.g = tpx[i+1];
			p->col.b = tpx[i+2];
			p->col.a = 0;
		}
	}
    free(tpx);
}

struct image * load_bmp(const char * fn)
{
	int fd;
	struct bmp_fileheader fh;
	struct bmp_infoheader ih;
    struct image * img;

    img = NULL;
    fd = open(fn, O_RDONLY);
	if (fd < 0) return NULL;

	read(fd, &fh, sizeof(fh));
	read(fd, &ih, sizeof(ih));

	if (fh.type != BMP) goto quit;

    img = (struct image *)malloc(sizeof(*img));
	if (ih.bit_count == 24 && ih.compression == 0) {
        img->width = ih.width;
		img->height = ih.height;
        img->data = malloc(sizeof(union pixel_t)*ih.width*ih.height);
		lseek(fd, fh.off_bits, SEEK_SET);
		load_888_uncompressed(fd, img);
	}
quit:
	close(fd);
    return img;
}

void free_img(struct image * p)
{
    if (p) {
        free(p->data);
        free(p);
    }
}

