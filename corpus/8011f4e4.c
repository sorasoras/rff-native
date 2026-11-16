#include "tc_rt.h"

void fn_8011f4e4(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = 0xdu;
    if (param_2 >= 0) {
        r0 = rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fcc69f8u);
    }
    if ((s32)r0 < 0) {
        r3 = rd32((u32)param_1 + 0x4cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            (void)tc_call(0x802f5fd8u, &a);
        }
        wr32((u32)param_1 + 0xcu, 0xffffffffu);
    } else {
        a.f[0] = (f64)rdf32(0x80574298u);
        a.r[0] = (u32)param_1;
        a.r[1] = r0;
        (void)tc_call(0x8011f1e0u, &a);
    }
    return;
}
