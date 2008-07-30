#ifndef __GLU__H__
#define __GLU__H__

/* boolean */
#define _FALSE                                0x0
#define _TRUE                                 0x1

/* StringName */
#define _VERSION                        100800
#define _EXTENSIONS                     100801

/* ErrorCode */
#define _INVALID_ENUM                   100900
#define _INVALID_VALUE                  100901
#define _OUT_OF_MEMORY                  100902
#define _INVALID_OPERATION              100904

/* NurbsDisplay */
/*      GLU_FILL */
#define _OUTLINE_POLYGON                100240
#define _OUTLINE_PATCH                  100241

/* NurbsError */
#define _NURBS_ERROR1                   100251
#define _NURBS_ERROR2                   100252
#define _NURBS_ERROR3                   100253
#define _NURBS_ERROR4                   100254
#define _NURBS_ERROR5                   100255
#define _NURBS_ERROR6                   100256
#define _NURBS_ERROR7                   100257
#define _NURBS_ERROR8                   100258
#define _NURBS_ERROR9                   100259
#define _NURBS_ERROR10                  100260
#define _NURBS_ERROR11                  100261
#define _NURBS_ERROR12                  100262
#define _NURBS_ERROR13                  100263
#define _NURBS_ERROR14                  100264
#define _NURBS_ERROR15                  100265
#define _NURBS_ERROR16                  100266
#define _NURBS_ERROR17                  100267
#define _NURBS_ERROR18                  100268
#define _NURBS_ERROR19                  100269
#define _NURBS_ERROR20                  100270
#define _NURBS_ERROR21                  100271
#define _NURBS_ERROR22                  100272
#define _NURBS_ERROR23                  100273
#define _NURBS_ERROR24                  100274
#define _NURBS_ERROR25                  100275
#define _NURBS_ERROR26                  100276
#define _NURBS_ERROR27                  100277
#define _NURBS_ERROR28                  100278
#define _NURBS_ERROR29                  100279
#define _NURBS_ERROR30                  100280
#define _NURBS_ERROR31                  100281
#define _NURBS_ERROR32                  100282
#define _NURBS_ERROR33                  100283
#define _NURBS_ERROR34                  100284
#define _NURBS_ERROR35                  100285
#define _NURBS_ERROR36                  100286
#define _NURBS_ERROR37                  100287

/* NurbsProperty */
#define _AUTO_LOAD_MATRIX               100200
#define _CULLING                        100201
#define _SAMPLING_TOLERANCE             100203
#define _DISPLAY_MODE                   100204
#define _PARAMETRIC_TOLERANCE           100202
#define _SAMPLING_METHOD                100205
#define _U_STEP                         100206
#define _V_STEP                         100207

/* NurbsSampling */
#define _PATH_LENGTH                    100215
#define _PARAMETRIC_ERROR               100216
#define _DOMAIN_DISTANCE                100217

/* NurbsTrim */
#define _MAP1_TRIM_2                    100210
#define _MAP1_TRIM_3                    100211

/* QuadricDrawStyle */
#define _POINT                          100010
#define _LINE                           100011
#define _FILL                           100012
#define _SILHOUETTE                     100013

/* QuadricCallback */
#define _ERROR                          100103

/* QuadricNormal */
#define _SMOOTH                         100000
#define _FLAT                           100001
#define _NONE                           100002

/* QuadricOrientation */
#define _OUTSIDE                        100020
#define _INSIDE                         100021

/* TessCallback */
#define _TESS_BEGIN                     100100
#define _BEGIN                          100100
#define _TESS_VERTEX                    100101
#define _VERTEX                         100101
#define _TESS_END                       100102
#define _END                            100102
#define _TESS_ERROR                     100103
#define _TESS_EDGE_FLAG                 100104
#define _EDGE_FLAG                      100104
#define _TESS_COMBINE                   100105
#define _TESS_BEGIN_DATA                100106
#define _TESS_VERTEX_DATA               100107
#define _TESS_END_DATA                  100108
#define _TESS_ERROR_DATA                100109
#define _TESS_EDGE_FLAG_DATA            100110
#define _TESS_COMBINE_DATA              100111

/* TessContour */
#define _CW                             100120
#define _CCW                            100121
#define _INTERIOR                       100122
#define _EXTERIOR                       100123
#define _UNKNOWN                        100124

/* TessProperty */
#define _TESS_WINDING_RULE              100140
#define _TESS_BOUNDARY_ONLY             100141
#define _TESS_TOLERANCE                 100142

/* TessError */
#define _TESS_ERROR1                    100151
#define _TESS_ERROR2                    100152
#define _TESS_ERROR3                    100153
#define _TESS_ERROR4                    100154
#define _TESS_ERROR5                    100155
#define _TESS_ERROR6                    100156
#define _TESS_ERROR7                    100157
#define _TESS_ERROR8                    100158
#define _TESS_MISSING_BEGIN_POLYGON     100151
#define _TESS_MISSING_BEGIN_CONTOUR     100152
#define _TESS_MISSING_END_POLYGON       100153
#define _TESS_MISSING_END_CONTOUR       100154
#define _TESS_COORD_TOO_LARGE           100155
#define _TESS_NEED_COMBINE_CALLBACK     100156


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
