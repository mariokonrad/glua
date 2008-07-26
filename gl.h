#ifndef __GL__H__
#define __GL__H__

typedef unsigned int    GLenum;
typedef unsigned char   GLboolean;
typedef unsigned int    GLbitfield;
typedef void            GLvoid;
typedef signed char     GLbyte;         /* 1-byte signed */
typedef short           GLshort;        /* 2-byte signed */
typedef int             GLint;          /* 4-byte signed */
typedef unsigned char   GLubyte;        /* 1-byte unsigned */
typedef unsigned short  GLushort;       /* 2-byte unsigned */
typedef unsigned int    GLuint;         /* 4-byte unsigned */
typedef int             GLsizei;        /* 4-byte signed */
typedef float           GLfloat;        /* single precision float */
typedef float           GLclampf;       /* single precision float in [0,1] */
typedef double          GLdouble;       /* double precision float */
typedef double          GLclampd;       /* double precision float in [0,1] */

/* constants {{{ */

/* boolean */
#define _FALSE                                0x0
#define _TRUE                                 0x1

/* data types */
#define _BYTE                                 0x1400
#define _UNSIGNED_BYTE                        0x1401
#define _SHORT                                0x1402
#define _UNSIGNED_SHORT                       0x1403
#define _INT                                  0x1404
#define _UNSIGNED_INT                         0x1405
#define _FLOAT                                0x1406
#define _DOUBLE                               0x140A
#define _2_BYTES                              0x1407
#define _3_BYTES                              0x1408
#define _4_BYTES                              0x1409

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

/* vertex arrays */
#define _VERTEX_ARRAY                         0x8074
#define _NORMAL_ARRAY                         0x8075
#define _COLOR_ARRAY                          0x8076
#define _INDEX_ARRAY                          0x8077
#define _TEXTURE_COORD_ARRAY                  0x8078
#define _EDGE_FLAG_ARRAY                      0x8079
#define _VERTEX_ARRAY_SIZE                    0x807A
#define _VERTEX_ARRAY_TYPE                    0x807B
#define _VERTEX_ARRAY_STRIDE                  0x807C
#define _NORMAL_ARRAY_TYPE                    0x807E
#define _NORMAL_ARRAY_STRIDE                  0x807F
#define _COLOR_ARRAY_SIZE                     0x8081
#define _COLOR_ARRAY_TYPE                     0x8082
#define _COLOR_ARRAY_STRIDE                   0x8083
#define _INDEX_ARRAY_TYPE                     0x8085
#define _INDEX_ARRAY_STRIDE                   0x8086
#define _TEXTURE_COORD_ARRAY_SIZE             0x8088
#define _TEXTURE_COORD_ARRAY_TYPE             0x8089
#define _TEXTURE_COORD_ARRAY_STRIDE           0x808A
#define _EDGE_FLAG_ARRAY_STRIDE               0x808C
#define _VERTEX_ARRAY_POINTER                 0x808E
#define _NORMAL_ARRAY_POINTER                 0x808F
#define _COLOR_ARRAY_POINTER                  0x8090
#define _INDEX_ARRAY_POINTER                  0x8091
#define _TEXTURE_COORD_ARRAY_POINTER          0x8092
#define _EDGE_FLAG_ARRAY_POINTER              0x8093
#define _V2F                                  0x2A20
#define _V3F                                  0x2A21
#define _C4UB_V2F                             0x2A22
#define _C4UB_V3F                             0x2A23
#define _C3F_V3F                              0x2A24
#define _N3F_V3F                              0x2A25
#define _C4F_N3F_V3F                          0x2A26
#define _T2F_V3F                              0x2A27
#define _T4F_V4F                              0x2A28
#define _T2F_C4UB_V3F                         0x2A29
#define _T2F_C3F_V3F                          0x2A2A
#define _T2F_N3F_V3F                          0x2A2B
#define _T2F_C4F_N3F_V3F                      0x2A2C
#define _T4F_C4F_N3F_V4F                      0x2A2D

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

/* feedback */
#define _2D                                   0x0600
#define _3D                                   0x0601
#define _3D_COLOR                             0x0602
#define _3D_COLOR_TEXTURE                     0x0603
#define _4D_COLOR_TEXTURE                     0x0604
#define _POINT_TOKEN                          0x0701
#define _LINE_TOKEN                           0x0702
#define _LINE_RESET_TOKEN                     0x0707
#define _POLYGON_TOKEN                        0x0703
#define _BITMAP_TOKEN                         0x0704
#define _DRAW_PIXEL_TOKEN                     0x0705
#define _COPY_PIXEL_TOKEN                     0x0706
#define _PASS_THROUGH_TOKEN                   0x0700
#define _FEEDBACK_BUFFER_POINTER              0x0DF0
#define _FEEDBACK_BUFFER_SIZE                 0x0DF1
#define _FEEDBACK_BUFFER_TYPE                 0x0DF2

/* selection */
#define _SELECTION_BUFFER_POINTER             0x0DF3
#define _SELECTION_BUFFER_SIZE                0x0DF4

