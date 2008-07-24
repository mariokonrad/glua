%module img

%{
#undef SWIG_init_user
#define SWIG_init_user SWIG_init_user_img
#include "img.h"
%}
%include "img.h"

