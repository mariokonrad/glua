#include "gl.h"
#include <GL/gl.h>

void ClearIndex(float c)
{ glClearIndex(c); }

void ClearColor(float r, float g, float b, float a)
{ glClearColor(r, g, b, a); }

void Clear(unsigned int m)
{ glClear(m); }

void IndexMask(unsigned int m)
{ glIndexMask(m); }

void ColorMask(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{ glColorMask(r, g, b, a); }

void AlphaFunc(unsigned int f, float a)
{ glAlphaFunc(f, a); }

void BlendFunc(unsigned int sf, unsigned int df)
{ glBlendFunc(sf, df); }

void LogicOp(unsigned int op)
{ glLogicOp(op); }

void CullFace(unsigned int f)
{ glCullFace(f); }

void FrontFace(unsigned int f)
{ glFrontFace(f); }

void PointSize(float s)
{ glPointSize(s); }

void LineWidth(float w)
{ glLineWidth(w); }

void LineStipple(int f, unsigned short p)
{ glLineStipple(f, p); }

void PolygonMode(unsigned int f, unsigned int m)
{ glPolygonMode(f, m); }

void PolygonOffset(float f, float ofs)
{ glPolygonOffset(f, ofs); }

void EdgeFlag(unsigned char f)
{ glEdgeFlag(f); }

void Scissor(int x, int y, int w, int h)
{ glScissor(x, y, w, h); }

void DrawBuffer(unsigned int m)
{ glDrawBuffer(m); }

void ReadBuffer(unsigned int m)
{ glReadBuffer(m); }

void Enable(unsigned int f)
{ glEnable(f); }

void Disable(unsigned int f)
{ glDisable(f); }

unsigned char IsEnabled(unsigned int cap)
{ return glIsEnabled(cap) == GL_TRUE ? _TRUE : _FALSE; }

void PopClientAttrib(void)
{ glPopClientAttrib(); } /* 1.1 */

GLint RenderMode(unsigned int m)
{ glRenderMode(m); }

unsigned int GetError(void)
{ return glGetError(); }

void Finish(void)
{ glFinish(); }

void Flush(void)
{ glFlush(); }

void Hint(unsigned int t, unsigned int m)
{ glHint(t, m); }

void ClearDepth(double d)
{ glClearDepth(d); }

void DepthFunc(unsigned int f)
{ glDepthFunc(f); }

void DepthMask(unsigned char m)
{ glDepthMask(m); }

void DepthRange(double n, double f)
{ glDepthRange(n, f); }


void ClearAccum(float r, float g, float b, float a)
{ glClearAccum(r, g, b, a); }

void Accum(unsigned int op, float v)
{ glAccum(op, v); }


void MatrixMode(unsigned int m)
{ glMatrixMode(m); }

void Ortho(double l, double r, double b, double t, double n, double f)
{ glOrtho(l, r, b, t, n, f); }

void Frustum(double l, double r, double b, double t, double n, double f)
{ glFrustum(l, r, b, t, n, f); }

void Viewport(int x, int y, int w, int h)
{ glViewport(x, y, w, h); }

void PushMatrix(void)
{ glPushMatrix(); }

void PopMatrix(void)
{ glPopMatrix(); }

void LoadIdentity(void)
{ glLoadIdentity(); }

void LoadMatrixd(double v[16])
{ glLoadMatrixd(v); }

void LoadMatrixf(float v[16])
{ glLoadMatrixf(v); }

void MultMatrixd(double v[16])
{ glMultMatrixd(v); }

void MultMatrixf(float v[16])
{ glMultMatrixf(v); }

void Rotated(double phi, double x, double y, double z)
{ glRotated(phi, x, y, z); }

void Rotatef(float phi, float x, float y, float z)
{ glRotatef(phi, x, y, z); }

void Scaled(double x, double y, double z)
{ glScaled(x, y, z); }

void Scalef(float x, float y, float z)
{ glScalef(x, y, z); }

void Translated(double dx, double dy, double dz)
{ glTranslated(dx, dy, dz); }

void Translatef(float dx, float dy, float dz)
{ glTranslatef(dx, dy, dz); }


void Begin(unsigned int type)
{ glBegin(type); }

void End(void)
{ glEnd(); }


void Vertex2d(double x, double y)
{ glVertex2d(x, y); }

void Vertex2f(float x, float y)
{ glVertex2f(x, y); }

void Vertex2i(int x, int y)
{ glVertex2i(x, y); }

void Vertex2s(short x, short y)
{ glVertex2s(x, y); }


void Vertex3d(double x, double y, double z)
{ glVertex3d(x, y, z); }

void Vertex3f(float x, float y, float z)
{ glVertex3f(x, y, z); }

void Vertex3i(int x, int y, int z)
{ glVertex3i(x, y, z); }

void Vertex3s(short x, short y, short z)
{ glVertex3s(x, y, z); }


void Vertex4d(double a, double b, double c, double d)
{ glVertex4d(a, b, c, d); }

void Vertex4f(float x, float y, float z, float a)
{ glVertex4f(x, y, z, a); }

void Vertex4i(int a, int b, int c, int d)
{ glVertex4i(a, b, c, d); }

void Vertex4s(short x, short y, short z, short a)
{ glVertex4s(x, y, z, a); }


void Vertex2dv(double v[2])
{ glVertex2dv(v); }

void Vertex2fv(float v[2])
{ glVertex2fv(v); }

void Vertex2iv(int v[2])
{ glVertex2iv(v); }

void Vertex2sv(short v[2])
{ glVertex2sv(v); }


void Vertex3dv(double v[3])
{ glVertex3dv(v); }

void Vertex3fv(GLfloat v[3])
{ glVertex3fv(v); }

void Vertex3iv(int v[3])
{ glVertex3iv(v); }

void Vertex3sv(short v[3])
{ glVertex3sv(v); }


void Vertex4dv(double v[4])
{ glVertex4dv(v); }

void Vertex4fv(float v[4])
{ glVertex4fv(v); }

void Vertex4iv(int v[4])
{ glVertex4iv(v); }

void Vertex4sv(short v[4])
{ glVertex4sv(v); }


void Normal3b(signed char x, signed char y, signed char z)
{ glNormal3b(x, y, z); }

void Normal3d(double x, double y, double z)
{ glNormal3d(x, y, z); }

void Normal3f(float x, float y, float z)
{ glNormal3f(x, y, z); }

void Normal3i(int x, int y, int z)
{ glNormal3i(x, y, z); }

void Normal3s(short x, short y, short z)
{ glNormal3s(x, y, z); }


void Normal3bv(signed char v[3])
{ glNormal3bv(v); }

void Normal3dv(double v[3])
{ glNormal3dv(v); }

void Normal3fv(float v[3])
{ glNormal3fv(v); }

void Normal3iv(int v[3])
{ glNormal3iv(v); }

void Normal3sv(short v[3])
{ glNormal3sv(v); }


void Indexd(double v)
{ glIndexd(v); }

void Indexf(float v)
{ glIndexf(v); }

void Indexi(int v)
{ glIndexi(v); }

void Indexs(short v)
{ glIndexs(v); }

void Indexub(unsigned char v)
{ glIndexub(v); }


void Color3b(signed char r, signed char g, signed char b)
{ glColor3b(r, g, b); }

void Color3d(double r, double g, double b)
{ glColor3d(r, g, b); }

void Color3f(float r, float g, float b)
{ glColor3f(r, g, b); }

void Color3i(int r, int g, int b)
{ glColor3i(r, g, b); }

void Color3s(short r, short g, short b)
{ glColor3s(r, g, b); }

void Color3ub(unsigned char r, unsigned char g, unsigned char b)
{ glColor3ub(r, g, b); }

void Color3ui(unsigned int r, unsigned int g, unsigned int b)
{ glColor3ui(r, g, b); }

void Color3us(unsigned short r, unsigned short g, unsigned short b)
{ glColor3us(r, g, b); }


void Color4b(signed char r, signed char g, signed char b, signed char a)
{ glColor4b(r, g, b, a); }

void Color4d(double r, double g, double b, double a)
{ glColor4d(r, g, b, a); }

void Color4f(float r, float g, float b, float a)
{ glColor4f(r, g, b, a); }

void Color4i(int r, int g, int b, int a)
{ glColor4i(r, g, b, a); }

void Color4s(short r, short g, short b, short a)
{ glColor4s(r, g, b, a); }

void Color4ub(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
{ glColor4ub(r, g, b, a); }

void Color4ui(unsigned int r, unsigned int g, unsigned int b, unsigned int a)
{ glColor4ui(r, g, b, a); }

void Color4us(unsigned short r, unsigned short g, unsigned short b, unsigned short a)
{ glColor4us(r, g, b, a); }


void Color3bv(signed char v[3])
{ glColor3bv(v); }

void Color3dv(double v[3])
{ glColor3dv(v); }

void Color3fv(float v[3])
{ glColor3fv(v); }

void Color3iv(int v[3])
{ glColor3iv(v); }

void Color3sv(short v[3])
{ glColor3sv(v); }

void Color3ubv(unsigned char v[3])
{ glColor3ubv(v); }

void Color3uiv(unsigned int v[3])
{ glColor3uiv(v); }

void Color3usv(unsigned short v[3])
{ glColor3usv(v); }


void Color4bv(signed char v[4])
{ glColor4bv(v); }

void Color4dv(double v[4])
{ glColor4dv(v); }

void Color4fv(GLfloat v[4])
{ glColor4fv(v); }

void Color4iv(int v[4])
{ glColor4iv(v); }

void Color4sv(short v[4])
{ glColor4sv(v); }

void Color4ubv(unsigned char v[4])
{ glColor4ubv(v); }

void Color4uiv(unsigned int v[4])
{ glColor4uiv(v); }

void Color4usv(unsigned short v[4])
{ glColor4usv(v); }

void TexCoord1d(GLdouble s)
{ glTexCoord1d(s); }

void TexCoord1f(GLfloat s)
{ glTexCoord1f(s); }

void TexCoord1i(GLint s)
{ glTexCoord1i(s); }

void TexCoord1s(GLshort s)
{ glTexCoord1s(s); }


void ShadeModel(unsigned int m)
{ glShadeModel(m); }

void Lightf(unsigned int l, unsigned int p, float v)
{ glLightf(l, p, v); }

void Lighti(unsigned int l, unsigned int p, int v)
{ glLighti(l, p, v); }

void Lightfv(unsigned int l, unsigned int p, float v[4])
{ glLightfv(l, p, v); }

void Lightiv(unsigned int l, unsigned int p, int v[4])
{ glLightiv(l, p, v); }

void LightModelf(unsigned int p, float v)
{ glLightModelf(p, v); }

void LightModeli(unsigned int p, int v)
{ glLightModeli(p, v); }

void LightModelfv(unsigned int p, float v[4])
{ glLightModelfv(p, v); }

void LightModeliv(unsigned int p, int v[4])
{ glLightModeliv(p, v); }

void Materialf(unsigned int f, unsigned int p, float v)
{ glMaterialf(f, p, v); }

void Materiali(unsigned int f, unsigned int p, int v)
{ glMateriali(f, p, v); }

void Materialfv(unsigned int f, unsigned int p, float v[4])
{ glMaterialfv(f, p, v); }

void Materialiv(unsigned int f, unsigned int p, int v[4])
{ glMaterialiv(f, p, v); }


void StencilFunc(GLenum func, GLint ref, GLuint mask)
{ glStencilFunc(func, ref, mask); }

void StencilMask(GLuint mask)
{ glStencilMask(mask); }

void StencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{ glStencilOp(fail, zfail, zpass); }

void ClearStencil(GLint s)
{ glClearStencil(s); }


void TexGend(GLenum coord, GLenum pname, GLdouble param)
{ glTexGend(coord, pname, param); }

void TexGenf(GLenum coord, GLenum pname, GLfloat param)
{ glTexGenf(coord, pname, param); }

void TexGeni(GLenum coord, GLenum pname, GLint param)
{ glTexGeni(coord, pname, param); }


void Fogf(GLenum pname, GLfloat param)
{ glFogf(pname, param); }

void Fogi(GLenum pname, GLint param)
{ glFogi(pname, param); }


void GenTextures(GLsizei n, struct textures * t)
{
	t->data = malloc(sizeof(unsigned int) * n);
	glGenTextures(n, (unsigned int *)t->data);
}

void DeleteTextures(GLsizei n, struct textures * t)
{
	glDeleteTextures(n, (unsigned int *)t->data);
	free(t->data);
}

unsigned int tex(struct textures * t, unsigned int i)
{ return ((unsigned int *)t->data)[i]; }


void BindTexture(unsigned int tgt, unsigned int t)
{ glBindTexture(tgt, t); }

void TexImage2D(unsigned int tgt, int level, int intfmt, int w, int h, int border, unsigned int fmt, unsigned int type, void * px)
{ glTexImage2D(tgt, level, intfmt, w, h, border, fmt, type, px); }

void TexParameterf(unsigned int t, unsigned int p, float prm)
{ glTexParameterf(t, p, prm); }

void TexParameteri(unsigned int t, unsigned int p, int prm)
{ glTexParameteri(t, p, prm); }


