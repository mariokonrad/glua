#ifndef __IMG__H__
#define __IMG__H__

struct image {
    int width;
    int height;
    int depth;
    void * data;
};

struct image * load_bmp(const char *);
void free_img(struct image *);

int image_width(struct image * p);
int image_height(struct image * p);
void * image_data(struct image * p);

#endif
