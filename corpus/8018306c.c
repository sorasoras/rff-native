#include "tc_rt.h"

void fn_8018306c(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    f6 = (f64)rdf32(0x805750d8u);
    f5 = (f64)rdf32(0x805750d0u);
    f4 = (f64)rdf32(0x80575158u);
    f3 = (f64)rdf32(0x80575128u);
    f2 = (f64)rdf32(0x80575140u);
    f1 = (f64)rdf32(0x80575144u);
    f0 = (f64)rdf32(0x805750b8u);
    wrf32d((u32)param_1 + 0x108u, (f64)rdf32(0x80575134u));
    wrf32d((u32)param_1 + 0x10cu, f6);
    wrf32d((u32)param_1 + 0x114u, f5);
    wrf32d((u32)param_1 + 0x124u, f4);
    wrf32d((u32)param_1 + 0x12cu, f3);
    wrf32d((u32)param_1 + 0x148u, f2);
    wrf32d((u32)param_1 + 0x14cu, f1);
    wrf32d((u32)param_1 + 0x150u, f0);
    wr32((u32)param_1 + 0xf8u, 1u);
    return;
}
