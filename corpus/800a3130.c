#include "tc_rt.h"

void fn_800a3130(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    (void)param_1;
    wr8(param_5, (u8)((rd32(param_2) >> 0x11u) & 1u));
    wr32(param_4, ((rd32(param_2) >> 0xdu) & 0xfu) + 1u);
    wr32(param_3, rd32(param_2) & 0xfffc1fffu);
    wr32(param_2, rd32(param_2) & 0xfffc1fffu);
    return;
}
