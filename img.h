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

#endif
