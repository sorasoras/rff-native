#include "tc_rt.h"

void fn_8028e2fc(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r12 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fded0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r27 = 1u;
    for (;;) {
        a.r[0] = rd32(0x8053d57cu);
        r3 = tc_call(0x80297be4u, &a);
        f1 = tc_lastf();
        wr32(0x8053d57cu, r3);
        if (r3 == 0u) break;
        r4 = rd32(0x8053d57cu);
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
        a.r[0] = 0x817fded8u;
        a.r[1] = r4;
        f1 = tc_callf(0x8028d2a4u, &a);
        r12 = rd32(0x8053d578u);
        wr8(0x817fdedeu, 0u);
        wr32(0x817fdfd8u, 0u);
        a.r[0] = 2u;
        a.r[1] = 0x817fded8u;
        a.r[2] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    if (r27 != 0u) {
        a.r[0] = 0x110u;
        r3 = tc_call(0x8028a0d4u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            wr16(r3, 0x207u);
            a.r[0] = r3;
            f1 = tc_callf(0x8028d750u, &a);
        }
    }
    a.r[0] = 2u;
    a.r[1] = param_r3 + 8u;
    a.r[2] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(0x8053d578u), &a);
    return;
}
