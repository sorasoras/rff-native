#include "tc_rt.h"

void fn_800d5224(f64 param_1, f64 param_2, s32 param_3)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_3;
    r3 = tc_call(0x800d51c0u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_3;
        r3 = tc_call(0x800d5c1cu, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_3 + 0x4bcu;
            r3 = tc_call(0x800d3184u, &a);
            if (r3 != 0u) {
                a.r[0] = 0x80338926u;
                r3 = tc_call(0x8011df4cu, &a);
                r31 = r3;
                if (r3 != 0u) {
                    a.f[0] = (f64)rdf32((u32)param_3 + 0x4ecu);
                    a.r[0] = r3;
                    (void)tc_call(0x8011c914u, &a);
                    a.f[0] = param_1;
                    a.f[1] = param_2;
                    a.r[0] = rd32(r31 + 0x30u);
                    f1 = tc_callf(0x8011d9b8u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = r31;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x8011c924u, &a);
                    a.r[0] = r31;
                    (void)tc_call(0x8011c968u, &a);
                }
            }
        }
    }
    return;
}
