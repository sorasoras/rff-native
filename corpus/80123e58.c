#include "tc_rt.h"

void fn_80123e58(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    a.r[0] = rd32((u32)param_1 + 0x14u);
    a.r[1] = rd32((u32)param_1 + 0xcu);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    r31 = 0u;
    do {
        a.r[0] = rd32(r30 + 0x7cu);
        a.r[1] = rd32(r30 + 0x78u);
        a.r[2] = 1u;
        (void)tc_call(0x800f8f10u, &a);
        r31 = r31 + 1u;
        r30 = r30 + 0x58u;
    } while ((s32)r31 < 10);
    return;
}
