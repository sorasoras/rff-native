#include "tc_rt.h"

void fn_802d8264(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r4 = rd32(rd32((u32)param_1 + 0x14u) + 0x10u);
    for (;;) {
        if (r4 == 0u) {
            r5 = 0xffffu;
            break;
        }
        if ((u32)rd16(r4) <= param_3 && param_3 <= (u32)rd16(r4 + 2u)) {
            a.r[0] = (u32)param_1;
            a.r[1] = r4;
            a.r[2] = param_3;
            r3 = tc_call(0x802d8314u, &a);
            r5 = r3;
            break;
        }
        r4 = rd32(r4 + 8u);
    }
    if ((r5 & 0xffffu) == 0xffffu) {
        r5 = (u32)rd16(rd32((u32)param_1 + 0x14u) + 2u);
    }
    r5 = r5 & 0xffffu;
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = r5;
    (void)tc_call(0x802d83e8u, &a);
    return;
}
