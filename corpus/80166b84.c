#include "tc_rt.h"

void fn_80166b84(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    if (rd32((u32)param_2 + 0x100u) != 8u) {
        a.f[0] = (f64)rdf32(0x80574bccu);
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x800b3304u, &a);
        if (r3 == 0u) {
            return;
        }
        a.f[0] = (f64)rdf32(0x80574bc8u);
        a.r[0] = (u32)param_2;
        a.r[1] = 8u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b5248u, &a);
    } else {
        r31 = 0u;
        if (rd32((u32)param_2 + 0x1468u) == 8u) {
            a.r[0] = (u32)param_2;
            r3 = tc_call(0x800b2fe8u, &a);
            if (r3 != 0u) {
                r31 = 1u;
            }
        }
        if (r31 != 0u) {
            r3 = rd32((u32)param_2 + 0xe88u);
            wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        }
    }
    return;
}
