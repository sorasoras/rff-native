#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801a3ad0(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xdc0u) != 0u) {
        r3 = 0u;
    } else {
        f1 = (f64)rdf32((u32)param_1 + 0xd84u);
        f0 = (f64)rdf32((u32)param_1 + 0x2e0u);
        r0 = ((((f0 < f1) << 0x1fu) | ((f0 > f1) << 0x1eu) | ((f0 == f1) << 0x1du) | (((f0 != f0) || (f1 != f1)) << 0x1cu)) >> 0x1fu) & 1u;
        if (r0 != 0u) {
            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32((u32)param_1 + 0xd7cu)), (f64)rdf32(0x805758bcu));
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800a993cu, &a);
            r0 = r3;
        }
        r3 = r0;
    }
    return r3;
}
