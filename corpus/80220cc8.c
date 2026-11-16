#include "tc_rt.h"

void fn_80220cc8(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = (u32)param_1;
    while ((s32)r30 < (s32)rd32((u32)param_1 + 0xcu)) {
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        r3 = tc_call(0x801894d8u, &a);
        a.r[0] = r3;
        a.r[1] = rd32(r31 + 0x2cu);
        a.r[2] = 1u;
        (void)tc_call(0x800f8f10u, &a);
        r31 = r31 + 0x5cu;
        r30 = r30 + 1u;
    }
    return;
}
