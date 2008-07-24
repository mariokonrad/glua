#include "gl.h"
#include <GL/gl.h>

static const unsigned int BIT[][2] = {

	/* attribute bits */
	{ _CURRENT_BIT          , GL_CURRENT_BIT          },
	{ _POINT_BIT            , GL_POINT_BIT            },
	{ _LINE_BIT             , GL_LINE_BIT             },
	{ _POLYGON_BIT          , GL_POLYGON_BIT          },
	{ _POLYGON_STIPPLE_BIT  , GL_POLYGON_STIPPLE_BIT  },
	{ _PIXEL_MODE_BIT       , GL_PIXEL_MODE_BIT       },
	{ _LIGHTING_BIT         , GL_LIGHTING_BIT         },
	{ _FOG_BIT              , GL_FOG_BIT              },
	{ _DEPTH_BUFFER_BIT     , GL_DEPTH_BUFFER_BIT     },
	{ _ACCUM_BUFFER_BIT     , GL_ACCUM_BUFFER_BIT     },
	{ _STENCIL_BUFFER_BIT   , GL_STENCIL_BUFFER_BIT   },
	{ _VIEWPORT_BIT         , GL_VIEWPORT_BIT         },
	{ _TRANSFORM_BIT        , GL_TRANSFORM_BIT        },
	{ _ENABLE_BIT           , GL_ENABLE_BIT           },
	{ _COLOR_BUFFER_BIT     , GL_COLOR_BUFFER_BIT     },
	{ _HINT_BIT             , GL_HINT_BIT             },
	{ _EVAL_BIT             , GL_EVAL_BIT             },
	{ _LIST_BIT             , GL_LIST_BIT             },
	{ _TEXTURE_BIT          , GL_TEXTURE_BIT          },
	{ _SCISSOR_BIT          , GL_SCISSOR_BIT          },
	{ _ALL_ATTRIB_BITS      , GL_ALL_ATTRIB_BITS      },
};

