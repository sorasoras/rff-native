#include "tc_rt.h"

void fn_800a6ce0(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r3 = param_1;
    if ((u32)(s8)param_4 != 0u) {
        r0 = (u32)param_3 - 1u;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = r0 & 0xffu;
        r3 = (param_1 & 0xffff7fffu) | r0;
    }
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    (void)tc_call(0x800a6b80u, &a);
    return;
}
