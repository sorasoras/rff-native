#include "tc_rt.h"

void fn_801e77f8(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x270u);
    if (r0 > 1u && r0 < 4u) {
        wrf32d(param_3, (f64)rdf32(0x80576328u));
        return;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x8007eb70u, &a);
    return;
}
