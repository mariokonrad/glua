%module glu

%{
#undef SWIG_init_user
#define SWIG_init_user SWIG_init_user_glu
#include "glu.h"
%}
%include "glu.h"

