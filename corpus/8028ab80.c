#include "tc_rt.h"

u32 fn_8028ab80(s32 param_1)
{
    return (ppc_cntlzw((u32)rd16((u32)param_1 + 8u)) >> 5u) & 0xffu;
}
