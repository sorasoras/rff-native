#include "tc_rt.h"

void fn_801d5004(s32 param_1, s32 param_2, s32 param_3, f64 param_f1)
{
    TcArgs a = {0};
    if ((u32)param_3 != 0u) {
        a.f[0] = param_f1;
        a.r[0] = (u32)param_1 + 0x27cu;
        a.r[1] = (u32)(s8)param_2;
        (void)tc_call(0x800a2560u, &a);
        return;
    }
    a.r[0] = (u32)param_1 + 0x27cu;
    a.r[1] = (u32)(s8)param_2;
    (void)tc_call(0x800a25e4u, &a);
    return;
}
