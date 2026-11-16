#include "tc_rt.h"

u32 fn_800ce334(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfe8u;
    r3 = tc_call(0x800ce238u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32(param_6, r3);
        r30 = rd32(0x817fdfe8u);
        a.r[0] = r30;
        r3 = tc_call(0x8025e7a4u, &a);
        r31 = (u32)param_4 - 1u;
        if (r3 < r31) {
            r31 = r3;
        }
        if ((u32)param_3 != 0u) {
            a.r[0] = (u32)param_3;
            a.r[1] = r30;
            a.r[2] = r31;
            (void)tc_call(0x8025e7dcu, &a);
        }
        wr32(param_5, r31);
        r3 = 1u;
    }
    return r3;
}
