# Makefile

CFLAGS=-O2

#OPENGL_LIBS=-lopengl32 -lglu32 -lglut32
OPENGL_LIBS=-lGL -lGLU -lglut

.PHONY: all clean

all : liblua glua

liblua :
	$(MAKE) -C lua

glua : glua.o gl.o glu.o glut.o gl_wrap.o glu_wrap.o glut_wrap.o
	gcc -o $@ $^ -Llua -llua $(OPENGL_LIBS)

gl_wrap.c : gl.i
	swig -lua $<

glu_wrap.c : glu.i
	swig -lua $<

glut_wrap.c : glut.i
	swig -lua $<

clean :
	rm -fr *.o *.exe glua gl_wrap.c glu_wrap.c glut_wrap.c *.stackdump
	$(MAKE) -C lua clean

%.o : %.c
	gcc -o $@ -c $< $(CFLAGS) -I. -Ilua

