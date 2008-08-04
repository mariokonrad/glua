%module util

%{
#undef SWIG_init_user
#define SWIG_init_user SWIG_init_user_util
#include "util.h"
%}
%include "util.h"

