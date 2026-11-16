#include "tc_rt.h"

u32 fn_800ac4ac(s32 param_1)
{
    return (ppc_cntlzw(rd32((u32)param_1 + 0xcu) - 2u) >> 5u) & 0x7ffffffu;
}
