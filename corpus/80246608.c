#include "tc_rt.h"

void fn_80246608(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    f7 = (f64)rdf32((u32)param_1 + 0x158u);
    f2 = (f64)rdf32(0x80576bb8u);
    f6 = (f64)rdf32((u32)param_1 + 0x150u);
    f5 = (f64)rdf32((u32)param_1 + 0x148u);
    f4 = (f64)rdf32((u32)param_1 + 0x154u);
    f3 = (f64)rdf32((u32)param_1 + 0x15cu);
    f1 = (f64)rdf32(0x80576bbcu);
    f0 = (f64)rdf32((u32)param_1 + 0x14cu);
    wr32((u32)param_1 + 0x110u, 5u);
    wrf32d((u32)param_1 + 0x114u, f7);
    wrf32d((u32)param_1 + 0x118u, f7);
    wr32((u32)param_1 + 0x11cu, 0u);
    wrf32d((u32)param_1 + 0x120u, f6);
    wrf32d((u32)param_1 + 0x124u, f5);
    wrf32d((u32)param_1 + 0x128u, f4);
    wrf32d((u32)param_1 + 0x12cu, f3);
    wrf32d((u32)param_1 + 0x130u, f2);
    wrf32d((u32)param_1 + 0x134u, f1);
    wr32((u32)param_1 + 0x138u, 0u);
    wr32((u32)param_1 + 0x13cu, 0u);
    wrf32d((u32)param_1 + 0x140u, f0);
    wrf32d((u32)param_1 + 0x144u, f2);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80246694u, &a);
    return;
}
