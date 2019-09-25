// mathutil_sse
// Author: 0xAA55
// The implemention of mathutil API which uses SSE intrinsics.


#ifndef _MATHUTIL_SSE_H_
#define _MATHUTIL_SSE_H_

#include"mathutil_conf.h"
#include"mathutil.h"

#define math_func(r,n,arg) r n ## _sse arg

#include"mathutil_funclist.h"

#undef math_func

#if MATHUTIL_DETECT_CPU
int mathutil_sse_implements();
#endif // !MATHUTIL_DETECT_CPU

#endif // _MATHUTIL_MMX_H_
