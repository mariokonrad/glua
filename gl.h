#ifndef __GL__H__
#define __GL__H__

/* boolean */
#define _FALSE                                0x0
#define _TRUE                                 0x1

/* primitives */
#define _POINTS                               0x0000
#define _LINES                                0x0001
#define _LINE_LOOP                            0x0002
#define _LINE_STRIP                           0x0003
#define _TRIANGLES                            0x0004
#define _TRIANGLE_STRIP                       0x0005
#define _TRIANGLE_FAN                         0x0006
#define _QUADS                                0x0007
#define _QUAD_STRIP                           0x0008
#define _POLYGON                              0x0009

/* matrix mode */
#define _MATRIX_MODE                          0x0ba0
#define _MODELVIEW                            0x1700
#define _PROJECTION                           0x1701
#define _TEXTURE                              0x1702

/* points */
#define _POINT_SMOOTH                         0x0B10
#define _POINT_SIZE                           0x0B11
#define _POINT_SIZE_GRANULARITY               0x0B13
#define _POINT_SIZE_RANGE                     0x0B12

/* lines */
#define _LINE_SMOOTH                          0x0B20
#define _LINE_STIPPLE                         0x0B24
#define _LINE_STIPPLE_PATTERN                 0x0B25
#define _LINE_STIPPLE_REPEAT                  0x0B26
#define _LINE_WIDTH                           0x0B21
#define _LINE_WIDTH_GRANULARITY               0x0B23
#define _LINE_WIDTH_RANGE                     0x0B22

/* polygons */
#define _POINT                                0x1B00
#define _LINE                                 0x1B01
#define _FILL                                 0x1B02
#define _CW                                   0x0900
#define _CCW                                  0x0901
#define _FRONT                                0x0404
#define _BACK                                 0x0405
#define _POLYGON_MODE                         0x0B40
#define _POLYGON_SMOOTH                       0x0B41
#define _POLYGON_STIPPLE                      0x0B42
#define _EDGE_FLAG                            0x0B43
#define _CULL_FACE                            0x0B44
#define _CULL_FACE_MODE                       0x0B45
#define _FRONT_FACE                           0x0B46
#define _POLYGON_OFFSET_FACTOR                0x8038
#define _POLYGON_OFFSET_UNITS                 0x2A00
#define _POLYGON_OFFSET_POINT                 0x2A01
#define _POLYGON_OFFSET_LINE                  0x2A02
#define _POLYGON_OFFSET_FILL                  0x8037

/* display lists */
#define _COMPILE                              0x1300
#define _COMPILE_AND_EXECUTE                  0x1301
#define _LIST_BASE                            0x0B32
#define _LIST_INDEX                           0x0B33
#define _LIST_MODE                            0x0B30

/* depth buffer */
#define _NEVER                                0x0200
#define _LESS                                 0x0201
#define _EQUAL                                0x0202
#define _LEQUAL                               0x0203
#define _GREATER                              0x0204
#define _NOTEQUAL                             0x0205
#define _GEQUAL                               0x0206
#define _ALWAYS                               0x0207
#define _DEPTH_TEST                           0x0B71
#define _DEPTH_BITS                           0x0D56
#define _DEPTH_CLEAR_VALUE                    0x0B73
#define _DEPTH_FUNC                           0x0B74
#define _DEPTH_RANGE                          0x0B70
#define _DEPTH_WRITEMASK                      0x0B72
#define _DEPTH_COMPONENT                      0x1902

/* lighting */
#define _LIGHTING                             0x0B50
#define _LIGHT0                               0x4000
#define _LIGHT1                               0x4001
#define _LIGHT2                               0x4002
#define _LIGHT3                               0x4003
#define _LIGHT4                               0x4004
#define _LIGHT5                               0x4005
#define _LIGHT6                               0x4006
#define _LIGHT7                               0x4007
#define _SPOT_EXPONENT                        0x1205
#define _SPOT_CUTOFF                          0x1206
#define _CONSTANT_ATTENUATION                 0x1207
#define _LINEAR_ATTENUATION                   0x1208
#define _QUADRATIC_ATTENUATION                0x1209
#define _AMBIENT                              0x1200
#define _DIFFUSE                              0x1201
#define _SPECULAR                             0x1202
#define _SHININESS                            0x1601
#define _EMISSION                             0x1600
#define _POSITION                             0x1203
#define _SPOT_DIRECTION                       0x1204
#define _AMBIENT_AND_DIFFUSE                  0x1602
#define _COLOR_INDEXES                        0x1603
#define _LIGHT_MODEL_TWO_SIDE                 0x0B52
#define _LIGHT_MODEL_LOCAL_VIEWER             0x0B51
#define _LIGHT_MODEL_AMBIENT                  0x0B53
#define _FRONT_AND_BACK                       0x0408
#define _SHADE_MODEL                          0x0B54
#define _FLAT                                 0x1D00
#define _SMOOTH                               0x1D01
#define _COLOR_MATERIAL                       0x0B57
#define _COLOR_MATERIAL_FACE                  0x0B55
#define _COLOR_MATERIAL_PARAMETER             0x0B56
#define _NORMALIZE                            0x0BA1