/* fog */
#define _FOG                                  0x0B60
#define _FOG_MODE                             0x0B65
#define _FOG_DENSITY                          0x0B62
#define _FOG_COLOR                            0x0B66
#define _FOG_INDEX                            0x0B61
#define _FOG_START                            0x0B63
#define _FOG_END                              0x0B64
#define _LINEAR                               0x2601
#define _EXP                                  0x0800
#define _EXP2                                 0x0801

/* logic ops */
#define _LOGIC_OP                             0x0BF1
#define _INDEX_LOGIC_OP                       0x0BF1
#define _COLOR_LOGIC_OP                       0x0BF2
#define _LOGIC_OP_MODE                        0x0BF0
#define _CLEAR                                0x1500
#define _SET                                  0x150F
#define _COPY                                 0x1503
#define _COPY_INVERTED                        0x150C
#define _NOOP                                 0x1505
#define _INVERT                               0x150A
#define _AND                                  0x1501
#define _NAND                                 0x150E
#define _OR                                   0x1507
#define _NOR                                  0x1508
#define _XOR                                  0x1506
#define _EQUIV                                0x1509
#define _AND_REVERSE                          0x1502
#define _AND_INVERTED                         0x1504
#define _OR_REVERSE                           0x150B
#define _OR_INVERTED                          0x150D

/* stencil */
#define _STENCIL_TEST                         0x0B90
#define _STENCIL_WRITEMASK                    0x0B98
#define _STENCIL_BITS                         0x0D57
#define _STENCIL_FUNC                         0x0B92
#define _STENCIL_VALUE_MASK                   0x0B93
#define _STENCIL_REF                          0x0B97
#define _STENCIL_FAIL                         0x0B94
#define _STENCIL_PASS_DEPTH_PASS              0x0B96
#define _STENCIL_PASS_DEPTH_FAIL              0x0B95
#define _STENCIL_CLEAR_VALUE                  0x0B91
#define _STENCIL_INDEX                        0x1901
#define _KEEP                                 0x1E00
#define _REPLACE                              0x1E01
#define _INCR                                 0x1E02
#define _DECR                                 0x1E03

/* hints */
#define _FOG_HINT                             0x0C54
#define _LINE_SMOOTH_HINT                     0x0C52
#define _PERSPECTIVE_CORRECTION_HINT          0x0C50
#define _POINT_SMOOTH_HINT                    0x0C51
#define _POLYGON_SMOOTH_HINT                  0x0C53
#define _DONT_CARE                            0x1100
#define _FASTEST                              0x1101
#define _NICEST                               0x1102

/* implementation limits */
#define _MAX_LIST_NESTING                     0x0B31
#define _MAX_ATTRIB_STACK_DEPTH               0x0D35
#define _MAX_MODELVIEW_STACK_DEPTH            0x0D36
#define _MAX_NAME_STACK_DEPTH                 0x0D37
#define _MAX_PROJECTION_STACK_DEPTH           0x0D38
#define _MAX_TEXTURE_STACK_DEPTH              0x0D39
#define _MAX_EVAL_ORDER                       0x0D30
#define _MAX_LIGHTS                           0x0D31
#define _MAX_CLIP_PLANES                      0x0D32
#define _MAX_TEXTURE_SIZE                     0x0D33
#define _MAX_PIXEL_MAP_TABLE                  0x0D34
#define _MAX_VIEWPORT_DIMS                    0x0D3A
#define _MAX_CLIENT_ATTRIB_STACK_DEPTH        0x0D3B

/* gets */
#define _ATTRIB_STACK_DEPTH                   0x0BB0
#define _CLIENT_ATTRIB_STACK_DEPTH            0x0BB1
#define _COLOR_CLEAR_VALUE                    0x0C22
#define _COLOR_WRITEMASK                      0x0C23
#define _CURRENT_INDEX                        0x0B01
#define _CURRENT_COLOR                        0x0B00
#define _CURRENT_NORMAL                       0x0B02
#define _CURRENT_RASTER_COLOR                 0x0B04
#define _CURRENT_RASTER_DISTANCE              0x0B09
#define _CURRENT_RASTER_INDEX                 0x0B05
#define _CURRENT_RASTER_POSITION              0x0B07
#define _CURRENT_RASTER_TEXTURE_COORDS        0x0B06
#define _CURRENT_RASTER_POSITION_VALID        0x0B08
#define _CURRENT_TEXTURE_COORDS               0x0B03
#define _INDEX_CLEAR_VALUE                    0x0C20
#define _INDEX_MODE                           0x0C30
#define _INDEX_WRITEMASK                      0x0C21
#define _MODELVIEW_MATRIX                     0x0BA6
#define _MODELVIEW_STACK_DEPTH                0x0BA3
#define _NAME_STACK_DEPTH                     0x0D70
#define _PROJECTION_MATRIX                    0x0BA7
#define _PROJECTION_STACK_DEPTH               0x0BA4
#define _RENDER_MODE                          0x0C40
#define _RGBA_MODE                            0x0C31
#define _TEXTURE_MATRIX                       0x0BA8
#define _TEXTURE_STACK_DEPTH                  0x0BA5
#define _VIEWPORT                             0x0BA2

