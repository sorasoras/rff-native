#include "tc_rt.h"

u32 fn_8018d1b0(s32 param_1)
{
    return (ppc_cntlzw(rd32((u32)param_1 + 0x8cu) - rd32((u32)param_1 + 0x60u)) >> 5u) & 0x7ffffffu;
}
