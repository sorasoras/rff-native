#include "tc_rt.h"

void fn_800b3c0c(s32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xea0u) != 0u) {
        f0 = (f64)rdf32(0x80572c00u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xea4u) + (f64)rdf32(0x80572c60u));
        wrf32d((u32)param_1 + 0xea4u, f1);
        if (!((f1 > f0) || (f1 == f0))) {
            return;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        (void)tc_call(0x800b3b64u, &a);
        return;
    }
    return;
}