/* evaluators */
#define _AUTO_NORMAL                          0x0D80
#define _MAP1_COLOR_4                         0x0D90
#define _MAP1_GRID_DOMAIN                     0x0DD0
#define _MAP1_GRID_SEGMENTS                   0x0DD1
#define _MAP1_INDEX                           0x0D91
#define _MAP1_NORMAL                          0x0D92
#define _MAP1_TEXTURE_COORD_1                 0x0D93
#define _MAP1_TEXTURE_COORD_2                 0x0D94
#define _MAP1_TEXTURE_COORD_3                 0x0D95
#define _MAP1_TEXTURE_COORD_4                 0x0D96
#define _MAP1_VERTEX_3                        0x0D97
#define _MAP1_VERTEX_4                        0x0D98
#define _MAP2_COLOR_4                         0x0DB0
#define _MAP2_GRID_DOMAIN                     0x0DD2
#define _MAP2_GRID_SEGMENTS                   0x0DD3
#define _MAP2_INDEX                           0x0DB1
#define _MAP2_NORMAL                          0x0DB2
#define _MAP2_TEXTURE_COORD_1                 0x0DB3
#define _MAP2_TEXTURE_COORD_2                 0x0DB4
#define _MAP2_TEXTURE_COORD_3                 0x0DB5
#define _MAP2_TEXTURE_COORD_4                 0x0DB6
#define _MAP2_VERTEX_3                        0x0DB7
#define _MAP2_VERTEX_4                        0x0DB8
#define _COEFF                                0x0A00
#define _DOMAIN                               0x0A02
#define _ORDER                                0x0A01

/* texture mapping */
#define _TEXTURE_ENV                          0x2300
#define _TEXTURE_ENV_MODE                     0x2200
#define _TEXTURE_1D                           0x0DE0
#define _TEXTURE_2D                           0x0DE1
#define _TEXTURE_WRAP_S                       0x2802
#define _TEXTURE_WRAP_T                       0x2803
#define _TEXTURE_MAG_FILTER                   0x2800
#define _TEXTURE_MIN_FILTER                   0x2801
#define _TEXTURE_ENV_COLOR                    0x2201
#define _TEXTURE_GEN_S                        0x0C60
#define _TEXTURE_GEN_T                        0x0C61
#define _TEXTURE_GEN_MODE                     0x2500
#define _TEXTURE_BORDER_COLOR                 0x1004
#define _TEXTURE_WIDTH                        0x1000
#define _TEXTURE_HEIGHT                       0x1001
#define _TEXTURE_BORDER                       0x1005
#define _TEXTURE_COMPONENTS                   0x1003
#define _TEXTURE_RED_SIZE                     0x805C
#define _TEXTURE_GREEN_SIZE                   0x805D
#define _TEXTURE_BLUE_SIZE                    0x805E
#define _TEXTURE_ALPHA_SIZE                   0x805F
#define _TEXTURE_LUMINANCE_SIZE               0x8060
#define _TEXTURE_INTENSITY_SIZE               0x8061
#define _NEAREST_MIPMAP_NEAREST               0x2700
#define _NEAREST_MIPMAP_LINEAR                0x2702
#define _LINEAR_MIPMAP_NEAREST                0x2701
#define _LINEAR_MIPMAP_LINEAR                 0x2703
#define _OBJECT_LINEAR                        0x2401
#define _OBJECT_PLANE                         0x2501
#define _EYE_LINEAR                           0x2400
#define _EYE_PLANE                            0x2502
#define _SPHERE_MAP                           0x2402
#define _DECAL                                0x2101
#define _MODULATE                             0x2100
#define _NEAREST                              0x2600
#define _REPEAT                               0x2901
#define _CLAMP                                0x2900
#define _S                                    0x2000
#define _T                                    0x2001
#define _R                                    0x2002
#define _Q                                    0x2003
#define _TEXTURE_GEN_R                        0x0C62
#define _TEXTURE_GEN_Q                        0x0C63

