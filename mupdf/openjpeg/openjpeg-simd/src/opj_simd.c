#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "opj_simd.h"

//#include "StLog.h"
//#define LCTX "OpenJPEG.SIMD"

int opj_simd_v4dwt_decode_available()
{
    return opj_init_simd();
}

int opj_simd_mct_decode_available()
{
    return opj_init_simd();
}

int opj_simd_tcd_decode_available()
{
    return opj_init_simd();
}

