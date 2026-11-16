#include "tc_rt.h"

void fn_801b06a4(void)
{
    f64 f1 = 0.0;
    f1 = (f64)(f32)((f64)rdf32(0x80570934u) - (f64)rdf32(0x80570930u));
    wrf32d(0x804dbe74u, (f64)rdf32(0x8057093cu));
    wrf32d(0x80571374u, f1);
    return;
}
