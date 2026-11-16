#include "tc_rt.h"

u32 fn_8017dc4c(s32 param_1)
{
    return (ppc_cntlzw(rd32((u32)param_1 + 0x94u) - 1u) >> 5u) & 0x7ffffffu;
}
