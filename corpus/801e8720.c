#include "tc_rt.h"

u32 fn_801e8720(s32 param_1)
{
    return (ppc_cntlzw(rd32((u32)param_1 + 0x270u) - 4u) >> 5u) & 0x7ffffffu;
}
