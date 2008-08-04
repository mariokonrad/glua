#include "gl.h"
#include <GL/gl.h>
#include <stdlib.h>

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

void ClipPlane(GLenum plane, GLdouble equation[4])
{ glClipPlane(plane, equation); }

void GetClipPlane(GLenum plane, GLdouble *equation)
{ glGetClipPlane(plane, equation); }

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

void EnableClientState(GLenum cap) /* 1.1 */
{ glEnableClientState(cap); }

void DisableClientState(GLenum cap) /* 1.1 */
{ glDisableClientState(cap); }

void GetBooleanv(GLenum pname, GLboolean *params)
{ glGetBooleanv(pname, params); }

void GetDoublev(GLenum pname, GLdouble *params)
{ glGetDoublev(pname, params); }

void GetFloatv(GLenum pname, GLfloat *params)
{ glGetFloatv(pname, params); }

void GetIntegerv(GLenum pname, GLint *params)
{ glGetIntegerv(pname, params); }

void PushAttrib(GLbitfield mask)
{ glPushAttrib(mask); }

void PopAttrib(void)
{ glPopAttrib(); }

void PushClientAttrib(GLbitfield mask) /* 1.1 */
{ glPushClientAttrib(mask); }

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

void LoadMatrixd(GLdouble v[16])
{ glLoadMatrixd(v); }

void LoadMatrixf(GLfloat v[16])
{ glLoadMatrixf(v); }

void MultMatrixd(GLdouble v[16])
{ glMultMatrixd(v); }

void MultMatrixf(GLfloat v[16])
{ glMultMatrixf(v); }

void Rotated(GLdouble phi, GLdouble x, GLdouble y, GLdouble z)
{ glRotated(phi, x, y, z); }

void Rotatef(GLfloat phi, GLfloat x, GLfloat y, GLfloat z)
{ glRotatef(phi, x, y, z); }

void Scaled(GLdouble x, GLdouble y, GLdouble z)
{ glScaled(x, y, z); }

void Scalef(GLfloat x, GLfloat y, GLfloat z)
{ glScalef(x, y, z); }

void Translated(GLdouble dx, GLdouble dy, GLdouble dz)
{ glTranslated(dx, dy, dz); }

void Translatef(GLfloat dx, GLfloat dy, GLfloat dz)
{ glTranslatef(dx, dy, dz); }

GLboolean IsList(GLuint list)
{ return glIsList(list); }

void DeleteLists(GLuint list, GLsizei range)
{ glDeleteLists(list, range); }

GLuint GenLists(GLsizei range)
{ return glGenLists(range); }

void NewList(GLuint list, GLenum mode)
{ glNewList(list, mode); }

void EndList(void)
{ glEndList(); }

void CallList(GLuint list)
{ glCallList(list); }

void CallLists(GLsizei n, GLenum type, GLvoid *lists)
{ glCallLists(n, type, lists); }

void ListBase(GLuint base)
{ glListBase(base); }

void Begin(unsigned int type)
{ glBegin(type); }

void End(void)
{ glEnd(); }

void Vertex2d(GLdouble x, GLdouble y)
{ glVertex2d(x, y); }

void Vertex2f(GLfloat x, GLfloat y)
{ glVertex2f(x, y); }

void Vertex2i(GLint x, GLint y)
{ glVertex2i(x, y); }

void Vertex2s(GLshort x, GLshort y)
{ glVertex2s(x, y); }


void Vertex3d(GLdouble x, GLdouble y, GLdouble z)
{ glVertex3d(x, y, z); }

void Vertex3f(GLfloat x, GLfloat y, GLfloat z)
{ glVertex3f(x, y, z); }

void Vertex3i(GLint x, GLint y, GLint z)
{ glVertex3i(x, y, z); }

void Vertex3s(GLshort x, GLshort y, GLshort z)
{ glVertex3s(x, y, z); }


void Vertex4d(GLdouble a, GLdouble b, GLdouble c, GLdouble d)
{ glVertex4d(a, b, c, d); }

void Vertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat a)
{ glVertex4f(x, y, z, a); }

void Vertex4i(GLint a, GLint b, GLint c, GLint d)
{ glVertex4i(a, b, c, d); }

void Vertex4s(GLshort x, GLshort y, GLshort z, GLshort a)
{ glVertex4s(x, y, z, a); }


void Vertex2dv(GLdouble v[2])
{ glVertex2dv(v); }

void Vertex2fv(GLfloat v[2])
{ glVertex2fv(v); }

void Vertex2iv(GLint v[2])
{ glVertex2iv(v); }

void Vertex2sv(GLshort v[2])
{ glVertex2sv(v); }


void Vertex3dv(GLdouble v[3])
{ glVertex3dv(v); }

void Vertex3fv(GLfloat v[3])
{ glVertex3fv(v); }

void Vertex3iv(GLint v[3])
{ glVertex3iv(v); }

void Vertex3sv(GLshort v[3])
{ glVertex3sv(v); }