static const int MAP[][2] = {

	/* primitives */
	{ _POINTS                               , GL_POINTS                                 },
	{ _LINES                                , GL_LINES                                  },
	{ _LINE_LOOP                            , GL_LINE_LOOP                              },
	{ _LINE_STRIP                           , GL_LINE_STRIP                             },
	{ _TRIANGLES                            , GL_TRIANGLES                              },
	{ _TRIANGLE_STRIP                       , GL_TRIANGLE_STRIP                         },
	{ _TRIANGLE_FAN                         , GL_TRIANGLE_FAN                           },
	{ _QUADS                                , GL_QUADS                                  },
	{ _QUAD_STRIP                           , GL_QUAD_STRIP                             },
	{ _POLYGON                              , GL_POLYGON                                },

	/* matrix mode */
	{ _MATRIX_MODE                          , GL_MATRIX_MODE                            },
	{ _MODELVIEW                            , GL_MODELVIEW                              },
	{ _PROJECTION                           , GL_PROJECTION                             },
	{ _TEXTURE                              , GL_TEXTURE                                },

	/* points */
	{ _POINT_SMOOTH                         , GL_POINT_SMOOTH                           },
	{ _POINT_SIZE                           , GL_POINT_SIZE                             },
	{ _POINT_SIZE_GRANULARITY               , GL_POINT_SIZE_GRANULARITY                 },
	{ _POINT_SIZE_RANGE                     , GL_POINT_SIZE_RANGE                       },

	/* lines */
	{ _LINE_SMOOTH                          , GL_LINE_SMOOTH                            },
	{ _LINE_STIPPLE                         , GL_LINE_STIPPLE                           },
	{ _LINE_STIPPLE_PATTERN                 , GL_LINE_STIPPLE_PATTERN                   },
	{ _LINE_STIPPLE_REPEAT                  , GL_LINE_STIPPLE_REPEAT                    },
	{ _LINE_WIDTH                           , GL_LINE_WIDTH                             },
	{ _LINE_WIDTH_GRANULARITY               , GL_LINE_WIDTH_GRANULARITY                 },
	{ _LINE_WIDTH_RANGE                     , GL_LINE_WIDTH_RANGE                       },

	/* polygons */
	{ _POINT                                , GL_POINT                                  },
	{ _LINE                                 , GL_LINE                                   },
	{ _FILL                                 , GL_FILL                                   },
	{ _CW                                   , GL_CW                                     },
	{ _CCW                                  , GL_CCW                                    },
	{ _FRONT                                , GL_FRONT                                  },
	{ _BACK                                 , GL_BACK                                   },
	{ _POLYGON_MODE                         , GL_POLYGON_MODE                           },
	{ _POLYGON_SMOOTH                       , GL_POLYGON_SMOOTH                         },
	{ _POLYGON_STIPPLE                      , GL_POLYGON_STIPPLE                        },
	{ _EDGE_FLAG                            , GL_EDGE_FLAG                              },
	{ _CULL_FACE                            , GL_CULL_FACE                              },
	{ _CULL_FACE_MODE                       , GL_CULL_FACE_MODE                         },
	{ _FRONT_FACE                           , GL_FRONT_FACE                             },
	{ _POLYGON_OFFSET_FACTOR                , GL_POLYGON_OFFSET_FACTOR                  },
	{ _POLYGON_OFFSET_UNITS                 , GL_POLYGON_OFFSET_UNITS                   },
	{ _POLYGON_OFFSET_POINT                 , GL_POLYGON_OFFSET_POINT                   },
	{ _POLYGON_OFFSET_LINE                  , GL_POLYGON_OFFSET_LINE                    },
	{ _POLYGON_OFFSET_FILL                  , GL_POLYGON_OFFSET_FILL                    },

	/* display lists */
	{ _COMPILE                              , GL_COMPILE                                },
	{ _COMPILE_AND_EXECUTE                  , GL_COMPILE_AND_EXECUTE                    },
	{ _LIST_BASE                            , GL_LIST_BASE                              },
	{ _LIST_INDEX                           , GL_LIST_INDEX                             },
	{ _LIST_MODE                            , GL_LIST_MODE                              },

	/* depth buffer */
	{ _NEVER                                , GL_NEVER                                  },
	{ _LESS                                 , GL_LESS                                   },
	{ _EQUAL                                , GL_EQUAL                                  },
	{ _LEQUAL                               , GL_LEQUAL                                 },
	{ _GREATER                              , GL_GREATER                                },
	{ _NOTEQUAL                             , GL_NOTEQUAL                               },
	{ _GEQUAL                               , GL_GEQUAL                                 },
	{ _ALWAYS                               , GL_ALWAYS                                 },
	{ _DEPTH_TEST                           , GL_DEPTH_TEST                             },
	{ _DEPTH_BITS                           , GL_DEPTH_BITS                             },
	{ _DEPTH_CLEAR_VALUE                    , GL_DEPTH_CLEAR_VALUE                      },
	{ _DEPTH_FUNC                           , GL_DEPTH_FUNC                             },
	{ _DEPTH_RANGE                          , GL_DEPTH_RANGE                            },
	{ _DEPTH_WRITEMASK                      , GL_DEPTH_WRITEMASK                        },
	{ _DEPTH_COMPONENT                      , GL_DEPTH_COMPONENT                        },

	/* lighting */
	{ _LIGHTING                             , GL_LIGHTING                               },
	{ _LIGHT0                               , GL_LIGHT0                                 },
	{ _LIGHT1                               , GL_LIGHT1                                 },
	{ _LIGHT2                               , GL_LIGHT2                                 },
	{ _LIGHT3                               , GL_LIGHT3                                 },
	{ _LIGHT4                               , GL_LIGHT4                                 },
	{ _LIGHT5                               , GL_LIGHT5                                 },
	{ _LIGHT6                               , GL_LIGHT6                                 },
	{ _LIGHT7                               , GL_LIGHT7                                 },
	{ _SPOT_EXPONENT                        , GL_SPOT_EXPONENT                          },
	{ _SPOT_CUTOFF                          , GL_SPOT_CUTOFF                            },
	{ _CONSTANT_ATTENUATION                 , GL_CONSTANT_ATTENUATION                   },
	{ _LINEAR_ATTENUATION                   , GL_LINEAR_ATTENUATION                     },
	{ _QUADRATIC_ATTENUATION                , GL_QUADRATIC_ATTENUATION                  },
	{ _AMBIENT                              , GL_AMBIENT                                },
	{ _DIFFUSE                              , GL_DIFFUSE                                },
	{ _SPECULAR                             , GL_SPECULAR                               },
	{ _SHININESS                            , GL_SHININESS                              },
	{ _EMISSION                             , GL_EMISSION                               },
	{ _POSITION                             , GL_POSITION                               },
	{ _SPOT_DIRECTION                       , GL_SPOT_DIRECTION                         },
	{ _AMBIENT_AND_DIFFUSE                  , GL_AMBIENT_AND_DIFFUSE                    },
	{ _COLOR_INDEXES                        , GL_COLOR_INDEXES                          },
	{ _LIGHT_MODEL_TWO_SIDE                 , GL_LIGHT_MODEL_TWO_SIDE                   },
	{ _LIGHT_MODEL_LOCAL_VIEWER             , GL_LIGHT_MODEL_LOCAL_VIEWER               },
	{ _LIGHT_MODEL_AMBIENT                  , GL_LIGHT_MODEL_AMBIENT                    },
	{ _FRONT_AND_BACK                       , GL_FRONT_AND_BACK                         },
	{ _SHADE_MODEL                          , GL_SHADE_MODEL                            },
	{ _FLAT                                 , GL_FLAT                                   },
	{ _SMOOTH                               , GL_SMOOTH                                 },
	{ _COLOR_MATERIAL                       , GL_COLOR_MATERIAL                         },
	{ _COLOR_MATERIAL_FACE                  , GL_COLOR_MATERIAL_FACE                    },
	{ _COLOR_MATERIAL_PARAMETER             , GL_COLOR_MATERIAL_PARAMETER               },
	{ _NORMALIZE                            , GL_NORMALIZE                              },

	/* user clipping planes */
	{ _CLIP_PLANE0                          , GL_CLIP_PLANE0                            },
	{ _CLIP_PLANE1                          , GL_CLIP_PLANE1                            },
	{ _CLIP_PLANE2                          , GL_CLIP_PLANE2                            },
	{ _CLIP_PLANE3                          , GL_CLIP_PLANE3                            },
	{ _CLIP_PLANE4                          , GL_CLIP_PLANE4                            },
	{ _CLIP_PLANE5                          , GL_CLIP_PLANE5                            },

	/* accumulation buffer */
	{ _ACCUM_RED_BITS                       , GL_ACCUM_RED_BITS                         },
	{ _ACCUM_GREEN_BITS                     , GL_ACCUM_GREEN_BITS                       },
	{ _ACCUM_BLUE_BITS                      , GL_ACCUM_BLUE_BITS                        },
	{ _ACCUM_ALPHA_BITS                     , GL_ACCUM_ALPHA_BITS                       },
	{ _ACCUM_CLEAR_VALUE                    , GL_ACCUM_CLEAR_VALUE                      },
	{ _ACCUM                                , GL_ACCUM                                  },
	{ _ADD                                  , GL_ADD                                    },
	{ _LOAD                                 , GL_LOAD                                   },
	{ _MULT                                 , GL_MULT                                   },
	{ _RETURN                               , GL_RETURN                                 },

	/* alpha testing */
	{ _ALPHA_TEST                           , GL_ALPHA_TEST                             },
	{ _ALPHA_TEST_REF                       , GL_ALPHA_TEST_REF                         },
	{ _ALPHA_TEST_FUNC                      , GL_ALPHA_TEST_FUNC                        },

	/* blending */
	{ _BLEND                                , GL_BLEND                                  },
	{ _BLEND_SRC                            , GL_BLEND_SRC                              },
	{ _BLEND_DST                            , GL_BLEND_DST                              },
/*
	{ _ZERO                                 , GL_ZERO                                   },
	{ _ONE                                  , GL_ONE                                    },
*/
	{ _SRC_COLOR                            , GL_SRC_COLOR                              },
	{ _ONE_MINUS_SRC_COLOR                  , GL_ONE_MINUS_SRC_COLOR                    },
	{ _SRC_ALPHA                            , GL_SRC_ALPHA                              },
	{ _ONE_MINUS_SRC_ALPHA                  , GL_ONE_MINUS_SRC_ALPHA                    },
	{ _DST_ALPHA                            , GL_DST_ALPHA                              },
	{ _ONE_MINUS_DST_ALPHA                  , GL_ONE_MINUS_DST_ALPHA                    },
	{ _DST_COLOR                            , GL_DST_COLOR                              },
	{ _ONE_MINUS_DST_COLOR                  , GL_ONE_MINUS_DST_COLOR                    },
	{ _SRC_ALPHA_SATURATE                   , GL_SRC_ALPHA_SATURATE                     },
	{ _CONSTANT_COLOR                       , GL_CONSTANT_COLOR                         },
	{ _ONE_MINUS_CONSTANT_COLOR             , GL_ONE_MINUS_CONSTANT_COLOR               },
	{ _CONSTANT_ALPHA                       , GL_CONSTANT_ALPHA                         },
	{ _ONE_MINUS_CONSTANT_ALPHA             , GL_ONE_MINUS_CONSTANT_ALPHA               },

	/* render mode */
	{ _FEEDBACK                             , GL_FEEDBACK                               },
	{ _RENDER                               , GL_RENDER                                 },
	{ _SELECT                               , GL_SELECT                                 },

	/* hints */
	{ _FOG_HINT                             , GL_FOG_HINT                               },
	{ _LINE_SMOOTH_HINT                     , GL_LINE_SMOOTH_HINT                       },
	{ _PERSPECTIVE_CORRECTION_HINT          , GL_PERSPECTIVE_CORRECTION_HINT            },
	{ _POINT_SMOOTH_HINT                    , GL_POINT_SMOOTH_HINT                      },
	{ _POLYGON_SMOOTH_HINT                  , GL_POLYGON_SMOOTH_HINT                    },
	{ _DONT_CARE                            , GL_DONT_CARE                              },
	{ _FASTEST                              , GL_FASTEST                                },
	{ _NICEST                               , GL_NICEST                                 },
};