/* buffers, pixel drawing/reading */
#define _NONE                                 0x0
#define _LEFT                                 0x0406
#define _RIGHT                                0x0407
/*_FRONT                                      0x0404 */
/*_BACK                                       0x0405 */
/*_FRONT_AND_BACK                             0x0408 */
#define _FRONT_LEFT                           0x0400
#define _FRONT_RIGHT                          0x0401
#define _BACK_LEFT                            0x0402
#define _BACK_RIGHT                           0x0403
#define _AUX0                                 0x0409
#define _AUX1                                 0x040A
#define _AUX2                                 0x040B
#define _AUX3                                 0x040C
#define _COLOR_INDEX                          0x1900
#define _RED                                  0x1903
#define _GREEN                                0x1904
#define _BLUE                                 0x1905
#define _ALPHA                                0x1906
#define _LUMINANCE                            0x1909
#define _LUMINANCE_ALPHA                      0x190A
#define _ALPHA_BITS                           0x0D55
#define _RED_BITS                             0x0D52
#define _GREEN_BITS                           0x0D53
#define _BLUE_BITS                            0x0D54
#define _INDEX_BITS                           0x0D51
#define _SUBPIXEL_BITS                        0x0D50
#define _AUX_BUFFERS                          0x0C00
#define _READ_BUFFER                          0x0C02
#define _DRAW_BUFFER                          0x0C01
#define _DOUBLEBUFFER                         0x0C32
#define _STEREO                               0x0C33
#define _BITMAP                               0x1A00
#define _COLOR                                0x1800
#define _DEPTH                                0x1801
#define _STENCIL                              0x1802
#define _DITHER                               0x0BD0
#define _RGB                                  0x1907
#define _RGBA                                 0x1908

/* scissor box */
#define _SCISSOR_TEST                         0x0C11
#define _SCISSOR_BOX                          0x0C10

/* pixel mode / transfer */
#define _MAP_COLOR                            0x0D10
#define _MAP_STENCIL                          0x0D11
#define _INDEX_SHIFT                          0x0D12
#define _INDEX_OFFSET                         0x0D13
#define _RED_SCALE                            0x0D14
#define _RED_BIAS                             0x0D15
#define _GREEN_SCALE                          0x0D18
#define _GREEN_BIAS                           0x0D19
#define _BLUE_SCALE                           0x0D1A
#define _BLUE_BIAS                            0x0D1B
#define _ALPHA_SCALE                          0x0D1C
#define _ALPHA_BIAS                           0x0D1D
#define _DEPTH_SCALE                          0x0D1E
#define _DEPTH_BIAS                           0x0D1F
#define _PIXEL_MAP_S_TO_S_SIZE                0x0CB1
#define _PIXEL_MAP_I_TO_I_SIZE                0x0CB0
#define _PIXEL_MAP_I_TO_R_SIZE                0x0CB2
#define _PIXEL_MAP_I_TO_G_SIZE                0x0CB3
#define _PIXEL_MAP_I_TO_B_SIZE                0x0CB4
#define _PIXEL_MAP_I_TO_A_SIZE                0x0CB5
#define _PIXEL_MAP_R_TO_R_SIZE                0x0CB6
#define _PIXEL_MAP_G_TO_G_SIZE                0x0CB7
#define _PIXEL_MAP_B_TO_B_SIZE                0x0CB8
#define _PIXEL_MAP_A_TO_A_SIZE                0x0CB9
#define _PIXEL_MAP_S_TO_S                     0x0C71
#define _PIXEL_MAP_I_TO_I                     0x0C70
#define _PIXEL_MAP_I_TO_R                     0x0C72
#define _PIXEL_MAP_I_TO_G                     0x0C73
#define _PIXEL_MAP_I_TO_B                     0x0C74
#define _PIXEL_MAP_I_TO_A                     0x0C75
#define _PIXEL_MAP_R_TO_R                     0x0C76
#define _PIXEL_MAP_G_TO_G                     0x0C77
#define _PIXEL_MAP_B_TO_B                     0x0C78
#define _PIXEL_MAP_A_TO_A                     0x0C79
#define _PACK_ALIGNMENT                       0x0D05
#define _PACK_LSB_FIRST                       0x0D01
#define _PACK_ROW_LENGTH                      0x0D02
#define _PACK_SKIP_PIXELS                     0x0D04
#define _PACK_SKIP_ROWS                       0x0D03
#define _PACK_SWAP_BYTES                      0x0D00
#define _UNPACK_ALIGNMENT                     0x0CF5
#define _UNPACK_LSB_FIRST                     0x0CF1
#define _UNPACK_ROW_LENGTH                    0x0CF2
#define _UNPACK_SKIP_PIXELS                   0x0CF4
#define _UNPACK_SKIP_ROWS                     0x0CF3
#define _UNPACK_SWAP_BYTES                    0x0CF0
#define _ZOOM_X                               0x0D16
#define _ZOOM_Y                               0x0D17

/* utility */
#define _VENDOR                               0x1F00
#define _RENDERER                             0x1F01
#define _VERSION                              0x1F02
#define _EXTENSIONS                           0x1F03

/* errors */
#define _NO_ERROR                             0x0
#define _INVALID_VALUE                        0x0501
#define _INVALID_ENUM                         0x0500
#define _INVALID_OPERATION                    0x0502
#define _STACK_OVERFLOW                       0x0503
#define _STACK_UNDERFLOW                      0x0504
#define _OUT_OF_MEMORY                        0x0505

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

