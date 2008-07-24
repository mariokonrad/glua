#ifndef __GLU__H__
#define __GLU__H__

/* boolean */
#define _FALSE                                0x0
#define _TRUE                                 0x1

/* QuadricNormal */
#define _SMOOTH                         100000
#define _FLAT                           100001
#define _NONE                           100002


void Perspective(float, float, float, float);
void LookAt(float, float, float, float, float, float, float, float, float);

struct quadric {
	void * data;
};

struct quadric * NewQuadric(void);
void DeleteQuadric(struct quadric *);
void Sphere(struct quadric *, double, int, int);
void QuadricNormals(struct quadric *, unsigned int);
void QuadricTexture(struct quadric *, unsigned char);

#endif