void Vertex4dv(GLdouble v[4])
{ glVertex4dv(v); }

void Vertex4fv(GLfloat v[4])
{ glVertex4fv(v); }

void Vertex4iv(GLint v[4])
{ glVertex4iv(v); }

void Vertex4sv(GLshort v[4])
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

void Indexdv(GLdouble c[1])
{ glIndexdv(c); }

void Indexfv(GLfloat c[1])
{ glIndexfv(c); }

void Indexiv(GLint c[1])
{ glIndexiv(c); }

void Indexsv(GLshort c[1])
{ glIndexsv(c); }

void Indexubv(GLubyte c[1]) /* 1.1 */
{ glIndexubv(c); }

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

void TexCoord2d(GLdouble s, GLdouble t)
{ glTexCoord2d(s, t); }

void TexCoord2f(GLfloat s, GLfloat t)
{ glTexCoord2f(s, t); }

void TexCoord2i(GLint s, GLint t)
{ glTexCoord2i(s, t); }

void TexCoord2s(GLshort s, GLshort t)
{ glTexCoord2s(s, t); }

void TexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{ glTexCoord3d(s, t, r); }

void TexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{ glTexCoord3f(s, t, r); }

void TexCoord3i(GLint s, GLint t, GLint r)
{ glTexCoord3i(s, t, r); }

void TexCoord3s(GLshort s, GLshort t, GLshort r)
{ glTexCoord3s(s, t, r); }

void TexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{ glTexCoord4d(s, t, r, q); }

void TexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{ glTexCoord4f(s, t, r, q); }

void TexCoord4i(GLint s, GLint t, GLint r, GLint q)
{ glTexCoord4i(s, t, r, q); }

void TexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{ glTexCoord4s(s, t, r, q); }

void TexCoord1dv(GLdouble v[1])
{ glTexCoord1dv(v); }

void TexCoord1fv(GLfloat v[1])
{ glTexCoord1fv(v); }

void TexCoord1iv(GLint v[1])
{ glTexCoord1iv(v); }

void TexCoord1sv(GLshort v[1])
{ glTexCoord1sv(v); }

void TexCoord2dv(GLdouble v[2])
{ glTexCoord2dv(v); }

void TexCoord2fv(GLfloat v[2])
{ glTexCoord2fv(v); }

void TexCoord2iv(GLint v[2])
{ glTexCoord2iv(v); }

void TexCoord2sv(GLshort v[2])
{ glTexCoord2sv(v); }

void TexCoord3dv(GLdouble v[3])
{ glTexCoord3dv(v); }

void TexCoord3fv(GLfloat v[3])
{ glTexCoord3fv(v); }

void TexCoord3iv(GLint v[3])
{ glTexCoord3iv(v); }

void TexCoord3sv(GLshort v[3])
{ glTexCoord3sv(v); }

void TexCoord4dv(GLdouble v[4])
{ glTexCoord4dv(v); }

void TexCoord4fv(GLfloat v[4])
{ glTexCoord4fv(v); }

void TexCoord4iv(GLint v[4])
{ glTexCoord4iv(v); }

void TexCoord4sv(GLshort v[4])
{ glTexCoord4sv(v); }

void RasterPos2d(GLdouble x, GLdouble y)
{ glRasterPos2d(x, y); }

void RasterPos2f(GLfloat x, GLfloat y)
{ glRasterPos2f(x, y); }

void RasterPos2i(GLint x, GLint y)
{ glRasterPos2i(x, y); }

void RasterPos2s(GLshort x, GLshort y)
{ glRasterPos2s(x, y); }

void RasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{ glRasterPos3d(x, y, z); }

void RasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{ glRasterPos3f(x, y, z); }

void RasterPos3i(GLint x, GLint y, GLint z)
{ glRasterPos3i(x, y, z); }

void RasterPos3s(GLshort x, GLshort y, GLshort z)
{ glRasterPos3s(x, y, z); }

void RasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{ glRasterPos4d(x, y, z, w); }

void RasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{ glRasterPos4f(x, y, z, w); }

void RasterPos4i(GLint x, GLint y, GLint z, GLint w)
{ glRasterPos4i(x, y, z, w); }

void RasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{ glRasterPos4s(x, y, z, w); }

void RasterPos2dv(GLdouble v[2])
{ glRasterPos2dv(v); }

void RasterPos2fv(GLfloat v[2])
{ glRasterPos2fv(v); }

void RasterPos2iv(GLint v[2])
{ glRasterPos2iv(v); }

void RasterPos2sv(GLshort v[2])
{ glRasterPos2sv(v); }

void RasterPos3dv(GLdouble v[3])
{ glRasterPos3dv(v); }

void RasterPos3fv(GLfloat v[3])
{ glRasterPos3fv(v); }

void RasterPos3iv(GLint v[3])
{ glRasterPos3iv(v); }

void RasterPos3sv(GLshort v[3])
{ glRasterPos3sv(v); }

