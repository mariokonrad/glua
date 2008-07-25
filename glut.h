#ifndef __GLUT__H__
#define __GLUT__H__

#define _RGBA   0x00000001
#define _DOUBLE 0x00000002
#define _DEPTH  0x00000004

void RegisterCallback(void);
void InitWindowSize(int, int);
void InitWindowPosition(int, int);
void InitDisplayMode(int);
void CreateWindow(const char *);
void DisplayFunc(const char *);
void ReshapeFunc(const char *);
void KeyboardFunc(const char *);
void MouseFunc(const char *);
void MotionFunc(const char *);
void IdleFunc(const char *);
void SpecialFunc(const char *);
void MainLoop(void);
void SwapBuffers(void);
void PostRedisplay(void);
void ReshapeWindow(int, int);
void PositionWindow(int, int);
void FullScreen(void);

void WireSphere(float, int, int);
void WireCube(float);
void WireCone(double, double, int, int);
void WireTorus(double, double, int, int);
void WireDodecahedron(void);
void WireTeapot(double);
void WireOctahedron(void);
void WireTetrahedron(void);
void WireIcosahedron(void);

void SolidSphere(float, int, int);
void SolidCube(float);
void SolidCone(double, double, int, int);
void SolidTorus(double, double, int, int);
void SolidDodecahedron(void);
void SolidTeapot(double);
void SolidOctahedron(void);
void SolidTetrahedron(void);
void SolidIcosahedron(void);

#endif
