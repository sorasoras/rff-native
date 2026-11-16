#include "tc_rt.h"

void fn_8011ddc4(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = (u32)param_2;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8011ddbcu, &a);
    if (r3 == 0u) {
        wr32((u32)param_1 + 0xccu, 0u);
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8011ddbcu, &a);
        f1 = tc_lastf();
        r31 = rd32(r3 + 0x14u);
        r0 = r3 + 0x14u;
        while (r31 != r0) {
            if ((s32)r30 <= 0) {
                if (r31 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x803604e4u;
                    a.r[1] = 0x23du;
                    a.r[2] = 0x803604c0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x802e41c0u, &a);
                }
                r31 = r31 - 4u;
                if (r31 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80360514u;
                    a.r[1] = 0x193u;
                    a.r[2] = 0x803604f0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802e41c0u, &a);
                }
                wr32((u32)param_1 + 0xccu, r31);
                return;
            }
            r31 = rd32(r31);
            r30 = r30 - 1u;
        }
    }
    return;
}
