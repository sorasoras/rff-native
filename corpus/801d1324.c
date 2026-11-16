#include "tc_rt.h"

u32 fn_801d1324(u32 param_1, s32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        a.r[0] = param_1;
        a.r[1] = rd32(param_1 + 0x37cu);
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80575ed4u);
        f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x1a8u), &a);
    }
    return 1u;
}
