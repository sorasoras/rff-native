#include "tc_rt.h"

void fn_801fa880(u32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = param_1;
    a.r[0] = rd32(param_1 + 0x74u);
    a.r[1] = rd32(param_1 + 0x70u);
    a.r[2] = 1u;
    (void)tc_call(0x800f8f10u, &a);
    r31 = 0u;
    do {
        a.r[0] = rd32(r30);
        a.r[1] = rd32(r30 + 0x14u);
        a.r[2] = 1u;
        (void)tc_call(0x800f8f10u, &a);
        r31 = r31 + 1u;
        r30 = r30 + 4u;
    } while ((s32)r31 < 5);
    return;
}
