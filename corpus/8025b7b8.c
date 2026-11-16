#include "tc_rt.h"

void fn_8025b7b8(s32 param_1, u32 param_2, u32 param_r5, u32 param_r6)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdfd8u, (u32)param_1);
    wr32(0x817fdfdcu, param_2);
    wr32(0x817fdfe0u, 0u);
    a.r[0] = 0x8025b6d4u;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    r3 = tc_call(0x8025ae20u, &a);
    if ((u32)param_1 != 0u) {
        if (r3 < param_2) {
            wr8((u32)param_1 + r3, 0u);
        } else {
            if (param_2 != 0u) {
                wr8((u32)param_1 + param_2 - 1u, 0u);
            }
        }
    }
    return;
}
