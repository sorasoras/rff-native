#include "tc_rt.h"

u32 fn_80045e74(void)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r28 = 0, r29 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8(0x80571074u) != 0u) {
        r3 = tc_call(0x80047138u, &a);
        f1 = tc_lastf();
        if (r3 <= 6u) {
            r4 = rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fcb0780u);
            sw_ = r4;
            switch (sw_) {
            case 0x80045ec0u:
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                r3 = tc_call(sw_, &a);
                r0 = 0u;
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                r11 = 0u;
                r12 = 0u;
                f0 = 0.0;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                f9 = 0.0;
                f10 = 0.0;
                f11 = 0.0;
                f12 = 0.0;
                f13 = 0.0;
                ctr = 0u;
                return r3;
            }
        }
    }
    if ((u32)rd8(0x80571074u) != 0u) {
        r3 = 1u;
    } else {
        a.r[0] = 0x803c1d7cu;
        a.r[1] = 0x803c1f40u;
        a.r[2] = 0x30u;
        (void)tc_call(0x80004338u, &a);
        a.r[0] = 0x803c1d7cu;
        a.r[1] = 0x80335ce0u;
        r3 = tc_call(0x8025beb0u, &a);
        if (r3 == 0u) {
            if ((rd32(0x803c1d80u) - 0x10000u) == 0x1000u) {
                r29 = rd32(0x803c1d9cu) - 0x7fc3e0c0u;
                a.r[0] = 0x803c1dacu;
                a.r[1] = r29;
                a.r[2] = 0x14u;
                (void)tc_call(0x80004338u, &a);
                r28 = 0u;
                wr8(0x803c1de7u, 0u);
                r29 = r29 + 0x14u;
                while (r28 < rd32(0x803c1dacu)) {
                    r0 = (u32)rd8(r28 - 0x7fc3e250u);
                    c0lt = (s32)r0 < 1;
                    if (r0 == 1u) {
                        a.r[0] = 0x803c1dccu;
                        a.r[1] = r29;
                        a.r[2] = 0x10u;
                        (void)tc_call(0x80004338u, &a);
                        wr8(0x803c1de7u, 1u);
                        r29 = r29 + 0x10u;
                    } else {
                        if (!c0lt) {
                            r3 = 0u;
                            return r3;
                        }
                        if ((s32)r0 < 0) {
                            r3 = 0u;
                            return r3;
                        }
                        a.r[0] = 0x803c1dc0u;
                        a.r[1] = r29;
                        a.r[2] = 0xcu;
                        (void)tc_call(0x80004338u, &a);
                        r29 = r29 + 0xcu;
                    }
                    r28 = r28 + 1u;
                }
                wr8(0x803c1de5u, 0u);
                wr8(0x803c1de4u, 0u);
                wr8(0x803c1de6u, 0u);
                wr32(0x803c1df0u, 0u);
                wr32(0x803c1df4u, 0u);
                wr32(0x803c1de0u, 1u);
                a.r[0] = 0x803c1d40u;
                (void)tc_call(0x80234b88u, &a);
                r3 = 0u;
            } else {
                a.r[0] = 0x803c1d40u;
                (void)tc_call(0x80234b88u, &a);
                r3 = 0u;
            }
        } else {
            a.r[0] = 0x803c1d40u;
            (void)tc_call(0x80234b88u, &a);
            r3 = 0u;
        }
    }
    return r3;
}
