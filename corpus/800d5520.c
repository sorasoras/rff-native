#include "tc_rt.h"

void fn_800d5520(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0xffffffffu;
    r30 = rd32((u32)param_1 + 0x4b0u) + (u32)param_2;
    wr32((u32)param_1 + 0x4b0u, r30);
    if (param_2 > 0) {
        r31 = 1u;
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800d56bcu, &a);
    a.r[0] = r30;
    a.r[1] = r3;
    r3 = tc_call(0x800d55e4u, &a);
    r30 = r3;
    r29 = 0u;
    for (;;) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d56bcu, &a);
        if ((s32)r29 >= (s32)r3) break;
        if (rd32((u32)param_1 + ((r30 << 2u) & 0xfffffffcu) + 0x480u) != 0u) {
            wr32((u32)param_1 + 0x4b0u, r30);
            return;
        }
        r30 = r30 + r31;
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d56bcu, &a);
        a.r[0] = r30;
        a.r[1] = r3;
        r3 = tc_call(0x800d55e4u, &a);
        r30 = r3;
        r29 = r29 + 1u;
    }
    wr32((u32)param_1 + 0x4b0u, r30);
    return;
}
