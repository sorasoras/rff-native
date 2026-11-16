#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

u32 fn_80070d58(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x70u);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        a.r[1] = param_3;
        r3 = tc_call(0x80031cf8u, &a);
        if (r3 != 0u) {
            r3 = rd32(r3 + 0x50u);
            f7 = (f64)px_w2f(ppc_single_bits((f64)rdf32(r3 + 0x1cu)));
            f0 = (f64)px_w2f(ppc_single_bits((f64)rdf32(r3 + 0x2cu)));
            wrf32d(param_2, (f64)px_w2f(ppc_single_bits((f64)rdf32(r3 + 0xcu))));
            wrf32d(param_2 + 4u, f7);
            wrf32d(param_2 + 8u, f0);
            a.r[0] = param_2;
            a.r[1] = param_4;
            a.r[2] = param_2;
            (void)tc_call(0x80234380u, &a);
            r3 = 1u;
        } else {
            r3 = 0u;
        }
    }
    return r3;
}
