#include "tc_rt.h"

s32 fn_8016e080(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80574cd8u);
    r31 = (u32)param_1 + 0x90u;
    wrf32d((u32)param_1 + 0x80u, f0);
    wrf32d((u32)param_1 + 0x7cu, f0);
    wrf32d((u32)param_1 + 0x78u, f0);
    a.r[0] = r31;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80574cd8u);
    r30 = (u32)param_1 + 0x120u;
    wrf32d(r31 + 0x80u, f0);
    wrf32d(r31 + 0x7cu, f0);
    wrf32d(r31 + 0x78u, f0);
    a.r[0] = r30;
    (void)tc_call(0x80079efcu, &a);
    f0 = (f64)rdf32(0x80574cd8u);
    wrf32d(r30 + 0x80u, f0);
    wrf32d(r30 + 0x7cu, f0);
    wrf32d(r30 + 0x78u, f0);
    return param_1;
}
