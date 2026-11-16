#include "tc_rt.h"

u32 fn_801c09d4(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0xc4u);
    if ((s32)r5 < 8) {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 0xc0u) + (u32)param_2;
        a.r[2] = r5;
        r3 = tc_call(0x801c095cu, &a);
        return r3;
    }
    return 0x2e8u;
}
