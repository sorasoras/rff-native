#include "tc_rt.h"

void fn_8011ca88(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x80571d40u, param_1 + 4u);
    r3 = rd32(param_1 + 0xc8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(r3) + 8u), &a);
    }
    wr32(param_1 + 0xc8u, 0u);
    wr32(param_1 + 0x124u, 0u);
    wr32(param_1 + 0xccu, 0u);
    a.r[0] = param_1 + 0x974u;
    a.r[1] = 0u;
    a.r[2] = 0x30u;
    (void)tc_call(0x8000443cu, &a);
    f2 = (f64)rdf32(0x80574248u);
    f1 = (f64)rdf32(0x80574250u);
    f0 = (f64)rdf32(0x80574254u);
    wrf32d(param_1 + 0x130u, (f64)rdf32(0x8057424cu));
    wrf32d(param_1 + 0x138u, f2);
    wrf32d(param_1 + 0x128u, f1);
    wrf32d(param_1 + 0x12cu, f0);
    a.r[0] = param_1;
    r3 = tc_call(0x8011dba8u, &a);
    if (rd32(r3 + 0x20u) != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8011dba8u, &a);
        a.r[0] = r3;
        (void)tc_call(0x802ef29cu, &a);
    }
    r31 = param_1 + 0x13cu;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8011c82cu, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x38u;
    } while ((s32)r30 < 32);
    if (rd32(param_1 + 0x14u) != 0u) {
        a.r[0] = rd32(param_1);
        (void)tc_call(0x8026cddcu, &a);
        r6 = rd32(param_1 + 0x83cu);
        r4 = rd32(param_1 + 0x14u);
        if (rd32(r6 + 0x10u) != 0u) {
            r3 = rd32(r6);
            r5 = rd32(r6 + 0xcu);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            if (rd32(r6 + 0x20u) != 0u) {
                a.r[0] = r6 + 0x24u;
                a.r[1] = r4;
                (void)tc_call(0x80094ec0u, &a);
            } else {
                r3 = rd32(r6);
                r5 = rd32(r6 + 0xcu);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            }
        }
        wr32(param_1, 0u);
        wr32(param_1 + 0x14u, 0u);
    }
    wr32(param_1 + 0x83cu, 0u);
    wr32(0x80571d40u, 0u);
    return;
}
