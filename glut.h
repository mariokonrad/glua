#ifndef __GLUT__H__
#define __GLUT__H__

#define _RGBA   0x00000001
#define _DOUBLE 0x00000002
#define _DEPTH  0x00000004

void GLUT_Init(void);
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
void WireSphere(float, int, int);
void SolidSphere(float, int, int);
void ReshapeWindow(int, int);
void PositionWindow(int, int);
void FullScreen(void);
void WireCube(float);
void SolidCube(float);

#endif
