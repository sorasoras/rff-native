#include "tc_rt.h"

void fn_80215018(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x58u) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80214788u, &a);
        r3 = tc_call(0x80218648u, &a);
        wr32((u32)param_1 + 0xe8u, r3);
        r31 = (u32)param_1 + 4u;
        r30 = 1u;
        while ((s32)r30 < (s32)rd32(rd32((u32)param_1 + 0x4ecu))) {
            r3 = rd32(r31 + 0x60u);
            if ((u32)rd8(r3) != 0u) {
                a.r[0] = r3;
                a.r[1] = rd32((u32)param_1 + 0xe8u);
                a.r[2] = 0u;
                (void)tc_call(0x8021a544u, &a);
            }
            r31 = r31 + 4u;
            r30 = r30 + 1u;
        }
    }
    return;
}
