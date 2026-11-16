#include "tc_rt.h"

s32 fn_801e8e84(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80576348u);
    r31 = (u32)param_1 + 0x94u;
    wrf32d((u32)param_1 + 0x80u, f0);
    wrf32d((u32)param_1 + 0x7cu, f0);
    wrf32d((u32)param_1 + 0x78u, f0);
    a.r[0] = r31;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80576348u);
    r30 = (u32)param_1 + 0x128u;
    wrf32d(r31 + 0x80u, f0);
    wrf32d(r31 + 0x7cu, f0);
    wrf32d(r31 + 0x78u, f0);
    a.r[0] = r30;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80576348u);
    wrf32d(r30 + 0x80u, f0);
    wrf32d(r30 + 0x7cu, f0);
    wrf32d(r30 + 0x78u, f0);
    a.r[0] = (u32)param_1 + 0x1bcu;
    a.r[1] = 0x801e8e44u;
    a.r[2] = 0x801e8bd8u;
    a.r[3] = 0x94u;
    a.r[4] = 3u;
    (void)tc_call(0x80255624u, &a);
    return param_1;
}
