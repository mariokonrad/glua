%module gl

%include <typemaps.i>

SWIG_TYPEMAP_NUM_ARR(byte,signed char);
SWIG_TYPEMAP_NUM_ARR(ubyte,unsigned char);

%apply (double INPUT[ANY]) {(double [2])};
%apply (double INPUT[ANY]) {(double [3])};
%apply (double INPUT[ANY]) {(double [4])};
%apply (double INPUT[ANY]) {(double [16])};
%apply (float INPUT[ANY]) {(float [2])};
%apply (float INPUT[ANY]) {(float [3])};
%apply (float INPUT[ANY]) {(float [4])};
%apply (float INPUT[ANY]) {(float [16])};
%apply (int INPUT[ANY]) {(int [2])};
%apply (int INPUT[ANY]) {(int [3])};
%apply (int INPUT[ANY]) {(int [4])};
%apply (short INPUT[ANY]) {(short [2])};
%apply (short INPUT[ANY]) {(short [3])};
%apply (short INPUT[ANY]) {(short [4])};
%apply (signed char INPUT[ANY]) {(signed char [3])};
%apply (signed char INPUT[ANY]) {(signed char [4])};
%apply (unsigned char INPUT[ANY]) {(unsigned char [3])};
%apply (unsigned char INPUT[ANY]) {(unsigned char [4])};
%apply (unsigned short INPUT[ANY]) {(unsigned short [3])};
%apply (unsigned short INPUT[ANY]) {(unsigned short [4])};
%apply (unsigned int INPUT[ANY]) {(unsigned int [3])};
%apply (unsigned int INPUT[ANY]) {(unsigned int [4])};
%apply (int, float INPUT[ANY]) {(int, float [4])};
%apply (int, int INPUT[ANY]) {(int, int [4])};
%apply (int, int, float INPUT[ANY]) {(int, int, float [4])};
%apply (int, int, int INPUT[ANY]) {(int, int, int [4])};
%apply (int, unsigned int INPUT[ANY]) {(int, unsigned int * )};

%{
#undef SWIG_init_user
#define SWIG_init_user SWIG_init_user_gl
#include "gl.h"
%}
%include "gl.h"

