#include "tc_rt.h"

void fn_8028ebe0(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(0x8053d57cu);
    r3 = tc_call(0x80297be4u, &a);
    f1 = tc_lastf();
    wr32(0x8053d57cu, r3);
    if (r3 != 0u) {
        r3 = r3 + 2u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        r3 = tc_call(0x80293fa4u, &a);
        if ((r3 & 0xffu) != 0u) {
            wr8(0x8053d5f0u, 0u);
        } else {
            wr8(0x8053d5f0u, 1u);
        }
        wr8(0x8053d5f1u, 0u);
        a.r[0] = 0x8028ede4u;
        (void)tc_call(0x8029a674u, &a);
        r0 = rd32(0x8053d580u);
        r4 = rd32(0x8053d57cu);
        wr8(0x8053d5e8u, 0u);
        r4 = r4 + 2u;
        wr32(0x8053d588u, 0u);
        wr8(0x8053d598u, 0u);
        wr32(0x8053d584u, r0);
        a.r[0] = 0x8053d592u;
        a.r[1] = r4;
        (void)tc_call(0x8028d2a4u, &a);
        a.r[0] = rd32(0x8053d57cu) + 2u;
        (void)tc_call(0x8028ea40u, &a);
    } else {
        wr32(0x8053d580u, 0u);
        a.r[0] = 0x110u;
        r3 = tc_call(0x8028a0d4u, &a);
        if (r3 != 0u) {
            wr16(r3, 0x207u);
            a.r[0] = r3;
            (void)tc_call(0x8028d750u, &a);
        }
    }
    return;
}
