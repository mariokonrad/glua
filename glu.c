#include "glu.h"
#include <GL/gl.h>
#include <GL/glu.h>

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

