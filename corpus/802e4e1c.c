#include "tc_rt.h"

void fn_802e4e1c(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 lr = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r11 = 0, r12 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = param_3;
    r6 = (u32)param_4;
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
        r12 = rd32(r3);
        r26 = r3;
        r27 = r4;
        r28 = r5;
        r12 = rd32(r12 + 0x54u);
        r29 = r6;
        lr = 0x802e4e50u;
        if (r12 != 0x802e4e1cu) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.f[0] = f1;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            if (r3 != 0u) {
                wr8(r3 + 0xeu, (u8)((ppc_cntlzw(r28) >> 5u) & 0x7ffffffu));
            }
            r12 = rd32(r26);
            r3 = r26;
            r12 = rd32(r12 + 0x64u);
            lr = 0x802e4e78u;
            if (r12 != 0x802e4e1cu) {
                a.r[0] = r26;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                r5 = 0u;
                r6 = 0u;
                r30 = r3 & 0xffu;
                r31 = 0u;
                for (;;) {
                    if ((r31 & 0xffu) >= r30) {
                        if (r29 == 0u) {
                            return;
                        }
                        r31 = rd32(r26 + 0x14u);
                        r30 = r26 + 0x14u;
                        for (;;) {
                            if (r31 == r30) {
                                return;
                            }
                            r12 = rd32(r31 - 4u);
                            r3 = r31 - 4u;
                            r4 = r27;
                            r5 = r28;
                            r12 = rd32(r12 + 0x5cu);
                            r6 = r29;
                            lr = 0x802e4ef8u;
                            if (r12 == 0x802e4e1cu) break;
                            a.r[0] = r3;
                            a.r[1] = r27;
                            a.r[2] = r28;
                            a.r[3] = r29;
                            a.f[0] = f1;
                            f1 = tc_callf(r12, &a);
                            r3 = tc_lastr();
                            r31 = rd32(r31);
                        }
                        break;
                    }
                    r12 = rd32(r26);
                    r3 = r26;
                    r4 = r31 & 0xffu;
                    r12 = rd32(r12 + 0x6cu);
                    lr = 0x802e4e9cu;
                    if (r12 == 0x802e4e1cu) break;
                    a.r[0] = r26;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                    r6 = 0u;
                    r12 = rd32(r3);
                    r4 = r27;
                    r5 = r28;
                    r12 = rd32(r12 + 0x28u);
                    lr = 0x802e4eb4u;
                    if (r12 == 0x802e4e1cu) break;
                    a.r[0] = r3;
                    a.r[1] = r27;
                    a.r[2] = r28;
                    a.r[3] = 0u;
                    a.f[0] = f1;
                    f1 = tc_callf(r12, &a);
                    r3 = tc_lastr();
                    r5 = 0u;
                    r6 = 0u;
                    r31 = r31 + 1u;
                }
            }
        }
    }
}