static unsigned int glmap(unsigned int v)
{
#if defined(FAST_CONV)
	return v;
#else
	int i;
	for (i = 0; i < sizeof(MAP)/(2*sizeof(int)); ++i)
		if (MAP[i][0] == v) return MAP[i][1];
	return -1;
#endif
}

static unsigned int glmapbit(unsigned int v)
{
#if defined(FAST_CONV)
	return v;
#else
	int r;
	int i;

	r = 0;
	for (i = 0; i < sizeof(BIT)/(2*sizeof(int)); ++i)
		if (v & BIT[i][0]) r |= BIT[i][1];
	return r;
#endif
}


/* misc */
void ClearIndex(float c) { glClearIndex(c); }
void ClearColor(float r, float g, float b, float a) { glClearColor(r, g, b, a); }
void Clear(unsigned int m) { glClear(glmapbit(m)); }
void IndexMask(unsigned int m) { glIndexMask(m); }
void ColorMask(unsigned char r, unsigned char g, unsigned char b, unsigned char a) { glColorMask(r, g, b, a); }
void AlphaFunc(unsigned int f, float a) { glAlphaFunc(f, a); }
void BlendFunc(unsigned int sf, unsigned int df) { glBlendFunc(sf, df); }
void LogicOp(unsigned int op) { glLogicOp(op); }
void CullFace(unsigned int f) { glCullFace(glmap(f)); }
void FrontFace(unsigned int f) { glFrontFace(glmap(f)); }
void PointSize(float s) { glPointSize(s); }
void LineWidth(float w) { glLineWidth(w); }
void LineStipple(int f, unsigned short p) { glLineStipple(f, p); }
void PolygonMode(unsigned int f, unsigned int m) { glPolygonMode(glmap(f), glmap(m)); }
void PolygonOffset(float f, float ofs) { glPolygonOffset(f, ofs); }
void EdgeFlag(unsigned char f) { glEdgeFlag(f); }
void Scissor(int x, int y, int w, int h) { glScissor(x, y, w, h); }
void DrawBuffer(unsigned int m) { glDrawBuffer(glmap(m)); }
void ReadBuffer(unsigned int m) { glReadBuffer(glmap(m)); }
void Enable(unsigned int f) { glEnable(glmap(f)); }
void Disable(unsigned int f) { glDisable(glmap(f)); }
unsigned char IsEnabled(unsigned int cap) { return glIsEnabled(cap) == GL_TRUE ? _TRUE : _FALSE; }
void PopClientAttrib(void) { glPopClientAttrib(); } /* 1.1 */
void RenderMode(unsigned int m) { glRenderMode(m); }
unsigned int GetError(void) { return glGetError(); }
void Finish(void) { glFinish(); }
void Flush(void) { glFlush(); }
void Hint(unsigned int t, unsigned int m) { glHint(t, m); }

