#include "tc_rt.h"

void fn_802efee4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0, r12 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u), f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    for (;;) {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        r11 = r1 + 0x20u;
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r31 = rd32(r3 + 0x10u);
        r27 = param_2;
        r28 = param_3;
        r29 = param_4;
        r30 = r3 + 0x10u;
        for (;;) {
            if (r31 == r30) {
                r11 = r1 + 0x20u;
                r27 = rd32(r11 - 0x14u);
                r28 = rd32(r11 - 0x10u);
                r29 = rd32(r11 - 0xcu);
                r30 = rd32(r11 - 8u);
                r31 = rd32(r11 - 4u);
                r0 = rd32(r1 + 0x24u);
                return;
            }
            r3 = rd32(r31 + 8u);
            r12 = rd32(r3);
            r12 = rd32(r12 + 0x44u);
            lr = 0x802eff30u;
            if (r12 == 0x802efee4u) break;
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = param_3;
            a.r[3] = param_4;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            f1 = tc_callf(r12, &a);
            r3 = tc_lastr();
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r31 = rd32(r31);
        }
    }
}
