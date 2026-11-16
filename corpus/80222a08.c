#include "tc_rt.h"

void fn_80222a08(s32 param_1, f64 param_f1, u32 param_r4, u32 param_r5, u32 param_r6)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xb20u) == 0u) {
        a.f[0] = param_f1;
        a.r[0] = (u32)param_1;
        a.r[1] = param_r4;
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        (void)tc_call(0x800f33f8u, &a);
        return;
    }
    return;
}
