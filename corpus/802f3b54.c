#include "tc_rt.h"

void fn_802f3b54(u32 param_1, s32 param_2)
{
    u32 c1eq = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = rd32(param_1);
    r31 = r3;
    c1eq = r4 == 0u;
    if (!c1eq) {
        if ((u32)param_2 != 0u) {
            r3 = 0u;
            if (!c1eq && (u32)rd16(r4 + 0x13cu) == 2u) {
                r3 = 1u;
            }
            if (r3 == 0u) {
                wr16(0x817fdfc4u, 2u);
                wr16(0x817fdfc6u, 0u);
                wr16(0x817fdfc8u, 0u);
                wr16(0x817fdfcau, 0u);
                wr16(0x817fdfccu, 0u);
                a.r[0] = (u32)param_2;
                a.r[1] = 0x817fdfceu;
                a.r[2] = 0x817fdfd0u;
                a.r[3] = 0x817fdfd2u;
                a.r[4] = 0x817fdfd4u;
                a.r[5] = 0x817fdfd6u;
                (void)tc_call(0x8030e8c4u, &a);
                r3 = tc_call(0x8022c2b0u, &a);
                r4 = rd32(param_1);
                r30 = r3;
                if (r4 != 0u) {
                    a.r[0] = r4 + 0x13cu;
                    a.r[1] = 0x817fdfc4u;
                    a.r[2] = 0x14u;
                    (void)tc_call(0x80004338u, &a);
                    wr32(param_1 + 4u, rd32(param_1 + 4u) | 0x10000000u);
                    a.r[0] = r30;
                    (void)tc_call(0x8022c2d8u, &a);
                } else {
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                }
            } else {
                a.r[0] = (u32)param_2;
                a.r[1] = 0x817fdfc0u;
                a.r[2] = 0x817fdfbeu;
                a.r[3] = 0x817fdfbcu;
                a.r[4] = 0x817fdfbau;
                a.r[5] = 0x817fdfb8u;
                f1 = tc_callf(0x8030e8c4u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = param_1;
                a.r[1] = 2u;
                a.r[2] = (u32)rd16(0x817fdfc0u);
                a.r[3] = (u32)rd16(0x817fdfbeu);
                a.r[4] = (u32)rd16(0x817fdfbcu);
                a.r[5] = (u32)rd16(0x817fdfbau);
                a.r[6] = (u32)rd16(0x817fdfb8u);
                a.r[7] = 0u;
                (void)tc_call(0x802f4534u, &a);
            }
        } else {
            wr16(0x817fdfd8u, 0u);
            r3 = tc_call(0x8022c2b0u, &a);
            r4 = rd32(param_1);
            r30 = r3;
            if (r4 != 0u) {
                a.r[0] = r4 + 0x13cu;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = 0x14u;
                (void)tc_call(0x80004338u, &a);
                wr32(param_1 + 4u, rd32(param_1 + 4u) | 0x10000000u);
                a.r[0] = r30;
                (void)tc_call(0x8022c2d8u, &a);
            } else {
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            }
        }
        a.r[0] = r31;
        (void)tc_call(0x8022c2d8u, &a);
    } else {
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