/* OpenGL 1.1 */
#define _PROXY_TEXTURE_1D                     0x8063
#define _PROXY_TEXTURE_2D                     0x8064
#define _TEXTURE_PRIORITY                     0x8066
#define _TEXTURE_RESIDENT                     0x8067
#define _TEXTURE_BINDING_1D                   0x8068
#define _TEXTURE_BINDING_2D                   0x8069
#define _TEXTURE_INTERNAL_FORMAT              0x1003
#define _ALPHA4                               0x803B
#define _ALPHA8                               0x803C
#define _ALPHA12                              0x803D
#define _ALPHA16                              0x803E
#define _LUMINANCE4                           0x803F
#define _LUMINANCE8                           0x8040
#define _LUMINANCE12                          0x8041
#define _LUMINANCE16                          0x8042
#define _LUMINANCE4_ALPHA4                    0x8043
#define _LUMINANCE6_ALPHA2                    0x8044
#define _LUMINANCE8_ALPHA8                    0x8045
#define _LUMINANCE12_ALPHA4                   0x8046
#define _LUMINANCE12_ALPHA12                  0x8047
#define _LUMINANCE16_ALPHA16                  0x8048
#define _INTENSITY                            0x8049
#define _INTENSITY4                           0x804A
#define _INTENSITY8                           0x804B
#define _INTENSITY12                          0x804C
#define _INTENSITY16                          0x804D
#define _R3_G3_B2                             0x2A10
#define _RGB4                                 0x804F
#define _RGB5                                 0x8050
#define _RGB8                                 0x8051
#define _RGB10                                0x8052
#define _RGB12                                0x8053
#define _RGB16                                0x8054
#define _RGBA2                                0x8055
#define _RGBA4                                0x8056
#define _RGB5_A1                              0x8057
#define _RGBA8                                0x8058
#define _RGB10_A2                             0x8059
#define _RGBA12                               0x805A
#define _RGBA16                               0x805B
#define _CLIENT_PIXEL_STORE_BIT               0x00000001
#define _CLIENT_VERTEX_ARRAY_BIT              0x00000002
#define _ALL_CLIENT_ATTRIB_BITS               0xFFFFFFFF
#define _CLIENT_ALL_ATTRIB_BITS               0xFFFFFFFF

/* }}} */

struct textures {
	void * data;
};

GLuint tex(struct textures *, GLuint);

/* Miscellaneous */
void ClearIndex(GLfloat c);
void ClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void Clear(GLbitfield mask);
void IndexMask(GLuint mask);
void ColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void AlphaFunc(GLenum func, GLclampf ref);
void BlendFunc(GLenum sfactor, GLenum dfactor);
void LogicOp(GLenum opcode);
void CullFace(GLenum mode);
void FrontFace(GLenum mode);
void PointSize(GLfloat size);
void LineWidth(GLfloat width);
void LineStipple(GLint factor, GLushort pattern);
void PolygonMode(GLenum face, GLenum mode);
void PolygonOffset(GLfloat factor, GLfloat units);
/*
void PolygonStipple(GLubyte *mask);
void GetPolygonStipple(GLubyte *mask);
*/
void EdgeFlag(GLboolean flag);
/*
void EdgeFlagv(GLboolean *flag);
*/
void Scissor(GLint x, GLint y, GLsizei width, GLsizei height);
/*
void ClipPlane(GLenum plane, GLdouble *equation);
void GetClipPlane(GLenum plane, GLdouble *equation);
*/
void DrawBuffer(GLenum mode);
void ReadBuffer(GLenum mode);
void Enable(GLenum cap);
void Disable(GLenum cap);
GLboolean IsEnabled(GLenum cap);
/* void EnableClientState(GLenum cap); */ /* 1.1 */
/* void DisableClientState(GLenum cap); */ /* 1.1 */
/*
void GetBooleanv(GLenum pname, GLboolean *params);
void GetDoublev(GLenum pname, GLdouble *params);
void GetFloatv(GLenum pname, GLfloat *params);
void GetIntegerv(GLenum pname, GLint *params);
void PushAttrib(GLbitfield mask);
void PopAttrib(void);
*/
/* void PushClientAttrib(GLbitfield mask); */ /* 1.1 */
void PopClientAttrib(void);  /* 1.1 */
GLint RenderMode(GLenum mode);
GLenum GetError(void);
/*
const GLubyte* GetString(GLenum name);
*/
void Finish(void);
void Flush(void);
void Hint(GLenum target, GLenum mode);

/* Depth Buffer */
void ClearDepth(GLclampd depth);
void DepthFunc(GLenum func);
void DepthMask(GLboolean flag);
void DepthRange(GLclampd near_val, GLclampd far_val);

/* Accumulation Buffer */
void ClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void Accum(GLenum op, GLfloat value);

/* Transformation */
void MatrixMode(GLenum mode);
void Ortho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val);
void Frustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble near_val, GLdouble far_val);
void Viewport(GLint x, GLint y, GLsizei width, GLsizei height);
void PushMatrix(void);
void PopMatrix(void);
void LoadIdentity(void);
void LoadMatrixd(GLdouble *m);
void LoadMatrixf(GLfloat *m);
void MultMatrixd(GLdouble *m);
void MultMatrixf(GLfloat *m);
void Rotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
void Rotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
void Scaled(GLdouble x, GLdouble y, GLdouble z);
void Scalef(GLfloat x, GLfloat y, GLfloat z);
void Translated(GLdouble x, GLdouble y, GLdouble z);
void Translatef(GLfloat x, GLfloat y, GLfloat z);

