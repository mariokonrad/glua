# Makefile

CFLAGS=-O2

#OPENGL_LIBS=-lopengl32 -lglu32 -lglut32
OPENGL_LIBS=-lGL -lGLU -lglut

CC=gcc
SWIG=swig

.PHONY: all clean clean-all

all : liblua glua

liblua :
	$(MAKE) -C lua

glua : glua.o \
    gl.o glu.o glut.o img.o \
    gl_wrap.o \
    glu_wrap.o \
    glut_wrap.o \
    img_wrap.o
	$(CC) -o $@ $^ -Llua -llua $(OPENGL_LIBS)

gl_wrap.c : gl.i
	$(SWIG) -lua $<

glu_wrap.c : glu.i
	$(SWIG) -lua $<

glut_wrap.c : glut.i
	$(SWIG) -lua $<

img_wrap.c : img.i
	$(SWIG) -lua $<

clean :
	rm -fr *.o *.exe glua *_wrap.c *.stackdump

clean-all : clean
	$(MAKE) -C lua clean

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS) -I. -Ilua

