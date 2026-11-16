#include "tc_rt.h"

void fn_80285d80(void)
{
    u32 r0 = 0, r3 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)rd8(0x8050f10eu) == 0u) {
        r27 = 0u;
        r29 = 0u;
        do {
            r3 = tc_call(0x8022c2b0u, &a);
            if ((s32)r27 >= 0 && (s32)r27 < 10) {
                r31 = r29 - 0x7faf0e1cu;
            } else {
                r31 = ((r27 - 0xau) * 0x60u) - 0x7faf0a5cu;
            }
            a.r[0] = r3;
            f1 = tc_callf(0x8022c2d8u, &a);
            if ((u32)rd8(r31 + 0x59u) != 0u) {
                r0 = (u32)rd8(r31 + 0x5cu);
                if (r0 == 1u) {
                    wr8(0x8050f10eu, 3u);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r31 + 0x40u;
                    a.r[1] = 0x80288fb8u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x80296b4cu, &a);
                    wr8(r31 + 0x5cu, 0u);
                    return;
                }
                if (r0 != 3u) {
                    a.r[0] = r31 + 0x40u;
                    r3 = tc_call(0x80287bc4u, &a);
                    r30 = r3;
                    if (r3 != 0u) {
                        r3 = tc_call(0x8022c2b0u, &a);
                        r31 = r3;
                        a.r[0] = r30;
                        a.r[1] = 0u;
                        a.r[2] = 0x60u;
                        (void)tc_call(0x8000443cu, &a);
                        a.r[0] = r31;
                        (void)tc_call(0x8022c2d8u, &a);
                    }
                }
            }
            r27 = r27 + 1u;
            r29 = r29 + 0x60u;
        } while ((s32)r27 < 16);
    }
    return;
}
