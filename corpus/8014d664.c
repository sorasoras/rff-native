#include "tc_rt.h"

void fn_8014d664(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80574750u);
    wrf32d((u32)param_1 + 0x70u, f0);
    wrf32d((u32)param_1 + 0x74u, f0);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8014d3e4u, &a);
    f1 = tc_callf(0x80040a00u, &a);
    f0 = (f64)rdf32(0x80574740u);
    f1 = (f64)(f32)((f64)rdf32(0x80574754u) * f1);
    f0 = ppc_fmsubs(f0, f1, f0);
    wrf32d((u32)param_1 + 0x70u, f0);
    f1 = tc_callf(0x80040a00u, &a);
    f0 = (f64)rdf32(0x80574740u);
    f1 = (f64)(f32)((f64)rdf32(0x80574754u) * f1);
    f0 = ppc_fmsubs(f0, f1, f0);
    wrf32d((u32)param_1 + 0x74u, f0);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8014d528u, &a);
    return;
}
