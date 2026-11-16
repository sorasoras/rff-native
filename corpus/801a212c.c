#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801a212c(s32 param_1)
{
    u32 c0lt = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805758b8u) * (f64)rdf32((u32)param_1 + 0xd78u)), (f64)rdf32(0x805758bcu));
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800a993cu, &a);
    if (r3 != 0u) {
        f31 = (f64)rdf32((u32)param_1 + 0xd98u);
        f1 = tc_callf(0x80040a00u, &a);
        f0 = (f64)(f32)((f64)rdf32(0x8057588cu) * f1);
        c0lt = f0 < f31;
        if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u && rd32((u32)param_1 + 0xdc0u) == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0xfu;
            (void)tc_call(0x801a1e2cu, &a);
            return;
        }
        if (rd32((u32)param_1 + 0xdc0u) == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0xfu;
            (void)tc_call(0x801a1e2cu, &a);
            wr32((u32)param_1 + 0x260u, 3u);
            return;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 3u;
        (void)tc_call(0x801a1e2cu, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 6u;
        (void)tc_call(0x801a1e2cu, &a);
    }
    return;
}
