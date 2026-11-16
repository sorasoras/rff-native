#include "tc_rt.h"

void fn_800b50cc(s32 param_1, s32 param_2, f64 param_f1, u32 param_r5, u32 param_r6)
{
    TcArgs a = {0};
    if ((u32)param_2 != 0xffffffffu) {
        a.f[0] = param_f1;
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = param_r5;
        a.r[3] = param_r6;
        (void)tc_call(0x80064c6cu, &a);
        wr8((u32)param_1 + 0xebdu, 0u);
        wr8((u32)param_1 + 0xebcu, 0u);
    }
    return;
}
