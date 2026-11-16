#include "tc_rt.h"

void fn_8030b0ac(u32 param_r3, u32 param_r4)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r11 = 0, r12 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_r3;
    r4 = param_r4;
    for (;;) {
        wr32(r1 - 0x30u, r1);
        r1 = r1 - 0x30u;
        wr32(r1 + 0x34u, lr);
        r11 = r1 + 0x30u;
        wr32(r11 - 0x1cu, r25);
        wr32(r11 - 0x18u, r26);
        wr32(r11 - 0x14u, r27);
        wr32(r11 - 0x10u, r28);
        wr32(r11 - 0xcu, 0u);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r25 = r3;
        r26 = r4;
        r3 = tc_call(0x8022c2b0u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r30 = r3;
        if (r26 != rd32(r25 + 0x24u)) {
            r27 = 0u;
            r31 = 0u;
            for (;;) {
                r3 = r25 + r31;
                r4 = rd32(r3 + 4u);
                r0 = r3 + 4u;
                for (;;) {
                    if (r4 == r0) {
                        fl_ = 2u;
                        break;
                    }
                    r28 = r4;
                    r4 = rd32(r4);
                    if ((r28 - 4u) == r26) {
                        wr32(r1 + 8u, r28);
                        a.r[0] = r3;
                        a.r[1] = r1 + 8u;
                        f1 = tc_callf(0x802deab0u, &a);
                        r3 = tc_lastr();
                        r4 = tc_lastr4();
                        wr8(r28 + 8u, 0u);
                        r3 = r28 - 4u;
                        r12 = rd32(r28 - 4u);
                        r12 = rd32(r12 + 0x10u);
                        lr = 0x8030b160u;
                        if (r12 == 0x8030b0acu) {
                            fl_ = 1u;
                            break;
                        }
                        a.r[0] = r3;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(r12, &a);
                        f1 = tc_lastf();
                        fl_ = 2u;
                        break;
                    }
                }
                if (fl_ == 2u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                    fl_ = 4u;
                    break;
                }
                r27 = r27 + 1u;
                r31 = r31 + 0xcu;
                if ((s32)r27 >= 3) {
                    fl_ = 3u;
                    break;
                }
            }
            if (fl_ == 4u) {
                fl_ = 0u;
            } else if (fl_ == 3u) {
                fl_ = 0u;
                break;
            }
        } else {
            r12 = rd32(r26);
            r3 = r26;
            r12 = rd32(r12 + 0x14u);
            lr = 0x8030b0f0u;
            if (r12 != 0x8030b0acu) {
                a.r[0] = r26;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                while (r26 == rd32(r25 + 0x24u)) {
                    a.r[0] = r25 + 0x34u;
                    r3 = tc_call(0x8022ffe4u, &a);
                    f1 = tc_lastf();
                }
                break;
            }
        }
    }
    a.r[0] = r30;
    r3 = tc_call(0x8022c2d8u, &a);
    f1 = tc_lastf();
    return;
}
