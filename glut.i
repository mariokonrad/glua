%module glut

%{
#undef SWIG_init_user
#define SWIG_init_user SWIG_init_user_glut
#include "glut.h"
%}
%include "glut.h"

