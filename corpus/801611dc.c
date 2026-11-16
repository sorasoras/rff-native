#include "tc_rt.h"

void fn_801611dc(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    f6 = (f64)rdf32(0x80574a78u);
    f3 = (f64)rdf32(0x80574a7cu);
    f5 = (f64)rdf32(0x80574a9cu);
    f4 = (f64)rdf32(0x80574aa0u);
    f2 = (f64)rdf32(0x80574ac0u);
    f0 = (f64)rdf32(0x80574ac4u);
    wrf32d((u32)param_1 + 0x178u, f6);
    f1 = (f64)rdf32(0x80574ac8u);
    wrf32d((u32)param_1 + 0x17cu, f5);
    wrf32d((u32)param_1 + 0x180u, f4);
    wrf32d((u32)param_1 + 0x184u, f6);
    wrf32d((u32)param_1 + 0x188u, f3);
    wrf32d((u32)param_1 + 0x18cu, f6);
    wrf32d((u32)param_1 + 0x158u, f2);
    wrf32d((u32)param_1 + 0x154u, f3);
    wrf32d((u32)param_1 + 0x15cu, f0);
    wrf32d((u32)param_1 + 0x160u, (f64)(f32)(f1 * (f64)rdf32(0x80570870u)));
    return;
}
