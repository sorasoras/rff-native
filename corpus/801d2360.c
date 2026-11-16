#include "tc_rt.h"

u32 fn_801d2360(u32 param_1, s32 param_2)
{
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    if ((u32)param_2 == 0u) {
        a.r[0] = param_1;
        a.r[1] = 5u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = (f64)rdf32(0x80575ed4u);
        f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x1a8u), &a);
    } else {
        if ((u32)param_2 == 1u && rd32(param_1 + 0x110u) != 0u) {
            r31 = 0u;
        }
    }
    return r31;
}
