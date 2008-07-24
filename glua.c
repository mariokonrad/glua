#include <stdio.h>
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
#include <GL/glut.h>

extern int luaopen_gl(lua_State* L);
extern int luaopen_glu(lua_State* L);
extern int luaopen_glut(lua_State* L);
extern int luaopen_img(lua_State* L);
extern void register_lua(lua_State * lua);

int main(int argc, char ** argv)
{
	glutInit(&argc, argv);

	lua_State *L;
	if (argc<2) {
	    printf("%s: <filename.lua>\n",argv[0]);
	    return 0;
	}
	L = lua_open();
	luaL_openlibs(L);
	luaopen_gl(L);
	luaopen_glu(L);
	luaopen_glut(L);
	luaopen_img(L);
	register_lua(L);
	if (luaL_loadfile(L,argv[1]) == 0) {
	    if (lua_pcall(L,0,0,0)) lua_error(L);
	} else {
	    printf("unable to load %s\n",argv[1]);
	}
	lua_close(L);
	return 0;
}
