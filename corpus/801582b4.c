#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_801582b4(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f2 = (f64)rdf32(param_2 + 8u);
    f0 = (f64)rdf32(param_2);
    wrf32d(0x817fdfecu, (f64)rdf32(param_2 + 4u));
    a.r[0] = param_1;
    r3 = tc_call(0x80321010u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x80321010u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r3 = rd32(r3 + 0xcu);
        }
        r0 = 0u;
        if (r3 == 1u || r3 == 2u) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x80321010u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x803111f8u, &a);
            f0 = (f64)px_w2f(ppc_single_bits(f0));
            f1 = (f64)rdf32(0x817fdfecu);
            wrf32d(r3 + 0xa8u, f0);
            wrf32d(r3 + 0xacu, f1);
            wrf32d(r3 + 0xb0u, (f64)px_w2f(ppc_single_bits(f2)));
            a.r[0] = r3;
            (void)tc_call(0x80313cecu, &a);
        }
    }
    return;
}
