#include "tc_rt.h"

void fn_800a8474(void)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    (void)tc_call(0x8007942cu, &a);
    a.r[0] = rd32(0x805711c8u);
    r3 = tc_call(0x80043c20u, &a);
    wr32(0x805711ccu, r3);
    r0 = rd32(r3 + 0xfcu);
    if (r0 == 1u) {
        wr32(0x8035419cu, r3);
        wr32(0x80354198u, r3 + 4u);
        wr32(0x803541a0u, r3 + 8u);
        wr32(0x803541a4u, r3 + 0xcu);
        wr32(0x803541bcu, 1u);
        a.r[0] = 0x8049e2d0u;
        a.r[1] = r3 + 0x2cu;
        a.r[2] = 0x8049e2d0u;
        (void)tc_call(0x802343a4u, &a);
        wr32(0x803541b8u, 1u);
        a.r[0] = 0x8049e24cu;
        (void)tc_call(0x800a82b8u, &a);
    } else {
        if (r0 == 2u) {
            wr32(0x803541a8u, r3 + 0x14u);
            wr32(0x803541acu, r3 + 0x10u);
            wr32(0x803541b0u, r3 + 0x18u);
            wr32(0x803541b4u, r3 + 0x1cu);
            wr32(0x803541bcu, 1u);
            a.r[0] = 0x8049e2d0u;
            a.r[1] = r3 + 0x2cu;
            a.r[2] = 0x8049e2d0u;
            (void)tc_call(0x802343a4u, &a);
            wr32(0x803541b8u, 2u);
            wr32(0x8049e280u, 0xau);
            wr32(0x8049e288u, 0xffffffffu);
            wr32(0x8049e2c0u, 0xau);
            wr32(0x8049e2c8u, 0xffffffffu);
        } else {
            wr32(0x803541bcu, 0u);
            wr32(0x803541b8u, 0xffu);
            wr32(0x8049e280u, 0xau);
            wr32(0x8049e288u, 0xffffffffu);
            wr32(0x8049e2c0u, 0xau);
            wr32(0x8049e2c8u, 0xffffffffu);
        }
    }
    if (rd32(0x803541b8u) != 0xffu) {
        (void)tc_call(0x800a86f0u, &a);
    } else {
        (void)tc_call(0x800a86b0u, &a);
    }
    return;
}
