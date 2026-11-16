#include "tc_rt.h"

u32 fn_802f4e40(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u || (u32)param_3 == 0u) {
        wr32(param_1, 0u);
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_2;
        a.r[1] = (u32)param_3;
        a.r[2] = 0u;
        r3 = tc_call(0x8026d004u, &a);
        wr32(param_1, r3);
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    }
    return r3;
}