/* Display Lists */
/*
GLboolean IsList(GLuint list);
void DeleteLists(GLuint list, GLsizei range);
GLuint GenLists(GLsizei range);
void NewList(GLuint list, GLenum mode);
void EndList(void);
void CallList(GLuint list);
void CallLists(GLsizei n, GLenum type, GLvoid *lists);
void ListBase(GLuint base);
*/

/* Drawing Functions */
void Begin(GLenum mode);
void End(void);
void Vertex2d(GLdouble x, GLdouble y);
void Vertex2f(GLfloat x, GLfloat y);
void Vertex2i(GLint x, GLint y);
void Vertex2s(GLshort x, GLshort y);
void Vertex3d(GLdouble x, GLdouble y, GLdouble z);
void Vertex3f(GLfloat x, GLfloat y, GLfloat z);
void Vertex3i(GLint x, GLint y, GLint z);
void Vertex3s(GLshort x, GLshort y, GLshort z);
void Vertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void Vertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void Vertex4i(GLint x, GLint y, GLint z, GLint w);
void Vertex4s(GLshort x, GLshort y, GLshort z, GLshort w);
void Vertex2dv(GLdouble *v);
void Vertex2fv(GLfloat *v);
void Vertex2iv(GLint *v);
void Vertex2sv(GLshort *v);
void Vertex3dv(GLdouble *v);
void Vertex3fv(GLfloat v[3]);
void Vertex3iv(GLint *v);
void Vertex3sv(GLshort *v);
void Vertex4dv(GLdouble *v);
void Vertex4fv(GLfloat *v);
void Vertex4iv(GLint *v);
void Vertex4sv(GLshort *v);
void Normal3b(GLbyte nx, GLbyte ny, GLbyte nz);
void Normal3d(GLdouble nx, GLdouble ny, GLdouble nz);
void Normal3f(GLfloat nx, GLfloat ny, GLfloat nz);
void Normal3i(GLint nx, GLint ny, GLint nz);
void Normal3s(GLshort nx, GLshort ny, GLshort nz);
void Normal3bv(GLbyte *v);
void Normal3dv(GLdouble *v);
void Normal3fv(GLfloat *v);
void Normal3iv(GLint *v);
void Normal3sv(GLshort *v);
void Indexd(GLdouble c);
void Indexf(GLfloat c);
void Indexi(GLint c);
void Indexs(GLshort c);
void Indexub(GLubyte c);  /* 1.1 */
/*
void Indexdv(GLdouble *c);
void Indexfv(GLfloat *c);
void Indexiv(GLint *c);
void Indexsv(GLshort *c);
*/
/* void Indexubv(GLubyte *c); */ /* 1.1 */
void Color3b(GLbyte red, GLbyte green, GLbyte blue);
void Color3d(GLdouble red, GLdouble green, GLdouble blue);
void Color3f(GLfloat red, GLfloat green, GLfloat blue);
void Color3i(GLint red, GLint green, GLint blue);
void Color3s(GLshort red, GLshort green, GLshort blue);
void Color3ub(GLubyte red, GLubyte green, GLubyte blue);
void Color3ui(GLuint red, GLuint green, GLuint blue);
void Color3us(GLushort red, GLushort green, GLushort blue);
void Color4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
void Color4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
void Color4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void Color4i(GLint red, GLint green, GLint blue, GLint alpha);
void Color4s(GLshort red, GLshort green, GLshort blue, GLshort alpha);
void Color4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
void Color4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha);
void Color4us(GLushort red, GLushort green, GLushort blue, GLushort alpha);
void Color3bv(GLbyte v[3]);
void Color3dv(GLdouble v[3]);
void Color3fv(GLfloat v[3]);
void Color3iv(GLint v[3]);
void Color3sv(GLshort v[3]);
void Color3ubv(GLubyte v[3]);
void Color3uiv(GLuint v[3]);
void Color3usv(GLushort v[3]);
void Color4bv(GLbyte v[4]);
void Color4dv(GLdouble v[4]);
void Color4fv(GLfloat v[4]);
void Color4iv(GLint v[4]);
void Color4sv(GLshort v[4]);
void Color4ubv(GLubyte v[4]);
void Color4uiv(GLuint v[4]);
void Color4usv(GLushort v[4]);
void TexCoord1d(GLdouble s);
void TexCoord1f(GLfloat s);
void TexCoord1i(GLint s);
void TexCoord1s(GLshort s);
/*
void TexCoord2d(GLdouble s, GLdouble t);
void TexCoord2f(GLfloat s, GLfloat t);
void TexCoord2i(GLint s, GLint t);
void TexCoord2s(GLshort s, GLshort t);
void TexCoord3d(GLdouble s, GLdouble t, GLdouble r);
void TexCoord3f(GLfloat s, GLfloat t, GLfloat r);
void TexCoord3i(GLint s, GLint t, GLint r);
void TexCoord3s(GLshort s, GLshort t, GLshort r);
void TexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void TexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void TexCoord4i(GLint s, GLint t, GLint r, GLint q);
void TexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q);
void TexCoord1dv(GLdouble *v);
void TexCoord1fv(GLfloat *v);
void TexCoord1iv(GLint *v);
void TexCoord1sv(GLshort *v);
void TexCoord2dv(GLdouble *v);
void TexCoord2fv(GLfloat *v);
void TexCoord2iv(GLint *v);
void TexCoord2sv(GLshort *v);
void TexCoord3dv(GLdouble *v);
void TexCoord3fv(GLfloat *v);
void TexCoord3iv(GLint *v);
void TexCoord3sv(GLshort *v);
void TexCoord4dv(GLdouble *v);
void TexCoord4fv(GLfloat *v);
void TexCoord4iv(GLint *v);
void TexCoord4sv(GLshort *v);
void RasterPos2d(GLdouble x, GLdouble y);
void RasterPos2f(GLfloat x, GLfloat y);
void RasterPos2i(GLint x, GLint y);
void RasterPos2s(GLshort x, GLshort y);
void RasterPos3d(GLdouble x, GLdouble y, GLdouble z);
void RasterPos3f(GLfloat x, GLfloat y, GLfloat z);
void RasterPos3i(GLint x, GLint y, GLint z);
void RasterPos3s(GLshort x, GLshort y, GLshort z);
void RasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void RasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void RasterPos4i(GLint x, GLint y, GLint z, GLint w);
void RasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w);
void RasterPos2dv(GLdouble *v);
void RasterPos2fv(GLfloat *v);
void RasterPos2iv(GLint *v);
void RasterPos2sv(GLshort *v);
void RasterPos3dv(GLdouble *v);
void RasterPos3fv(GLfloat *v);
void RasterPos3iv(GLint *v);
void RasterPos3sv(GLshort *v);
void RasterPos4dv(GLdouble *v);
void RasterPos4fv(GLfloat *v);
void RasterPos4iv(GLint *v);
void RasterPos4sv(GLshort *v);
void Rectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
void Rectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
void Recti(GLint x1, GLint y1, GLint x2, GLint y2);
void Rects(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
void Rectdv(GLdouble *v1, GLdouble *v2);
void Rectfv(GLfloat *v1, GLfloat *v2);
void Rectiv(GLint *v1, GLint *v2);
void Rectsv(GLshort *v1, GLshort *v2);
*/