/* depth buffer */
void ClearDepth(double d) { glClearDepth(d); }
void DepthFunc(unsigned int f) { glDepthFunc(glmap(f)); }
void DepthMask(unsigned char m) { glDepthMask(glmap(m)); }
void DepthRange(double n, double f) { glDepthRange(n, f); }

/* accumulation buffer */
void ClearAccum(float r, float g, float b, float a) { glClearAccum(r, g, b, a); }
void Accum(unsigned int op, float v) { glAccum(glmap(op), v); }

/* transformation */
void MatrixMode(unsigned int m) { glMatrixMode(glmap(m)); }
void Ortho(double l, double r, double b, double t, double n, double f) { glOrtho(l, r, b, t, n, f); }
void Frustum(double l, double r, double b, double t, double n, double f) { glFrustum(l, r, b, t, n, f); }
void Viewport(int x, int y, int w, int h) { glViewport(x, y, w, h); }
void PushMatrix(void) { glPushMatrix(); }
void PopMatrix(void) { glPopMatrix(); }
void LoadIdentity(void) { glLoadIdentity(); }
void LoadMatrixd(double arr[16]) { glLoadMatrixd(arr); }
void LoadMatrixf(float arr[16]) { glLoadMatrixf(arr); }
void MultMatrixd(double arr[16]) { glMultMatrixd(arr); }
void MultMatrixf(float arr[16]) { glMultMatrixf(arr); }
void Rotated(double phi, double x, double y, double z) { glRotated(phi, x, y, z); }
void Rotatef(float phi, float x, float y, float z) { glRotatef(phi, x, y, z); }
void Scaled(double x, double y, double z) { glScaled(x, y, z); }
void Scalef(float x, float y, float z) { glScalef(x, y, z); }
void Translated(double dx, double dy, double dz) { glTranslated(dx, dy, dz); }
void Translatef(float dx, float dy, float dz) { glTranslatef(dx, dy, dz); }

