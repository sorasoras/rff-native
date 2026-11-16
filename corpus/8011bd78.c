#include "tc_rt.h"

void fn_8011bd78(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x50u) == 0u) {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3 + 0x4cu);
        if (rd32(r3 + 0x14u) == 0u) {
            r3 = tc_call(0x8011ba70u, &a);
            f1 = tc_lastf();
            r30 = rd32((u32)param_1 + 0x4cu);
            r29 = r3;
            if (r3 != r30) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0u;
                a.r[1] = 0xau;
                a.r[2] = 0x8011bc48u;
                a.r[3] = 2u;
                a.r[4] = r30;
                a.r[5] = r3;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x800a6fccu, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 2u;
                a.r[1] = 0xau;
                a.r[2] = 0x8011bc48u;
                a.r[3] = 2u;
                a.r[4] = r30;
                a.r[5] = r29;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x800a6fccu, &a);
                r31 = (u32)param_1 + 0xcu;
                r30 = 0u;
                do {
                    a.r[0] = r31;
                    r3 = tc_call(0x8011bb54u, &a);
                    f1 = tc_lastf();
                    if (r3 != 0u && (s32)rd32(r31 + 4u) <= (s32)r29) {
                        a.r[0] = 0u;
                        a.r[1] = 0x44u;
                        a.r[2] = rd32(r31);
                        (void)tc_call(0x800a6dccu, &a);
                        a.r[0] = 2u;
                        a.r[1] = 0x44u;
                        a.r[2] = rd32(r31);
                        (void)tc_call(0x800a6dccu, &a);
                        a.r[0] = r31;
                        f1 = tc_callf(0x8011bb44u, &a);
                    }
                    r30 = r30 + 1u;
                    r31 = r31 + 8u;
                } while ((s32)r30 < 8);
                if (rd32((u32)param_1 + 0x5cu) != 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 2u;
                    a.r[1] = 0x5bu;
                    a.r[2] = 0x8011bcb0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x800a70b0u, &a);
                    f1 = tc_lastf();
                    if (r3 != 0u) {
                        wr32((u32)param_1 + 0x5cu, 0u);
                    } else {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 0u;
                        a.r[1] = 0x5bu;
                        a.r[2] = 0x8011bcb0u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        r3 = tc_call(0x800a70b0u, &a);
                        if (r3 != 0u) {
                            wr32((u32)param_1 + 0x5cu, 0u);
                        }
                    }
                }
                a.r[0] = (u32)param_1;
                (void)tc_call(0x8011bbf0u, &a);
            }
        }
    }
    return;
}