/* Lighting */
void ShadeModel(GLenum mode);
void Lightf(GLenum light, GLenum pname, GLfloat param);
void Lighti(GLenum light, GLenum pname, GLint param);
void Lightfv(GLenum light, GLenum pname, GLfloat *params);
void Lightiv(GLenum light, GLenum pname, GLint *params);
/*
void GetLightfv(GLenum light, GLenum pname, GLfloat *params);
void GetLightiv(GLenum light, GLenum pname, GLint *params);
*/
void LightModelf(GLenum pname, GLfloat param);
void LightModeli(GLenum pname, GLint param);
void LightModelfv(GLenum pname, GLfloat *params);
void LightModeliv(GLenum pname, GLint *params);
void Materialf(GLenum face, GLenum pname, GLfloat param);
void Materiali(GLenum face, GLenum pname, GLint param);
void Materialfv(GLenum face, GLenum pname, GLfloat *params);
void Materialiv(GLenum face, GLenum pname, GLint *params);
/*
void GetMaterialfv(GLenum face, GLenum pname, GLfloat *params);
void GetMaterialiv(GLenum face, GLenum pname, GLint *params);
void ColorMaterial(GLenum face, GLenum mode);
*/

/* Raster functions */
/*
void PixelZoom(GLfloat xfactor, GLfloat yfactor);
void PixelStoref(GLenum pname, GLfloat param);
void PixelStorei(GLenum pname, GLint param);
void PixelTransferf(GLenum pname, GLfloat param);
void PixelTransferi(GLenum pname, GLint param);
void PixelMapfv(GLenum map, GLint mapsize, GLfloat *values);
void PixelMapuiv(GLenum map, GLint mapsize, GLuint *values);
void PixelMapusv(GLenum map, GLint mapsize, GLushort *values);
void GetPixelMapfv(GLenum map, GLfloat *values);
void GetPixelMapuiv(GLenum map, GLuint *values);
void GetPixelMapusv(GLenum map, GLushort *values);
void Bitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, GLubyte *bitmap);
void ReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
void DrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
void CopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
*/

/* Stenciling */
void StencilFunc(GLenum func, GLint ref, GLuint mask);
void StencilMask(GLuint mask);
void StencilOp(GLenum fail, GLenum zfail, GLenum zpass);
void ClearStencil(GLint s);

