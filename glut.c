#include "glut.h"
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <lua.h>

static lua_State * L = NULL;

static const char * func_display = NULL;
static const char * func_reshape = NULL;
static const char * func_keyboard = NULL;
static const char * func_mouse = NULL;
static const char * func_motion = NULL;
static const char * func_idle = NULL;
static const char * func_special = NULL;

static void display(void)
{
	if (L == NULL || func_display == NULL) return;
	lua_getglobal(L, func_display);
	if (lua_pcall(L, 0, 0, 0)) lua_error(L);
}

static void reshape(int w, int h)
{
	if (L == NULL || func_reshape == NULL) return;
	lua_getglobal(L, func_reshape);
	lua_pushinteger(L, w);
	lua_pushinteger(L, h);
	if (lua_pcall(L, 2, 0, 0)) lua_error(L);
}

static void keyboard(unsigned char c, int x, int y)
{
	if (L == NULL || func_keyboard == NULL) return;
	lua_getglobal(L, func_keyboard);
	lua_pushinteger(L, c);
	lua_pushinteger(L, x);
	lua_pushinteger(L, y);
	if (lua_pcall(L, 3, 0, 0)) lua_error(L);
}

static void mouse(int b, int s, int x, int y)
{
	if (L == NULL || func_mouse == NULL) return;
	lua_getglobal(L, func_mouse);
	lua_pushinteger(L, b);
	lua_pushinteger(L, s);
	lua_pushinteger(L, x);
	lua_pushinteger(L, y);
	if (lua_pcall(L, 4, 0, 0)) lua_error(L);
}

static void motion(int x, int y)
{
	if (L == NULL || func_motion == NULL) return;
	lua_getglobal(L, func_motion);
	lua_pushinteger(L, x);
	lua_pushinteger(L, y);
	if (lua_pcall(L, 2, 0, 0)) lua_error(L);
}

static void idle(void)
{
	if (L == NULL || func_idle == NULL) return;
	lua_getglobal(L, func_idle);
	if (lua_pcall(L, 0, 0, 0)) lua_error(L);
}

static void special(int k, int x, int y)
{
	if (L == NULL || func_special == NULL) return;
	lua_getglobal(L, func_special);
	lua_pushinteger(L, k);
	lua_pushinteger(L, x);
	lua_pushinteger(L, y);
	if (lua_pcall(L, 3, 0, 0)) lua_error(L);
}

void register_lua(lua_State * lua) { L = lua; }

void RegisterCallback(void)
{
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutMotionFunc(motion);
	glutIdleFunc(idle);
	glutSpecialFunc(special);
}

void InitDisplayMode(int mode)
{
	int glutmode = 0;

	if (mode & _RGBA)   glutmode |= GLUT_RGBA;
	if (mode & _DOUBLE) glutmode |= GLUT_DOUBLE;
	if (mode & _DEPTH)  glutmode |= GLUT_DEPTH;

	glutInitDisplayMode(glutmode);
}

void GLUT_Init(void)
{
	int argc = 0;
	glutInit(&argc, NULL);
}

void InitWindowSize(int w, int h) { glutInitWindowSize(w, h); }
void InitWindowPosition(int x, int y) { glutInitWindowPosition(x, y); }
void CreateWindow(const char * title) { glutCreateWindow(title); }
void DisplayFunc(const char * f) { func_display = f; }
void ReshapeFunc(const char * f) { func_reshape = f; }
void KeyboardFunc(const char * f) { func_keyboard = f; }
void MouseFunc(const char * f) { func_mouse = f; }
void MotionFunc(const char * f) { func_motion = f; }
void IdleFunc(const char * f) { func_idle = f; }
void SpecialFunc(const char *f ) { func_special = f; }
void MainLoop(void) { glutMainLoop(); }
void SwapBuffers(void) { glutSwapBuffers(); }
void PostRedisplay(void) { glutPostRedisplay(); }
void WireSphere(float r, int a, int b) { glutWireSphere(r, a, b); }
void SolidSphere(float r, int a, int b) { glutSolidSphere(r, a, b); }
void ReshapeWindow(int w, int h) { glutReshapeWindow(w, h); }
void PositionWindow(int x, int y) { glutPositionWindow(x, y); }
void FullScreen(void) { glutFullScreen(); }
void WireCube(float r) { glutWireCube(r); }
void SolidCube(float r) { glutSolidCube(r); }