/* user clipping planes */
#define _CLIP_PLANE0                          0x3000
#define _CLIP_PLANE1                          0x3001
#define _CLIP_PLANE2                          0x3002
#define _CLIP_PLANE3                          0x3003
#define _CLIP_PLANE4                          0x3004
#define _CLIP_PLANE5                          0x3005

/* accumulation buffer */
#define _ACCUM_RED_BITS                       0x0D58
#define _ACCUM_GREEN_BITS                     0x0D59
#define _ACCUM_BLUE_BITS                      0x0D5A
#define _ACCUM_ALPHA_BITS                     0x0D5B
#define _ACCUM_CLEAR_VALUE                    0x0B80
#define _ACCUM                                0x0100
#define _ADD                                  0x0104
#define _LOAD                                 0x0101
#define _MULT                                 0x0103
#define _RETURN                               0x0102

/* alpha testing */
#define _ALPHA_TEST                           0x0BC0
#define _ALPHA_TEST_REF                       0x0BC2
#define _ALPHA_TEST_FUNC                      0x0BC1

/* blending */
#define _BLEND                                0x0BE2
#define _BLEND_SRC                            0x0BE1
#define _BLEND_DST                            0x0BE0
#define _ZERO                                 0x0
#define _ONE                                  0x1
#define _SRC_COLOR                            0x0300
#define _ONE_MINUS_SRC_COLOR                  0x0301
#define _SRC_ALPHA                            0x0302
#define _ONE_MINUS_SRC_ALPHA                  0x0303
#define _DST_ALPHA                            0x0304
#define _ONE_MINUS_DST_ALPHA                  0x0305
#define _DST_COLOR                            0x0306
#define _ONE_MINUS_DST_COLOR                  0x0307
#define _SRC_ALPHA_SATURATE                   0x0308
#define _CONSTANT_COLOR                       0x8001
#define _ONE_MINUS_CONSTANT_COLOR             0x8002
#define _CONSTANT_ALPHA                       0x8003
#define _ONE_MINUS_CONSTANT_ALPHA             0x8004

/* render mode */
#define _FEEDBACK                             0x1C01
#define _RENDER                               0x1C00
#define _SELECT                               0x1C02

/* hints */
#define _FOG_HINT                             0x0C54
#define _LINE_SMOOTH_HINT                     0x0C52
#define _PERSPECTIVE_CORRECTION_HINT          0x0C50
#define _POINT_SMOOTH_HINT                    0x0C51
#define _POLYGON_SMOOTH_HINT                  0x0C53
#define _DONT_CARE                            0x1100
#define _FASTEST                              0x1101
#define _NICEST                               0x1102

/* attribute bits */
#define _CURRENT_BIT          0x00000001
#define _POINT_BIT            0x00000002
#define _LINE_BIT             0x00000004
#define _POLYGON_BIT          0x00000008
#define _POLYGON_STIPPLE_BIT  0x00000010
#define _PIXEL_MODE_BIT       0x00000020
#define _LIGHTING_BIT         0x00000040
#define _FOG_BIT              0x00000080
#define _DEPTH_BUFFER_BIT     0x00000100
#define _ACCUM_BUFFER_BIT     0x00000200
#define _STENCIL_BUFFER_BIT   0x00000400
#define _VIEWPORT_BIT         0x00000800
#define _TRANSFORM_BIT        0x00001000
#define _ENABLE_BIT           0x00002000
#define _COLOR_BUFFER_BIT     0x00004000
#define _HINT_BIT             0x00008000
#define _EVAL_BIT             0x00010000
#define _LIST_BIT             0x00020000
#define _TEXTURE_BIT          0x00040000
#define _SCISSOR_BIT          0x00080000
#define _ALL_ATTRIB_BITS      0x000FFFFF


