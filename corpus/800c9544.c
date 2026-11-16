#include "tc_rt.h"

u32 fn_800c9544(s32 param_1, u32 param_2)
{
    u32 r4 = 0;
    r4 = param_2 & 7u;
    r4 = ((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu));
    return r4 & 0xffu & (u32)rd8((u32)param_1 + ((param_2 >> 3u) & 0x1fffffffu) + 0x150u);
}
