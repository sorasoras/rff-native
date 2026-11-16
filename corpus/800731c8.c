#include "tc_rt.h"

u32 fn_800731c8(s32 param_1)
{
    return (ppc_cntlzw(rd32(((u32)param_1 * 0x34u) - 0x7fb79904u) - 2u) >> 5u) & 0x7ffffffu;
}