/* display lists */

/* drawing functions */
void Begin(unsigned int type) { glBegin(glmap(type)); }
void End(void) { glEnd(); }

void Vertex2d(double x, double y) { glVertex2d(x, y); }
void Vertex2f(float x, float y) { glVertex2f(x, y); }
void Vertex2i(int x, int y) { glVertex2i(x, y); }
void Vertex2s(short x, short y) { glVertex2s(x, y); }

void Vertex3d(double x, double y, double z) { glVertex3d(x, y, z); }
void Vertex3f(float x, float y, float z) { glVertex3f(x, y, z); }
void Vertex3i(int x, int y, int z) { glVertex3i(x, y, z); }
void Vertex3s(short x, short y, short z) { glVertex3s(x, y, z); }

void Vertex4d(double a, double b, double c, double d) { glVertex4d(a, b, c, d); }
void Vertex4f(float x, float y, float z, float a) { glVertex4f(x, y, z, a); }
void Vertex4i(int a, int b, int c, int d) { glVertex4i(a, b, c, d); }
void Vertex4s(short x, short y, short z, short a) { glVertex4s(x, y, z, a); }

void Vertex2dv(double v[2]) { glVertex2dv(v); }
void Vertex2fv(float v[2]) { glVertex2fv(v); }
void Vertex2iv(int v[2]) { glVertex2iv(v); }
void Vertex2sv(short v[2]) { glVertex2sv(v); }