/* misc */
void ClearIndex(float);
void ClearColor(float, float, float, float);
void Clear(unsigned int);
void IndexMask(unsigned int);
void ColorMask(unsigned char, unsigned char, unsigned char, unsigned char);
void AlphaFunc(unsigned int, float);
void BlendFunc(unsigned int, unsigned int);
void LogicOp(unsigned int);
void CullFace(unsigned int);
void FrontFace(unsigned int);
void PointSize(float);
void LineWidth(float);
void LineStipple(int, unsigned short);
void PolygonMode(unsigned int, unsigned int);
void PolygonOffset(float, float);
/* void PolygonStipple(unsigned char *); */
/* void GetPolygonStipple(unsigned char *); */
void EdgeFlag(unsigned char);
/* void EdgeFlagv(unsigned char *); */
void Scissor(int, int, int, int);
/* void ClipPlane(unsigned int, double *); */
/* void GetClipPlane(unsigned int, double *); */
void DrawBuffer(unsigned int);
void ReadBuffer(unsigned int);
void Enable(unsigned int);
void Disable(unsigned int);
/* unsigned char IsEnabled(unsigned int); */
/* void EnableClientState(unsigned int) */ /* 1.1 */
/* void DisableClientState(unsigned int) */ /* 1.1 */
/* void GetBooleanv(...) */
/* void GetDoublev(...) */
/* void GetFloatv(...) */
/* void GetIntegerv(...) */
/* void PushAttrib(...) */
/* void PopAttrib(...) */
/* void PushClientAttrib(...) */ /* 1.1 */
void PopClientAttrib(void); /* 1.1 */
void RenderMode(unsigned int);
unsigned int GetError(void);
/* unsigned char * GetString(unsigned int); */
void Finish(void);
void Flush(void);
void Hint(unsigned int, unsigned int);

/* depth buffer */
void ClearDepth(double);
void DepthFunc(unsigned int);
void DepthMask(unsigned char);
void DepthRange(double, double);

/* accumulation buffer */
void ClearAccum(float, float, float, float);
void glAccum(unsigned int, float);

/* transformation */
void MatrixMode(unsigned int);
void Ortho(double, double, double, double, double, double);
void Frustum(double, double, double, double, double, double);
void Viewport(int, int, int, int);
void PushMatrix(void);
void PopMatrix(void);
void LoadIdentity(void);
/* void LoadMatrixd(double *); */
/* void LoadMatrixf(float *); */
/* void MultMatrixd(double *); */
/* void MultMatrixf(float *); */
void Rotated(double, double, double, double);
void Rotatef(float, float, float, float);
void Scaled(double, double, double);
void Scalef(float, float, float);
void Translatef(float, float, float);
void Translated(double, double, double);

/* display lists */
/* unsigned char IsList(unsigned int); */
/* void DeleteLists(unsigned int, int); */
/* unsigned int GenLists(int); */
/* void NewList(unsigned int, unsigned int); */
/* void EndList(void); */
/* void CallList(unsigned int); */
/* void CallLists(int, unsigned int, void *); */
/* void ListBase(unsigned int); */

/* drawing functions */
void Begin(unsigned int);
void End(void);

void Vertex2d(double, double);
void Vertex2f(float, float);
void Vertex2i(int, int);
void Vertex2s(short, short);

void Vertex3d(double, double, double);
void Vertex3f(float, float, float);
void Vertex3i(int, int, int);
void Vertex3s(short, short, short);

void Vertex4d(double, double, double, double);
void Vertex4f(float, float, float, float);
void Vertex4i(int, int, int, int);
void Vertex4s(short, short, short, short);

void Vertex2dv(double arr[2]);
void Vertex2fv(float arr[2]);
/* void Vertex2iv(int arr[2]); */
/* void Vertex2sv(short arr[2]); */

void Vertex3dv(double arr[3]);
void Vertex3fv(float arr[3]);
/* void Vertex3iv(int arr[3]); */
/* void Vertex3sv(short arr[3]); */

void Vertex4dv(double arr[4]);
void Vertex4fv(float arr[4]);
/* void Vertex4iv(int arr[4]); */
/* void Vertex4sv(short arr[4]); */

