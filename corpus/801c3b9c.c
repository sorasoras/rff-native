#include "tc_rt.h"

u32 fn_801c3b9c(u32 param_1, s32 param_2)
{
    (void)param_1;
    return (ppc_cntlzw(rd32((u32)param_2 + 0x110u)) >> 5u) & 0x7ffffffu;
}