/* Texture mapping */
void TexGend(GLenum coord, GLenum pname, GLdouble param);
void TexGenf(GLenum coord, GLenum pname, GLfloat param);
void TexGeni(GLenum coord, GLenum pname, GLint param);
/*
void TexGendv(GLenum coord, GLenum pname, GLdouble *params);
void TexGenfv(GLenum coord, GLenum pname, GLfloat *params);
void TexGeniv(GLenum coord, GLenum pname, GLint *params);
void GetTexGendv(GLenum coord, GLenum pname, GLdouble *params);
void GetTexGenfv(GLenum coord, GLenum pname, GLfloat *params);
void GetTexGeniv(GLenum coord, GLenum pname, GLint *params);
void TexEnvf(GLenum target, GLenum pname, GLfloat param);
void TexEnvi(GLenum target, GLenum pname, GLint param);
void TexEnvfv(GLenum target, GLenum pname, GLfloat *params);
void TexEnviv(GLenum target, GLenum pname, GLint *params);
void GetTexEnvfv(GLenum target, GLenum pname, GLfloat *params);
void GetTexEnviv(GLenum target, GLenum pname, GLint *params);
*/
void TexParameterf(GLenum target, GLenum pname, GLfloat param);
void TexParameteri(GLenum target, GLenum pname, GLint param);
/*
void TexParameterfv(GLenum target, GLenum pname, GLfloat *params);
void TexParameteriv(GLenum target, GLenum pname, GLint *params);
void GetTexParameterfv(GLenum target, GLenum pname, GLfloat *params);
void GetTexParameteriv(GLenum target, GLenum pname, GLint *params);
void GetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params);
void GetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params);
void TexImage1D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLint border, GLenum format, GLenum type, GLvoid *pixels);
*/
void TexImage2D(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, GLvoid *pixels);
/*
void GetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid *pixels);
*/

/* Evaluators */
/*
void Map1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, GLdouble *points);
void Map1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, GLfloat *points);
void Map2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble *points);
void Map2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat *points);
void GetMapdv(GLenum target, GLenum query, GLdouble *v);
void GetMapfv(GLenum target, GLenum query, GLfloat *v);
void GetMapiv(GLenum target, GLenum query, GLint *v);
void EvalCoord1d(GLdouble u);
void EvalCoord1f(GLfloat u);
void EvalCoord1dv(GLdouble *u);
void EvalCoord1fv(GLfloat *u);
void EvalCoord2d(GLdouble u, GLdouble v);
void EvalCoord2f(GLfloat u, GLfloat v);
void EvalCoord2dv(GLdouble *u);
void EvalCoord2fv(GLfloat *u);
void MapGrid1d(GLint un, GLdouble u1, GLdouble u2);
void MapGrid1f(GLint un, GLfloat u1, GLfloat u2);
void MapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
void MapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
void EvalPoint1(GLint i);
void EvalPoint2(GLint i, GLint j);
void EvalMesh1(GLenum mode, GLint i1, GLint i2);
void EvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
*/

/* Fog */
void Fogf(GLenum pname, GLfloat param);
void Fogi(GLenum pname, GLint param);
/*
void Fogfv(GLenum pname, GLfloat *params);
void Fogiv(GLenum pname, GLint *params);
*/

/* Selection and Feedback */
/*
void FeedbackBuffer(GLsizei size, GLenum type, GLfloat *buffer);
void PassThrough(GLfloat token);
void SelectBuffer(GLsizei size, GLuint *buffer);
void InitNames(void);
void LoadName(GLuint name);
void PushName(GLuint name);
void PopName(void);
*/

/* 1.1 functions */

/* texture objects */
void GenTextures(GLsizei n, struct textures *textures);
void DeleteTextures(GLsizei n, struct textures *textures);
void BindTexture(GLenum target, GLuint texture);
/*
void PrioritizeTextures(GLsizei n, GLuint *textures, GLclampf *priorities);
GLboolean AreTexturesResident(GLsizei n, GLuint *textures, GLboolean *residences);
GLboolean IsTexture(GLuint texture);
*/
/* texture mapping */
/*
void TexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, GLvoid *pixels);
void TexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid *pixels);
void CopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
void CopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void CopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void CopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
*/
/* vertex arrays */
/*
void VertexPointer(GLint size, GLenum type, GLsizei stride, GLvoid *ptr);
void NormalPointer(GLenum type, GLsizei stride, GLvoid *ptr);
void ColorPointer(GLint size, GLenum type, GLsizei stride, GLvoid *ptr);
void IndexPointer(GLenum type, GLsizei stride, GLvoid *ptr);
void TexCoordPointer(GLint size, GLenum type, GLsizei stride, GLvoid *ptr);
void EdgeFlagPointer(GLsizei stride, GLvoid *ptr);
void GetPointerv(GLenum pname, GLvoid **params);
void ArrayElement(GLint i);
void DrawArrays(GLenum mode, GLint first, GLsizei count);
void DrawElements(GLenum mode, GLsizei count, GLenum type, GLvoid *indices);
void InterleavedArrays(GLenum format, GLsizei stride, GLvoid *pointer);
*/

#endif
