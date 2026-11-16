#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_801cf94c(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    f64 f0 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xe30u);
    if (r0 != 0u) {
        f4 = (f64)(f32)((f64)rdf32(0x803d27a0u) + (f64)rdf32((u32)param_1 + 0xe34u));
        r4 = 0u;
        if (r0 != 1u) {
            if (r0 == 2u) {
                f0 = (f64)rdf32((u32)param_1 + 0xe20u);
                if ((f4 > f0) || (f4 == f0)) {
                    f4 = f0;
                    r4 = 1u;
                    wr32(0x8057118cu, rd32(0x8057118cu) | 0x2000u);
                }
            }
        } else {
            f0 = (f64)rdf32((u32)param_1 + 0xd68u);
            if (f4 < f0) {
                f4 = f0;
                r4 = 1u;
            }
        }
        if (r4 != 0u) {
            wr32((u32)param_1 + 0xe30u, 0u);
        }
        f0 = (f64)px_w2f(ppc_single_bits((f64)rdf32((u32)param_1 + 0xe2cu)));
        wrf32d(0x803d27a0u, (f64)px_w2f(ppc_single_bits(f4)));
        wrf32d(0x803d27a4u, (f64)px_w2f(ppc_single_bits(f4)));
        wrf32d(0x803d27a8u, (f64)px_w2f(ppc_single_bits(f4)));
        wrf32d(0x803d27acu, f0);
        a.r[0] = 0x803d27a0u;
        (void)tc_call(0x8004a4fcu, &a);
    }
    return;
}
