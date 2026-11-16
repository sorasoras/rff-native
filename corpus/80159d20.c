#include "tc_rt.h"

u32 fn_80159d20(s32 param_1, s32 param_2)
{
    return (ppc_cntlzw(rd32((u32)param_1 + 0x18u) - (u32)param_2) >> 5u) & 0x7ffffffu;
}
