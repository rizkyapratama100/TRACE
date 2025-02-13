%module me72287aa13591e6a424dbbeb9127ca3c

%include "trick/swig/trick_swig.i"


%insert("begin") %{
#include <Python.h>
#include <cstddef>
%}

%{
#include "/home/rizky-ubuntu/TRACE/SIM_TRACE/models/ball/include/ball_numeric.h"
%}





#ifndef TRACE_NUMERIC_H
#define TRACE_NUMERIC_H

%import "build/home/rizky-ubuntu/TRACE/SIM_TRACE/models/ball/include/ball_py.i"

#ifdef __cplusplus
extern "C" {
#endif
int robot_integ(BALL*) ;
int robot_deriv(BALL*) ;
#ifdef __cplusplus
}
#endif
#endif
