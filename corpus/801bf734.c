#include "tc_rt.h"

void fn_801bf734(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x3cu;
    (void)tc_call(0x80163f60u, &a);
    r31 = (u32)param_1;
    r30 = 0u;
    do {
        r3 = rd32(r31 + 0x9cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800fe9bcu, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 2);
    r3 = rd32((u32)param_1 + 0x14cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x801ed110u, &a);
        a.r[0] = rd32((u32)param_1 + 0x14cu);
        a.r[1] = rd32((u32)param_1 + 0x150u);
        (void)tc_call(0x801ec6bcu, &a);
    }
    return;
}