void RasterPos4dv(GLdouble v[4])
{ glRasterPos4dv(v); }

void RasterPos4fv(GLfloat v[4])
{ glRasterPos4fv(v); }

void RasterPos4iv(GLint v[4])
{ glRasterPos4iv(v); }

void RasterPos4sv(GLshort v[4])
{ glRasterPos4sv(v); }

void Rectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{ glRectd(x1, y1, x2, y2); }

void Rectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{ glRectf(x1, y1, x2, y2); }

void Recti(GLint x1, GLint y1, GLint x2, GLint y2)
{ glRecti(x1, y1, x2, y2); }

void Rects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{ glRects(x1, y1, x2, y2); }

void Rectdv(GLdouble v1[2], GLdouble v2[2])
{ glRectdv(v1, v2); }

void Rectfv(GLfloat v1[2], GLfloat v2[2])
{ glRectfv(v1, v2); }

void Rectiv(GLint v1[2], GLint v2[2])
{ glRectiv(v1, v2); }

void Rectsv(GLshort v1[2], GLshort v2[2])
{ glRectsv(v1, v2); }

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

void GetLightfv(GLenum light, GLenum pname, GLfloat *params)
{ glGetLightfv(light, pname, params); }

void GetLightiv(GLenum light, GLenum pname, GLint *params)
{ glGetLightiv(light, pname, params); }

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

void GetMaterialfv(GLenum face, GLenum pname, GLfloat *params)
{ glGetMaterialfv(face, pname, params); }

void GetMaterialiv(GLenum face, GLenum pname, GLint *params)
{ glGetMaterialiv(face, pname, params); }

void ColorMaterial(GLenum face, GLenum mode)
{ glColorMaterial(face, mode); }

void PixelZoom(GLfloat xfactor, GLfloat yfactor)
{ glPixelZoom(xfactor, yfactor); }

void PixelStoref(GLenum pname, GLfloat param)
{ glPixelStoref(pname, param); }

void PixelStorei(GLenum pname, GLint param)
{ glPixelStorei(pname, param); }

void PixelTransferf(GLenum pname, GLfloat param)
{ glPixelTransferf(pname, param); }

void PixelTransferi(GLenum pname, GLint param)
{ glPixelTransferi(pname, param); }

void PixelMapfv(GLenum map, GLint mapsize, GLfloat *values)
{ glPixelMapfv(map, mapsize, values); }

void PixelMapuiv(GLenum map, GLint mapsize, GLuint *values)
{ glPixelMapuiv(map, mapsize, values); }

void PixelMapusv(GLenum map, GLint mapsize, GLushort *values)
{ glPixelMapusv(map, mapsize, values); }

void DrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels)
{ glDrawPixels(width, height, format, type, pixels); }

void CopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{ glCopyPixels(x, y, width, height, type); }

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

void TexGendv(GLenum coord, GLenum pname, GLdouble *params)
{ glTexGendv(coord, pname, params); }

void TexGenfv(GLenum coord, GLenum pname, GLfloat *params)
{ glTexGenfv(coord, pname, params); }

void TexGeniv(GLenum coord, GLenum pname, GLint *params)
{ glTexGeniv(coord, pname, params); }

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

void TexImage1D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, GLvoid *pixels)
{ glTexImage1D(target, level, internalFormat, width, border, format, type, pixels); }

void TexImage2D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, GLvoid *pixels)
{ glTexImage2D(target, level, internalFormat, width, height, border, format, type, pixels); }

void TexParameterf(unsigned int t, unsigned int p, float prm)
{ glTexParameterf(t, p, prm); }

void TexParameteri(unsigned int t, unsigned int p, int prm)
{ glTexParameteri(t, p, prm); }

void TexParameterfv(GLenum target, GLenum pname, GLfloat *params)
{ glTexParameterfv(target, pname, params); }

void TexParameteriv(GLenum target, GLenum pname, GLint *params)
{ glTexParameteriv(target, pname, params); }

void TexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, GLvoid *pixels)
{ glTexSubImage1D(target, level, xoffset, width, format, type, pixels); }

void TexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels)
{ glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels); }

void CopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
{ glCopyTexImage1D(target, level, internalformat, x, y, width, border); }

void CopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{ glCopyTexImage2D(target, level, internalformat, x, y, width, height, border); }

void CopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{ glCopyTexSubImage1D(target, level, xoffset, x, y, width); }

void CopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{ glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height); }

void Fogf(GLenum pname, GLfloat param)
{ glFogf(pname, param); }

void Fogi(GLenum pname, GLint param)
{ glFogi(pname, param); }

void Fogfv(GLenum pname, GLfloat *params)
{ glFogfv(pname, params); }

void Fogiv(GLenum pname, GLint *params)
{ glFogiv(pname, params); }

void InitNames(void)
{ glInitNames(); }

void LoadName(GLuint name)
{ glLoadName(name); }

void PushName(GLuint name)
{ glPushName(name); }

void PopName(void)
{ glPopName(); }