void Vertex3dv(double v[3]) { glVertex3dv(v); }
void Vertex3fv(float v[3]) { glVertex3fv(v); }
void Vertex3iv(int v[3]) { glVertex3iv(v); }
void Vertex3sv(short v[3]) { glVertex3sv(v); }

void Vertex4dv(double v[4]) { glVertex4dv(v); }
void Vertex4fv(float v[4]) { glVertex4fv(v); }
void Vertex4iv(int v[4]) { glVertex4iv(v); }
void Vertex4sv(short v[4]) { glVertex4sv(v); }

void Normal3b(signed char x, signed char y, signed char z) { glNormal3b(x, y, z); }
void Normal3d(double x, double y, double z) { glNormal3d(x, y, z); }
void Normal3f(float x, float y, float z) { glNormal3f(x, y, z); }
void Normal3i(int x, int y, int z) { glNormal3i(x, y, z); }
void Normal3s(short x, short y, short z) { glNormal3s(x, y, z); }

void Normal3bv(signed char v[3]) { glNormal3bv(v); }
void Normal3dv(double v[3]) { glNormal3dv(v); }
void Normal3fv(float v[3]) { glNormal3fv(v); }
void Normal3iv(int v[3]) { glNormal3iv(v); }
void Normal3sv(short v[3]) { glNormal3sv(v); }

void Indexd(double v) { glIndexd(v); }
void Indexf(float v) { glIndexf(v); }
void Indexi(int v) { glIndexi(v); }
void Indexs(short v) { glIndexs(v); }
void Indexub(unsigned char v) { glIndexub(v); }

void Color3b(signed char r, signed char g, signed char b) { glColor3b(r, g, b); }
void Color3d(double r, double g, double b) { glColor3d(r, g, b); }
void Color3f(float r, float g, float b) { glColor3f(r, g, b); }
void Color3i(int r, int g, int b) { glColor3i(r, g, b); }
void Color3s(short r, short g, short b) { glColor3s(r, g, b); }
void Color3ub(unsigned char r, unsigned char g, unsigned char b) { glColor3ub(r, g, b); }
void Color3ui(unsigned int r, unsigned int g, unsigned int b) { glColor3ui(r, g, b); }
void Color3us(unsigned short r, unsigned short g, unsigned short b) { glColor3us(r, g, b); }

void Color4b(signed char r, signed char g, signed char b, signed char a) { glColor4b(r, g, b, a); }
void Color4d(double r, double g, double b, double a) { glColor4d(r, g, b, a); }
void Color4f(float r, float g, float b, float a) { glColor4f(r, g, b, a); }
void Color4i(int r, int g, int b, int a) { glColor4i(r, g, b, a); }
void Color4s(short r, short g, short b, short a) { glColor4s(r, g, b, a); }
void Color4ub(unsigned char r, unsigned char g, unsigned char b, unsigned char a) { glColor4ub(r, g, b, a); }
void Color4ui(unsigned int r, unsigned int g, unsigned int b, unsigned int a) { glColor4ui(r, g, b, a); }
void Color4us(unsigned short r, unsigned short g, unsigned short b, unsigned short a) { glColor4us(r, g, b, a); }

