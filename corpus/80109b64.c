#include "tc_rt.h"

void fn_80109b64(u32 param_1, u32 param_2, s32 param_3)
{
    TcArgs a = {0};
    if ((u32)param_3 == 0u) {
        a.f[0] = (f64)rdf32(0x805740d0u);
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b5248u, &a);
        return;
    }
    a.f[0] = (f64)rdf32(0x805740d0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    return;
}
