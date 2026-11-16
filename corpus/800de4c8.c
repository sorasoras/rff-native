#include "tc_rt.h"

void fn_800de4c8(void)
{
    u32 fl_ = 0, r3 = tc_argr(0u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u);
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    for (;;) {
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        for (;;) {
            if (r5 <= 0xfu) {
                for (;;) {
                    r8 = rd32(r7 - 0x7fca9280u);
                    if (r8 == 0x800de4c8u) {
                        fl_ = 1u;
                        break;
                    }
                    if (r8 == 0x817ff000u) {
                        return;
                    }
                    if (r8 == 0x800de6b0u) {
                        return;
                    }
                    if (r8 == 0x800de69cu) {
                        fl_ = 2u;
                        break;
                    }
                    if (r8 != 0x800de4ecu) {
                        fl_ = 3u;
                        break;
                    }
                }
                if (fl_ == 3u) {
                    fl_ = 0u;
                    if (r8 == 0x800de4e4u) continue;
                    a.r[0] = tc_argr(0u);
                    a.r[1] = 0x80350000u;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = tc_argr(6u);
                    a.r[7] = 0x80492800u;
                    a.f[0] = tc_argf(0u);
                    a.f[1] = tc_argf(1u);
                    a.f[2] = tc_argf(2u);
                    a.f[3] = tc_argf(3u);
                    a.f[4] = tc_argf(4u);
                    a.f[5] = tc_argf(5u);
                    a.f[6] = tc_argf(6u);
                    a.f[7] = tc_argf(7u);
                    r3 = tc_call(r8, &a);
                    f1 = tc_lastf();
                    return;
                }
                if (fl_ == 2u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                    break;
                }
            }
            r5 = r5 + 1u;
            r7 = r7 + 4u;
            r6 = r6 + 8u;
            if ((s32)r5 >= 20) {
                return;
            }
        }
    }
}
