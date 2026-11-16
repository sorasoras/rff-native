#include "tc_rt.h"

u32 fn_802656f8(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r31 = (rd32(0x8038f2e4u) & 0xfc0000ffu) | ((((u32)param_1 << 0x10u) & 0xffff0000u) | (((u32)param_2 << 8u) & 0xffffff00u));
    wr32(0x8038f2e4u, r31);
    wr32(0xcd006430u, r31);
    a.r[0] = r3;
    r3 = tc_call(0x8022c2d8u, &a);
    f1 = tc_lastf();
    return r31;
}
