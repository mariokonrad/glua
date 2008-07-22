%module gl

%include <typemaps.i>
%apply (double INPUT[ANY]) {(double arr[2])};
%apply (double INPUT[ANY]) {(double arr[3])};
%apply (double INPUT[ANY]) {(double arr[4])};
%apply (float INPUT[ANY]) {(float arr[2])};
%apply (float INPUT[ANY]) {(float arr[3])};
%apply (float INPUT[ANY]) {(float arr[4])};
%apply (int, float INPUT[ANY]) {(int, float arr[4])};
%apply (int, int, float INPUT[ANY]) {(int, int, float arr[4])};

%{
#undef SWIG_init_user
#define SWIG_init_user SWIG_init_user_gl
#include "gl.h"
%}
%include "gl.h"