void Color3bv(signed char arr[3]) { glColor3bv(arr); }
void Color3dv(double arr[3]) { glColor3dv(arr); }
void Color3fv(float arr[3]) { glColor3fv(arr); }
void Color3iv(int arr[3]) { glColor3iv(arr); }
void Color3sv(short arr[3]) { glColor3sv(arr); }
void Color3ubv(unsigned char arr[3]) { glColor3ubv(arr); }
void Color3uiv(unsigned int arr[3]) { glColor3uiv(arr); }
void Color3usv(unsigned short arr[3]) { glColor3usv(arr); }

void Color4bv(signed char arr[4]) { glColor4bv(arr); }
void Color4dv(double arr[4]) { glColor4dv(arr); }
void Color4fv(float arr[4]) { glColor4fv(arr); }
void Color4iv(int arr[4]) { glColor4iv(arr); }
void Color4sv(short arr[4]) { glColor4sv(arr); }
void Color4ubv(unsigned char arr[4]) { glColor4ubv(arr); }
void Color4uiv(unsigned int arr[4]) { glColor4uiv(arr); }
void Color4usv(unsigned short arr[4]) { glColor4usv(arr); }

/* vertex arrays 1.1 */

/* lighting */
void ShadeModel(unsigned int m) { glShadeModel(glmap(m)); }
void Lightf(unsigned int l, unsigned int p, float v) { glLightf(glmap(l), glmap(p), v); }
void Lighti(unsigned int l, unsigned int p, int v) { glLighti(glmap(l), glmap(p), v); }
void Lightfv(unsigned int l, unsigned int p, float arr[4]) { glLightfv(glmap(l), glmap(p), arr); }
void Lightiv(unsigned int l, unsigned int p, int arr[4]) { glLightiv(glmap(l), glmap(p), arr); }
void LightModelf(unsigned int p, float v) { glLightModelf(glmap(p), v); }
void LightModeli(unsigned int p, int v) { glLightModeli(glmap(p), v); }
void LightModelfv(unsigned int p, float arr[4]) { glLightModelfv(p, arr); }
void LightModeliv(unsigned int p, int arr[4]) { glLightModeliv(p, arr); }
void Materialf(unsigned int f, unsigned int p, float v) { glMaterialf(glmap(f), glmap(p), v); }
void Materiali(unsigned int f, unsigned int p, int v) { glMateriali(glmap(f), glmap(p), v); }
void Materialfv(unsigned int f, unsigned int p, float arr[4]) { glMaterialfv(glmap(f), glmap(p), arr); }
void Materialiv(unsigned int f, unsigned int p, int arr[4]) { glMaterialiv(glmap(f), glmap(p), arr); }

/* raster functions */

/* stenciling */

/* texture mapping */
void GenTextures(int n, struct textures * t)
{
	t->data = malloc(sizeof(unsigned int) * n);
	glGenTextures(n, (unsigned int *)t->data);
}

void DeleteTextures(int n, struct textures * t)
{
	glDeleteTextures(n, (unsigned int *)t->data);
	free(t->data);
}

unsigned int texture(struct textures * t, unsigned int i) { return ((unsigned int *)t->data)[i]; }

void BindTexture(unsigned int tgt, unsigned int t) { glBindTexture(glmap(tgt), t); }
void TexImage2D(unsigned int tgt, int level, int intfmt, int w, int h, int border, unsigned int fmt, unsigned int type, void * px) { glTexImage2D(glmap(tgt), level, intfmt, w, h, border, glmap(fmt), glmap(type), px); }
void TexParameterf(unsigned int t, unsigned int p, float prm) { glTexParameterf(glmap(t), glmap(p), prm); }
void TexParameteri(unsigned int t, unsigned int p, int prm) { glTexParameteri(glmap(t), glmap(p), prm); }

/* evaluator */

/* fog */

/* selection and feedback */

