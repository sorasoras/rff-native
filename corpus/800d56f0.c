#include "tc_rt.h"

void fn_800d56f0(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    do {
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        r3 = tc_call(0x800d56c4u, &a);
        if (r3 != 0u) break;
        r30 = r30 + 1u;
    } while ((s32)r30 < 12);
    if (r30 != 0xcu) {
        r31 = 0x2fu;
        if (param_3 < 0x2fu) {
            r31 = param_3;
        }
        a.r[0] = (u32)param_1;
        a.r[1] = r30;
        r3 = tc_call(0x800d5504u, &a);
        r30 = r3;
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = r31;
        (void)tc_call(0x8025e7dcu, &a);
        wr16(r30 + ((r31 << 1u) & 0xfffffffeu), 0u);
        wr32((u32)param_1 + 0x4b4u, rd32((u32)param_1 + 0x4b4u) + 1u);
    }
    return;
}
