#include "tc_rt.h"

void fn_8015ded8(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0xb4u), &a);
    a.r[0] = param_1;
    (void)tc_call(0x8015e03cu, &a);
    r0 = rd32(param_1 + 0xf8u);
    wr32(param_1 + 0x120u, 2u);
    r3 = 0u;
    if (r0 == 0x11u) {
        r3 = 1u;
    }
    if (rd32(param_1 + 0x130u) != 0u) {
        r3 = 1u;
    }
    if (rd32(param_1 + 0x134u) != 0u) {
        r3 = 2u;
    }
    r0 = rd32(param_1 + 0x12cu);
    if (r0 == 8u) {
        r3 = 2u;
    } else {
        if (r0 == 9u) {
            r3 = 1u;
        }
    }
    if (r3 == 1u) {
        a.r[0] = param_1;
        (void)tc_call(0x8015e364u, &a);
        a.r[0] = param_1;
        (void)tc_call(0x8015e324u, &a);
        wr32(param_1 + 0x12cu, 0xau);
        wr32(param_1 + 0x120u, 6u);
    } else {
        if (r3 == 2u) {
            a.r[0] = param_1;
            (void)tc_call(0x8015e3c8u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x8015e344u, &a);
            wr32(param_1 + 0x12cu, 0xau);
            wr32(param_1 + 0x120u, 6u);
        }
    }
    r4 = rd32(param_1 + 0x140u);
    if (r4 != 0xffffffffu) {
        a.r[0] = param_1;
        a.r[1] = r4;
        r3 = tc_call(0x800dacf8u, &a);
        if (r3 == 1u) {
            a.r[0] = param_1;
            (void)tc_call(0x8015e0c4u, &a);
        }
    }
    return;
}
