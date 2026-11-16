#include "tc_rt.h"

void fn_801828ec(s32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x16cu) != 0u && rd32((u32)param_1 + 0x180u) != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        f1 = tc_callf(0x80182af0u, &a);
        f31 = f1;
        if ((f64)rdf32(param_2) < f1) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            f1 = tc_callf(0x80182abcu, &a);
            f0 = (f64)(f32)((f64)rdf32(param_2) + f1);
            wrf32d(param_2, f0);
            if (f0 > f31) {
                wrf32d(param_2, f31);
            }
        }
    }
    return;
}
