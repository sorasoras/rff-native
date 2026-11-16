#include "tc_rt.h"

u32 fn_801dfd74(s32 param_1, u32 param_2, u32 param_r5)
{
    u32 c0lt = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = param_r5;
    r3 = tc_call(0x8007fd08u, &a);
    if (r3 == 0u) {
        return 0u;
    }
    f1 = tc_callf(0x80040a00u, &a);
    f0 = (f64)rdf32(0x80576228u);
    f1 = (f64)(f32)((f64)rdf32(0x80576298u) * f1);
    c0lt = f1 < f0;
    if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
        a.f[0] = (f64)rdf32(0x80576204u);
        a.r[0] = 0x10u;
        a.r[1] = param_2;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804b15c0u;
        (void)tc_call(0x800d782cu, &a);
    }
    if (rd32(rd32((u32)param_1 + 0xd0cu) + 0x20u) == 0u) {
        f1 = tc_callf(0x80040a00u, &a);
        f0 = (f64)rdf32(0x80576228u);
        f1 = (f64)(f32)((f64)rdf32(0x80576298u) * f1);
        c0lt = f1 < f0;
        if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 7u;
            (void)tc_call(0x801e0450u, &a);
        } else {
            f1 = (f64)rdf32((u32)param_1 + 0xd64u);
            f0 = (f64)rdf32(0x805761f0u);
            if ((f1 < f0) || (f1 == f0)) {
                a.r[0] = 6u;
                f1 = tc_callf(0x801dc57cu, &a);
                wrf32d((u32)param_1 + 0xd64u, f1);
                a.r[0] = (u32)param_1;
                a.r[1] = 9u;
                (void)tc_call(0x801e0450u, &a);
            }
        }
    }
    return 0u;
}
