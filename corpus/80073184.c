#include "tc_rt.h"

u32 fn_80073184(s32 param_1)
{
    return (ppc_cntlzw(rd32(((u32)param_1 * 0x34u) - 0x7fb79904u) - 1u) >> 5u) & 0x7ffffffu;
}
