#include "tc_rt.h"

void fn_802f0f88(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, fl_ = 0, lr = 0, r1 = 0, r3 = 0, r4 = 0, r11 = 0, r12 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
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
        wr32(r11 - 0xcu, r29);
        wr32(r11 - 8u, r30);
        wr32(r11 - 4u, r31);
        r25 = r3;
        r26 = r4;
        if (rd32(r3) == r4) {
            return;
        }
        r3 = tc_call(0x8022c2b0u, &a);
        f1 = tc_lastf();
        c0lt = (s32)r4 < 2;
        wr32(r25, r4);
        r31 = r3;
        if (r4 == 2u) {
            a.r[0] = 2u;
            r3 = tc_call(0x802449b4u, &a);
            f1 = tc_lastf();
        } else if (!c0lt) {
            if ((s32)r4 < 4) {
                a.r[0] = 0u;
                r3 = tc_call(0x802449b4u, &a);
                f1 = tc_lastf();
            }
        } else {
            c0lt = (s32)r4 < 0;
            if (r4 == 0u) {
                a.r[0] = 0u;
                r3 = tc_call(0x802449b4u, &a);
                f1 = tc_lastf();
            } else if (!c0lt) {
                a.r[0] = 1u;
                r3 = tc_call(0x802449b4u, &a);
                f1 = tc_lastf();
            }
        }
        r3 = tc_call(0x8030de70u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = 0x10u;
        f1 = tc_callf(0x8030e48cu, &a);
        r3 = tc_lastr();
        r4 = tc_lastr4();
        r28 = r25 + 0xb4u;
        r27 = 0u;
        for (;;) {
            r30 = rd32(r28 + 4u);
            r29 = r28 + 4u;
            for (;;) {
                if (r30 == r29) {
                    fl_ = 2u;
                    break;
                }
                r12 = rd32(r30 - 4u);
                r3 = r30 - 4u;
                r12 = rd32(r12 + 0x18u);
                lr = 0x802f1044u;
                if (r12 == 0x802f0f88u) {
                    fl_ = 1u;
                    break;
                }
                a.r[0] = r3;
                a.r[1] = r4;
                a.f[0] = f1;
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
                r4 = tc_lastr4();
                r30 = rd32(r30);
            }
            if (fl_ == 2u) {
                fl_ = 0u;
            } else if (fl_ == 1u) {
                fl_ = 0u;
                break;
            }
            r27 = r27 + 1u;
            r28 = r28 + 0xcu;
            if ((s32)r27 >= 3) {
                if (r26 == 2u) {
                    wr32(r25 + 0xfcu, 0u);
                }
                a.r[0] = r31;
                r3 = tc_call(0x8022c2d8u, &a);
                f1 = tc_lastf();
                return;
            }
        }
    }
}
