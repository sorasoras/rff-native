#include "tc_rt.h"

void fn_8015b224(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r4 = rd32(param_1);
    if (r4 != 0u) {
        r31 = rd32(r4 + 0x30u);
        a.f[0] = (f64)rdf32(param_1 + 8u);
        a.f[1] = (f64)rdf32(param_1 + 0xcu);
        a.r[0] = r31;
        (void)tc_call(0x8011d9b8u, &a);
        a.f[0] = (f64)rdf32(param_1 + 0x10u);
        a.r[0] = r31;
        (void)tc_call(0x8011d9b0u, &a);
        a.f[0] = (f64)rdf32(param_1 + 0x14u);
        a.f[1] = (f64)rdf32(param_1 + 0x18u);
        a.r[0] = r31;
        (void)tc_call(0x8011d9a4u, &a);
        a.f[0] = (f64)rdf32(param_1 + 4u);
        a.r[0] = rd32(param_1);
        (void)tc_call(0x8011c914u, &a);
        a.r[0] = rd32(param_1);
        r3 = tc_call(0x8015afc4u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            a.r[0] = param_1;
            a.r[1] = rd32(param_1 + 0x1cu);
            f1 = tc_callf(0x8015b054u, &a);
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32(param_1);
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8011c924u, &a);
        a.r[0] = rd32(param_1);
        (void)tc_call(0x8011c968u, &a);
    }
    return;
}
