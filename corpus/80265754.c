#include "tc_rt.h"

u32 fn_80265754(u32 param_1)
{
    u32 r3 = 0, r8 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 == 0u) {
        r3 = rd32(0x8038f2e4u);
    } else {
        r3 = tc_call(0x8022c2b0u, &a);
        r31 = (param_1 >> 0x18u) & 0xffu;
        r8 = (r31 >> 4u) & 0xfu;
        r31 = r31 & (r8 | 0x3fffff0u);
        r31 = (rd32(0x8038f2e4u) & ~r8) | r31;
        wr32(0x8038f2e4u, r31);
        wr32(0xcd006438u, 0x80000000u);
        wr32(0xcd006430u, r31);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        r3 = r31;
    }
    return r3;
}
