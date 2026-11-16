#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801b1194(f64 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0;
    if (rd32(0x805706e8u) != 0x36u) {
        return 0u;
    }
    f0 = (f64)(f32)px_fdiv((f64)rdf32(0x80575b84u), (f64)(f32)((f64)rdf32(0x80575b88u) * param_1));
    r5 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
    while (r5 != 0u) {
        r4 = r5;
        r5 = rd32(r5);
        r6 = rd32(r4 + 8u);
        if (rd32(r6 + 0x84u) == 0xd6d9u) {
            if ((u32)param_2 == 0u) {
                f0 = ppc_fabs(f0);
                f0 = (f64)(f32)f0;
                wr32(r6 + 0x80u, rd32(r6 + 0x80u) | 0x4000000u);
                wrf32d(r6 + 0x9cu, f0);
            } else {
                f0 = ppc_fabs(f0);
                f0 = (f64)(f32)f0;
                wr32(r6 + 0x80u, rd32(r6 + 0x80u) | 0x4000000u);
                f0 = -f0;
                wrf32d(r6 + 0x9cu, f0);
            }
            return 1u;
        }
    }
    return 0u;
}
