#include "tc_rt.h"

void fn_8028e0d8(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fddd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = 1u;
    r3 = tc_call(0x80297b2cu, &a);
    f1 = tc_lastf();
    wr32(0x8053d57cu, r3);
    if (r3 != 0u) {
        r27 = 0u;
        if (rd32(0x8053d580u) == 0u) {
            r27 = 1u;
            for (;;) {
                r4 = rd32(0x8053d57cu);
                if (r4 == 0u) break;
                if ((u32)rd8(r4 + 0x10u) == 0u) {
                    r4 = (u32)rd16(0x8053dfa4u);
                    if (r4 < 0x7530u) {
                        a.r[0] = 0x8053d5d0u;
                        a.r[1] = 0x205u;
                        a.r[2] = r4 + 0x64u;
                        f1 = tc_callf(0x8028d76cu, &a);
                    }
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = rd32(0x8053d57cu) + 2u;
                    a.r[1] = 0x8028ee24u;
                    r3 = tc_call(0x8029790cu, &a);
                    f1 = tc_lastf();
                    if ((r3 & 0xffu) != 1u) {
                        a.r[0] = 0x8053d5d0u;
                        (void)tc_call(0x8028d78cu, &a);
                        r28 = rd32(0x8053d57cu) + 2u;
                        a.r[0] = 0x110u;
                        r3 = tc_call(0x8028a0d4u, &a);
                        f1 = tc_lastf();
                        r29 = r3;
                        if (r3 != 0u) {
                            r3 = r3 + 8u;
                            a.r[0] = r3;
                            a.r[1] = r28;
                            (void)tc_call(0x8028d2a4u, &a);
                            wr8(r29 + 0xeu, 0u);
                            wr16(r29, 0x204u);
                            a.r[0] = r29;
                            f1 = tc_callf(0x8028d750u, &a);
                        }
                    }
                    r27 = 0u;
                    break;
                }
                r4 = r4 + 2u;
                a.r[0] = 0x817fddd8u;
                a.r[1] = r4;
                f1 = tc_callf(0x8028d2a4u, &a);
                r12 = rd32(0x8053d578u);
                wr8(0x817fdddeu, 0u);
                wr32(0x817fded8u, 0u);
                a.r[0] = 2u;
                a.r[1] = 0x817fddd8u;
                a.r[2] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
                a.r[0] = rd32(0x8053d57cu);
                r3 = tc_call(0x80297be4u, &a);
                f1 = tc_lastf();
                wr32(0x8053d57cu, r3);
            }
        } else {
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
            if ((r3 & 0xffu) == 0u) {
                wr8(0x8053d5f0u, 1u);
            } else {
                wr8(0x8053d5f0u, 0u);
            }
            wr8(0x8053d5f1u, 0u);
            a.r[0] = 0x8028ede4u;
            (void)tc_call(0x8029a674u, &a);
            r0 = rd32(0x8053d580u);
            r4 = rd32(0x8053d57cu);
            wr8(0x8053d5e8u, 0u);
            r4 = r4 + 2u;
            wr32(0x8053d588u, 0u);
            wr32(0x8053d584u, r0);
            wr8(0x8053d598u, 0u);
            a.r[0] = 0x8053d592u;
            a.r[1] = r4;
            (void)tc_call(0x8028d2a4u, &a);
            a.r[0] = rd32(0x8053d57cu) + 2u;
            f1 = tc_callf(0x8028ea40u, &a);
        }
    }
    if (r27 != 0u) {
        wr32(0x8053d580u, 0u);
        a.r[0] = 0x110u;
        r3 = tc_call(0x8028a0d4u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            wr16(r3, 0x207u);
            a.r[0] = r3;
            f1 = tc_callf(0x8028d750u, &a);
        }
    }
    r12 = rd32(0x8053d578u);
    wr8(0x817fdee0u, rd8(param_r3 + 8u));
    a.r[0] = 1u;
    a.r[1] = 0x817fdee0u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(r12, &a);
    return;
}
