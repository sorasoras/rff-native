#include "tc_rt.h"

u32 fn_8015c5c8(s32 param_1)
{
    return (ppc_cntlzw(rd32((u32)param_1 + 0x444u) - 4u) >> 5u) & 0x7ffffffu;
}
