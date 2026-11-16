#include "tc_rt.h"

u32 fn_80097ea8(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = 0x80096bc0u;
    a.r[2] = 0x80096c00u;
    a.r[3] = 0x80096c40u;
    a.r[4] = 0x80096c94u;
    r3 = tc_call(0x800a3310u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r30 = rd32(param_1 + 4u);
        a.r[0] = 2u;
        r3 = tc_call(0x800a7908u, &a);
        r31 = r3;
        a.r[0] = 2u;
        r3 = tc_call(0x800a7904u, &a);
        a.r[0] = r30;
        a.r[1] = r3;
        a.r[2] = r31;
        (void)tc_call(0x8009abd8u, &a);
        a.r[0] = 0xau;
        r3 = tc_call(0x80118c88u, &a);
        r31 = r3;
        a.r[0] = 0xau;
        r3 = tc_call(0x80118c38u, &a);
        a.r[0] = rd32(param_1 + 0x18u);
        a.r[1] = r3;
        a.r[2] = r31;
        (void)tc_call(0x801a62c4u, &a);
        r3 = 1u;
    }
    return r3;
}
