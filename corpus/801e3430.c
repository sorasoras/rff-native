#include "tc_rt.h"

void fn_801e3430(f64 param_1, f64 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    TcArgs a = {0};
    if ((f64)(f32)ppc_fabs((f64)(f32)(param_2 - param_1)) < (f64)rdf32(0x80576300u)) {
        a.f[0] = param_1;
        a.f[1] = (f64)rdf32((u32)param_3 + 0x20u);
        a.r[0] = param_4;
        a.r[1] = param_5;
        a.r[2] = (u32)param_3 + 0x14u;
        a.r[3] = (u32)param_3 + 8u;
        (void)tc_call(0x80078ba4u, &a);
        return;
    }
    a.f[0] = param_1;
    a.f[1] = param_2;
    a.f[2] = (f64)rdf32((u32)param_3 + 0x20u);
    a.r[0] = param_4;
    a.r[1] = param_5;
    a.r[2] = (u32)param_3 + 0x14u;
    a.r[3] = (u32)param_3 + 8u;
    (void)tc_call(0x80078964u, &a);
    return;
}
