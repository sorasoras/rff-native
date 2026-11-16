#include "tc_rt.h"

void fn_80083570(s32 param_1, u32 param_2)
{
    u32 r4 = 0, r5 = 0;
    r5 = param_2 & 7u;
    r4 = (u32)param_1 + ((param_2 >> 3u) & 0x1fffffffu);
    wr8(r4 + 0x7ecu, (u8)((u32)rd8(r4 + 0x7ecu) | ((((r5 & 0x20u) != 0u) ? 0u : (1u << (r5 & 0x1fu))) & 0xffu)));
    return;
}
