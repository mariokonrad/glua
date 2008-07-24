%module gl

%include <typemaps.i>

SWIG_TYPEMAP_NUM_ARR(byte,signed char);
SWIG_TYPEMAP_NUM_ARR(ubyte,unsigned char);

%apply (double INPUT[ANY]) {(double arr[2])};
%apply (double INPUT[ANY]) {(double arr[3])};
%apply (double INPUT[ANY]) {(double arr[4])};
%apply (double INPUT[ANY]) {(double arr[16])};
%apply (float INPUT[ANY]) {(float arr[2])};
%apply (float INPUT[ANY]) {(float arr[3])};
%apply (float INPUT[ANY]) {(float arr[4])};
%apply (float INPUT[ANY]) {(float arr[16])};
%apply (int INPUT[ANY]) {(int arr[2])};
%apply (int INPUT[ANY]) {(int arr[3])};
%apply (int INPUT[ANY]) {(int arr[4])};
%apply (short INPUT[ANY]) {(short arr[2])};
%apply (short INPUT[ANY]) {(short arr[3])};
%apply (short INPUT[ANY]) {(short arr[4])};
%apply (signed char INPUT[ANY]) {(signed char arr[3])};
%apply (signed char INPUT[ANY]) {(signed char arr[4])};
%apply (unsigned char INPUT[ANY]) {(unsigned char arr[3])};
%apply (unsigned char INPUT[ANY]) {(unsigned char arr[4])};
%apply (unsigned short INPUT[ANY]) {(unsigned short arr[3])};
%apply (unsigned short INPUT[ANY]) {(unsigned short arr[4])};
%apply (unsigned int INPUT[ANY]) {(unsigned int arr[3])};
%apply (unsigned int INPUT[ANY]) {(unsigned int arr[4])};
%apply (int, float INPUT[ANY]) {(int, float arr[4])};
%apply (int, int INPUT[ANY]) {(int, int arr[4])};
%apply (int, int, float INPUT[ANY]) {(int, int, float arr[4])};
%apply (int, int, int INPUT[ANY]) {(int, int, int arr[4])};
%apply (int, unsigned int INPUT[ANY]) {(int, unsigned int * arr)};

%{
#undef SWIG_init_user
#define SWIG_init_user SWIG_init_user_gl
#include "gl.h"
%}
%include "gl.h"

