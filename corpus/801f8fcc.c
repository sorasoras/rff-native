#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801f8fcc(f64 param_1, s32 param_2)
{
    if ((f64)rdf32(0x80576650u) == param_1) {
        wrf32d((u32)param_2 + 0x14u, (f64)rdf32(0x80576658u));
        return;
    }
    wrf32d((u32)param_2 + 0x14u, (f64)(f32)px_fdiv((f64)rdf32(0x80576658u), (f64)(f32)((f64)rdf32(0x8057665cu) * param_1)));
    return;
}
