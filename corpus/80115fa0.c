#include "tc_rt.h"

u32 fn_80115fa0(s32 param_1, s32 param_2, u32 param_r5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (((u32)param_2 - 2u) <= 1u) {
        a.r[0] = (u32)param_1 + 0x34u;
        a.r[1] = (u32)param_1 + 0x40u;
        a.r[2] = param_r5;
        (void)tc_call(0x801103e8u, &a);
        if ((u32)param_2 == 3u) {
            wr32((u32)param_1 + 0x44u, 1u);
        } else {
            wr32((u32)param_1 + 0x44u, 0u);
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
