#include "tc_rt.h"

void fn_8015d4d8(s32 param_1, u32 param_2)
{
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32((u32)param_1 + 0x494u);
    f2 = (f64)rdf32((u32)param_1 + 0x498u);
    if ((f64)rdf32(0x805749e8u) == f1) {
        f1 = (f64)rdf32(0x805749a8u);
    }
    if ((f64)rdf32(0x805749e8u) == f2) {
        f2 = (f64)rdf32(0x805749a8u);
    }
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = (f64)rdf32((u32)param_1 + 0x490u);
    a.f[3] = (f64)rdf32((u32)param_1 + 0x47cu);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = param_2;
    a.r[2] = rd32((u32)param_1 + 0x478u);
    a.r[3] = rd32((u32)param_1 + 0x4a4u);
    a.r[4] = 0u;
    (void)tc_call(0x8015be94u, &a);
    if (rd32((u32)param_1 + 0x474u) != 0u) {
        a.r[0] = (u32)param_1 + 0x10u;
        (void)tc_call(0x8015c5f0u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8015d1ecu, &a);
    (void)tc_call(0x800a7894u, &a);
    return;
}