/* void Normal3b(signed char, signed char, signed char); */
void Normal3d(double, double, double);
void Normal3f(float, float, float);
/* void Normal3i(int, int, int); */
/* void Normal3s(short, short, short); */

/* void Normal3bv(signed char arr[3]); */
void Normal3dv(double arr[3]);
void Normal3fv(float arr[3]);
/* void Normal3iv(int arr[3]); */
/* void Normal3sv(short arr[3]); */

/* void Indexd(double); */
/* void Indexf(float); */
/* void Indexi(int); */
/* void Indexs(short); */
/* void Indexub(unsigned char); */ /* 1.1 */

/* void Indexdv(double *); */
/* void Indexfv(float *); */
/* void Indexiv(int *); */
/* void Indexsv(short *); */
/* void Indexubv(unsigned char *); */ /* 1.1 */

/* void Color3b(signed char, signed char, signed char); */
void Color3d(double, double, double);
void Color3f(float, float, float);
/* void Color3i(int, int, int); */
/* void Color3s(short, short, short); */
/* void Color3ub(unsigned char, unsigned char, unsigned char); */
/* void Color3ui(unsigned int, unsigned int, unsigned int); */
/* void Color3us(unsigned short, unsigned short, unsigned short); */

/* void Color4b(signed char, signed char, signed char, signed char); */
void Color4d(double, double, double, double);
void Color4f(float, float, float, float);
/* void Color4i(int, int, int, int); */
/* void Color4s(short, short, short, short); */
/* void Color4ub(unsigned char, unsigned char, unsigned char, unsigned char); */
/* void Color4ui(unsigned int, unsigned int, unsigned int, unsigned int); */
/* void Color4us(unsigned short, unsigned short, unsigned short, unsigned short); */

/* void Color3bv(signed char arr[3]); */
/* void Color3dv(double arr[3]); */
void Color3fv(float arr[3]);
/* void Color3iv(int arr[3]); */
/* void Color3sv(short arr[3]); */
/* void Color3ubv(unsigned char arr[3]); */
/* void Color3uiv(unsigned int arr[3]); */
/* void Color3usv(unsigned short arr[3]); */

/* void Color4bv(signed char arr[4]); */
/* void Color4dv(double arr[4]); */
void Color4fv(float arr[4]);
/* void Color4iv(int arr[4]); */
/* void Color4sv(short arr[4]); */
/* void Color4ubv(unsigned char arr[4]); */
/* void Color4uiv(unsigned int arr[4]); */
/* void Color4usv(unsigned short arr[4]); */

/* void TexCoord*(); */
/* void RasterPos*(); */
/* void Rect*(); */

/* vertex arrays 1.1 */
/* void VertexPointer(int, unsigned int, int, void *); */
/* void NormalPointer(unsigned int, int, void *) */
/* void ColorPointer(int, unsigned int, int, void *); */
/* void IndexPointer(unsigned int, int, void *); */
/* void TexCoordPointer(int, unsigned int, int, void *); */
/* void EdgeFlagPointer(int, void *); */
/* void getPointerv(unsigned int, void **); */
/* void ArrayElement(int); */
/* void DrawArrays(unsigned int, int, int); */
/* void DrawElements(unsigned int, int, unsigned int, void *); */
/* void InterleavedArrays(unsigned int, int, void *); */

/* lighting */
void ShadeModel(unsigned int);
void Lightf(unsigned int, unsigned int, float);
void Lighti(unsigned int, unsigned int, int);
/* void Lightfv(unsigned int, unsigned int, float *); */
/* void Lightiv(unsigned int, unsigned int, int *); */
/* void GetLightfv(unsigned int, unsigned int, float *); */
/* void GetLightiv(unsigned int, unsigned int, int *); */
void LightModelf(unsigned int, float);
void LightModeli(unsigned int, int);
void LightModelfv(unsigned int, float arr[4]);
/* void LightModeliv(unsigned int, int arr[4]); */
void Materialf(unsigned int, unsigned int, float);
void Materiali(unsigned int, unsigned int, int);
void Materialfv(unsigned int, unsigned int, float arr[4]);
/* void Materialiv(unsigned int, unsigned int, int arr[4]); */

/* raster functions */
/* * */

/* stenciling */
/* * */

/* texture mapping */
/* * */

/* 1.1 functions */
/* * */

/* evaluator */
/* * */

/* fog */
/* * */

/* selection and feedback */
/* * */

/* 1.2 */
/* * */

/* 1.3 */
/* * */

#endif
