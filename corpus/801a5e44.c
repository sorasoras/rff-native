#include "tc_rt.h"

void fn_801a5e44(s32 param_1, s32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        a.f[0] = (f64)rdf32(0x80575934u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0xfu;
        a.r[2] = 0u;
        (void)tc_call(0x800a94c0u, &a);
        f2 = (f64)rdf32((u32)param_1 + 0xd0cu);
        f1 = (f64)rdf32((u32)param_1 + 0xd10u);
        f0 = (f64)rdf32((u32)param_1 + 0xd14u);
        wr32((u32)param_1 + 0xf40u, 0u);
        wrf32d((u32)param_1 + 0x17cu, f2);
        wrf32d((u32)param_1 + 0x180u, f1);
        wrf32d((u32)param_1 + 0x184u, f0);
    } else {
        if ((u32)param_2 == 1u && (s32)rd32((u32)param_1 + 0xd00u) > 0) {
            wr32((u32)param_1 + 0x2b0u, 1u);
        }
    }
    return;
}
