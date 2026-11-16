#include "tc_rt.h"

void fn_8014cd98(s32 param_1, u32 param_2, f64 param_f1, f64 param_f2, u32 param_r5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = param_r5;
    r3 = tc_call(0x8006e6a8u, &a);
    if (r3 != 0u) {
        wrf32d((u32)param_1 + 0xe4u, (f64)rdf32(param_2));
        wrf32d((u32)param_1 + 0xe8u, (f64)rdf32(param_2 + 4u));
        wrf32d((u32)param_1 + 0xecu, (f64)rdf32(param_2 + 8u));
    }
    return;
}
