#include "glu.h"
#include <GL/gl.h>
#include <GL/glu.h>

static unsigned int glumap(unsigned int v)
{
#if defined(FAST_CONV)
	return v;
#else
	/* TODO */
#endif
}

void Perspective(float fov, float ratio, float near, float far)
{
    gluPerspective(fov, ratio, near, far);
}

void LookAt(
    float p0, float p1, float p2,
    float l0, float l1, float l2,
    float u0, float u1, float u2)
{
    gluLookAt(p0, p1, p2, l0, l1, l2, u0, u1, u2);
}

struct quadric * NewQuadric(void)
{
	struct quadric * q;
	q = (struct quadric *)malloc(sizeof(*q));
	q->data = (void *)gluNewQuadric();
	return q;
}

void DeleteQuadric(struct quadric * q)
{
	if (q) {
		gluDeleteQuadric((GLUquadric *)q->data);
		free(q);
	}
}

void Sphere(struct quadric * q, double r, int sl, int st)
{
	gluSphere((GLUquadric *)q->data, r, sl, st);
}

void QuadricNormals(struct quadric * q, unsigned int n)
{
	gluQuadricNormals((GLUquadric *)q->data, glumap(n));
}

void QuadricTexture(struct quadric * q, unsigned char f)
{
	gluQuadricTexture((GLUquadric *)q->data, f);
}

