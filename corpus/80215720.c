#include "tc_rt.h"

u32 fn_80215720(s32 param_1, s32 param_2, u32 param_3)
{
    wr32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu), param_3);
    return 1u;
}
