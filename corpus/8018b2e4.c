#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8018b2e4(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    f1 = (f64)rdf32(rd32((u32)param_1 + 0x70u) + 0x54u);
    if (f1 < (f64)rdf32(0x805752a0u)) {
        wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x80575288u));
        return;
    }
    f0 = (f64)rdf32(0x805752a4u);
    if ((f1 < f0) || (f1 == f0)) {
        f0 = (f64)(f32)(f0 - f1);
        f1 = (f64)rdf32(0x80575290u);
        f0 = (f64)(f32)(f1 - f0);
        f0 = (f64)(f32)px_fdiv(f0, f1);
        wrf32d((u32)param_1 + 0xacu, f0);
        return;
    }
    f0 = (f64)rdf32(0x805752a8u);
    if (f1 < f0) {
        wrf32d((u32)param_1 + 0xacu, (f64)rdf32(0x8057528cu));
        return;
    }
    wrf32d((u32)param_1 + 0xacu, (f64)(f32)((f64)rdf32(0x8057528cu) + (f64)(f32)px_fdiv((f64)(f32)(f0 - f1), (f64)rdf32(0x80575290u))));
    return;
}
