#include "tc_rt.h"

u32 fn_801cb5a0(u32 param_r4, u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x801cb3b8u, &a);
    r3 = rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fcc4288u);
    return r3;
}
