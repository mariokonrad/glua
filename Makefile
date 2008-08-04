# Makefile

ifeq ($(shell uname -s),Linux)
CC=gcc
CXX=g++
SWIG=swig
CXXFLAGS+=-O2 -I. -Ilua
CFLAGS+=-O2 -I. -Ilua
OPENGL_LIBS=-lGL -lGLU -lglut
LDFLAGS=
EXE=
endif

ifeq ($(shell uname -o),Cygwin)
CC=gcc
CXX=g++
SWIG=swig
CXXFLAGS+=-O2 -I. -Ilua
CFLAGS+=-O2 -I. -Ilua
OPENGL_LIBS=-lopengl32 -lglu32 -lglut32
LDFLAGS=
EXE=.exe
endif

.PHONY: all clean clean-all

all : liblua glua

liblua :
	$(MAKE) -C lua

glua : glua.o \
    gl.o glu.o glut.o img.o util.o \
    gl_wrap.o \
    glu_wrap.o \
    glut_wrap.o \
    img_wrap.o \
    util_wrap.o
	$(CC) -o $@ $^ -Llua -llua $(OPENGL_LIBS)

gl_wrap.c : gl.i
	$(SWIG) -lua $<

glu_wrap.c : glu.i
	$(SWIG) -lua $<

glut_wrap.c : glut.i
	$(SWIG) -lua $<

img_wrap.c : img.i
	$(SWIG) -lua $<

util_wrap.c : util.i
	$(SWIG) -lua $<

clean :
	rm -fr *.o *.exe glua *_wrap.c *.stackdump

clean-all : clean
	$(MAKE) -C lua clean

%.o : %.c
	$(CC) -o $@ -c $< $(CFLAGS)

