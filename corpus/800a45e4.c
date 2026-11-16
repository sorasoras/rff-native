#include "tc_rt.h"

void fn_800a45e4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r5 = 0, r6 = 0, r8 = 0;
    TcArgs a = {0};
    r5 = param_3;
    r6 = 0xffu;
    if (param_3 != 0xffu) {
        r8 = param_3 - 1u;
        r8 = r8 & (u32)((s32)((0u - r8) & ~r8) >> 31);
        r5 = ppc_mulhw(715827883, (s32)r8);
        r5 = r5 + ((r5 >> 0x1fu) & 1u);
        r6 = r5 & 0xffu;
        r5 = (r8 - (r5 * 6u)) & 0xffu;
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = param_4;
    (void)tc_call(0x80080f48u, &a);
    return;
}
