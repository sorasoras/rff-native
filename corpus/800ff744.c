#include "tc_rt.h"

u32 fn_800ff744(s32 param_1)
{
    return (ppc_cntlzw(rd32((u32)param_1 + 0x28u)) >> 5u) & 0x7ffffffu;
}
