#include "tc_rt.h"

void fn_8014fae8(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.f[0] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0xd8u), &a);
        wr32(param_1 + 0x120u, 5u);
    } else {
        a.r[0] = param_1;
        (void)tc_call(0x801f0368u, &a);
    }
    return;
}
