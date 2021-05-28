/*
 * MATLAB Compiler: 8.0 (R2020a)
 * Date: Sun Aug 30 16:48:14 2020
 * Arguments:
 * "-B""macro_default""-W""lib:test,version=1.0""-T""link:lib""-d""C:\Users\ramz
 * i\Documents\MATLAB\star
 * tacker\test\for_testing""-v""C:\Users\ramzi\Documents\MATLAB\star
 * tacker\matlab\test.m"
 */

#ifndef test_h
#define test_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#ifdef __cplusplus
extern "C" { // sbcheck:ok:extern_c
#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_test_C_API 
#define LIB_test_C_API /* No special import/export declaration */
#endif

/* GENERAL LIBRARY FUNCTIONS -- START */

extern LIB_test_C_API 
bool MW_CALL_CONV testInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_test_C_API 
bool MW_CALL_CONV testInitialize(void);

extern LIB_test_C_API 
void MW_CALL_CONV testTerminate(void);

extern LIB_test_C_API 
void MW_CALL_CONV testPrintStackTrace(void);

/* GENERAL LIBRARY FUNCTIONS -- END */

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_test_C_API 
bool MW_CALL_CONV mlxTest(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);

/* C INTERFACE -- MLX WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

/* C INTERFACE -- MLF WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- START */

extern LIB_test_C_API bool MW_CALL_CONV mlfTest(int nargout, mxArray** outputArg1, mxArray** outputArg2, mxArray* inputArg1, mxArray* inputArg2);

#ifdef __cplusplus
}
#endif
/* C INTERFACE -- MLF WRAPPERS FOR USER-DEFINED MATLAB FUNCTIONS -- END */

#endif
