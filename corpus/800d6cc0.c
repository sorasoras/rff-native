#include "tc_rt.h"

u32 fn_800d6cc0(s32 param_1, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    r3 = tc_call(0x8007095cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32((u32)param_1 + 0x88u, 2u);
        wr32((u32)param_1 + 0x94u, 0x40u);
        wr32((u32)param_1 + 0x80u, 0xffffffffu);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x80075450u, &a);
        wr32((u32)param_1 + 0x8cu, r3);
        r3 = 1u;
    }
    return r3;
}
