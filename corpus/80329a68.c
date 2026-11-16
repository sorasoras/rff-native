#include "tc_rt.h"

void fn_80329a68(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, t0 = 0, t3 = 0, t21 = 0;
    f64 f0 = 0.0, f1 = 0.0, t7 = 0.0, t16 = 0.0, t22 = 0.0, t23 = 0.0, t28 = 0.0, t34 = 0.0, t36 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80577c1cu);
    t0 = (u32)param_3 + 0xacu;
    t3 = (u32)param_2 + 0xa4u;
    t7 = (f64)(f32)((f64)rdf32(t0 + 4u) - (f64)rdf32(t3 + 4u));
    wrf32d(param_1, (f64)(f32)((f64)rdf32(t0) - (f64)rdf32(t3)));
    wrf32d(param_1 + 4u, t7);
    t16 = (f64)rdf32(param_1);
    wrf32d(param_1 + 8u, (f64)(f32)((f64)rdf32((u32)param_3 + 0xb4u) - (f64)rdf32((u32)param_2 + 0xacu)));
    t21 = param_1 + 4u;
    t22 = (f64)rdf32(t21);
    t23 = (f64)rdf32(t21 + 4u);
    t28 = (f64)(f32)(ppc_fmadds(t16, t16, (f64)(f32)(t22 * t22)) + (f64)(f32)(t23 * t23));
    if (t28 < f0) {
        r0 = 0u;
    } else {
        a.f[0] = t28;
        f1 = tc_callf(0x802eff54u, &a);
        r0 = 1u;
        t34 = (f64)(f32)((f64)rdf32(param_1 + 4u) * f1);
        t36 = (f64)rdf32(param_1 + 8u);
        wrf32d(param_1, (f64)(f32)((f64)rdf32(param_1) * f1));
        wrf32d(param_1 + 4u, t34);
        wrf32d(param_1 + 8u, (f64)(f32)(t36 * f1));
    }
    if (r0 == 0u) {
        wrf32d(param_1, (f64)rdf32((u32)param_2 + 0x98u));
        wrf32d(param_1 + 4u, (f64)rdf32((u32)param_2 + 0x9cu));
        wrf32d(param_1 + 8u, (f64)rdf32((u32)param_2 + 0xa0u));
    }
    return;
}
