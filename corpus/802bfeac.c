#include "tc_rt.h"

void fn_802bfeac(u32 param_r3, u32 param_r4)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0;
    u32 r12 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_r3;
    r4 = param_r4;
    for (;;) {
        wr32(r1 - 0x20u, r1);
        r1 = r1 - 0x20u;
        wr32(r1 + 0x24u, lr);
        r11 = r1 + 0x20u;
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r31 = rd32(r4 + 4u);
        r26 = r3;
        r30 = r4 + 4u;
        r29 = 0x80540000u;
        for (;;) {
            if (r31 == r30) {
                r11 = r1 + 0x20u;
                r26 = rd32(r11 - 0x18u);
                r27 = rd32(r11 - 0x14u);
                r28 = rd32(r11 - 0x10u);
                r29 = rd32(r11 - 0xcu);
                r30 = rd32(r11 - 8u);
                r31 = rd32(r11 - 4u);
                r0 = rd32(r1 + 0x24u);
                return;
            }
            a.r[0] = r26 + 0x18u;
            a.r[1] = 0u;
            r3 = tc_call(0x802d7bacu, &a);
            f1 = tc_lastf();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r27 = r3;
            r28 = r31 - 4u;
            while (r3 != 0u && rd32(r3) != r28) {
                a.r[0] = r26 + 0x18u;
                a.r[1] = r3;
                r3 = tc_call(0x802d7bacu, &a);
                f1 = tc_lastf();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                r27 = r3;
            }
            r12 = rd32(r26);
            r3 = r26;
            r4 = rd32(r27 + 4u);
            r12 = rd32(r12 + 0x24u);
            lr = 0x802bff28u;
            if (r12 == 0x802bfeacu) break;
            a.r[0] = r26;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            a.r[0] = r26 + 0x18u;
            a.r[1] = r27;
            f1 = tc_callf(0x802d7b40u, &a);
            r3 = tc_lastr();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            wr32(0x805472d0u, rd32(0x805472d0u) - 1u);
            r3 = rd32(r26 + 0x14u);
            if (r3 == 0u) {
                r3 = rd32(r27 + 4u);
                if (r3 != 0u) {
                    r12 = rd32(r3);
                    r4 = 1u;
                    r12 = rd32(r12 + 0x1cu);
                    lr = 0x802bff84u;
                    if (r12 == 0x802bfeacu) break;
                    a.r[0] = r3;
                    a.r[1] = 1u;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                }
                f1 = tc_callf(0x80040cd4u, &a);
                r3 = tc_lastr();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            } else {
                r4 = rd32(r27 + 4u);
                a.r[0] = r3;
                r3 = tc_call(0x8026d4a0u, &a);
                f1 = tc_lastf();
                a.r[0] = rd32(r26 + 0x14u);
                f1 = tc_callf(0x8026d4a0u, &a);
                r3 = tc_lastr();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            }
            r12 = rd32(r26);
            r3 = r26;
            r4 = r31 + 0xcu;
            r12 = rd32(r12 + 0x60u);
            lr = 0x802bffa4u;
            if (r12 == 0x802bfeacu) break;
            a.r[0] = r26;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r31 = rd32(r31);
        }
    }
}
