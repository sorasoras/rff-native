#include "tc_rt.h"

u64 fn_80255e84(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r8 = 0, r9 = 0;
    r8 = 0x20u - (u32)param_3;
    r9 = (u32)param_3 - 0x20u;
    r3 = ((((u32)param_3 & 0x20u) != 0u) ? 0u : ((u32)param_1 << ((u32)param_3 & 0x1fu))) | (((r8 & 0x20u) != 0u) ? 0u : (param_2 >> (r8 & 0x1fu))) | (((r9 & 0x20u) != 0u) ? 0u : (param_2 << (r9 & 0x1fu)));
    return ((u64)r3 << 0x20ull) | (u64)((((u32)param_3 & 0x20u) != 0u) ? 0u : (param_2 << ((u32)param_3 & 0x1fu)));
}
