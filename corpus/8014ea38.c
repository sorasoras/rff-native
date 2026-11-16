#include "tc_rt.h"

void fn_8014ea38(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    f5 = (f64)rdf32(0x80574760u);
    f6 = (f64)rdf32(0x8057478cu);
    f4 = (f64)rdf32(0x80574764u);
    f3 = (f64)rdf32(0x80574778u);
    f2 = (f64)rdf32(0x80574790u);
    f1 = (f64)rdf32(0x80574794u);
    f0 = (f64)rdf32(0x80574798u);
    wrf32d((u32)param_1 + 0x138u, (f64)rdf32(0x80574788u));
    wrf32d((u32)param_1 + 0x140u, f6);
    wrf32d((u32)param_1 + 0x144u, f5);
    wrf32d((u32)param_1 + 0x148u, f4);
    wrf32d((u32)param_1 + 0x14cu, f5);
    wrf32d((u32)param_1 + 0x210u, f3);
    wrf32d((u32)param_1 + 0x214u, f2);
    wrf32d((u32)param_1 + 0x21cu, f1);
    wrf32d((u32)param_1 + 0x218u, f0);
    return;
}
