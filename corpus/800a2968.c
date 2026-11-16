#include "tc_rt.h"

s32 fn_800a2968(u32 param_1, s32 param_2)
{
    (void)param_1;
    return (s32)(s8)((ppc_cntlzw(rd32((u32)param_2 + 0x3338u)) >> 5u) & 0x7ffffffu);
}
