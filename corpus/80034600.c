#include "tc_rt.h"

void fn_80034600(u32 param_1, s32 param_2, f64 param_f1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r0 = rd32((u32)param_2 + 0x10u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if (r0 == 0u) {
        wrf32d(param_1, (f64)rdf32((u32)param_2 + 8u));
    } else {
        a.f[0] = param_f1;
        a.r[0] = (u32)param_2;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x800342bcu, &a);
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0x817fdfc8u;
        (void)tc_call(0x800344e4u, &a);
    }
    return;
}
