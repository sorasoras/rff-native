#include "tc_rt.h"

void fn_80185b88(s32 param_1)
{
    u32 r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r28 = 0u;
    r31 = 0u;
    r29 = 0u;
    while ((s32)r28 < (s32)rd32((u32)param_1 + 0xcu)) {
        a.r[0] = r31 - 0x7fb66dc0u;
        a.r[1] = rd32(rd32((u32)param_1 + 0x2cu) + r29) + 0xbcu;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        r29 = r29 + 4u;
        r28 = r28 + 1u;
        r31 = r31 + 4u;
    }
    return;
}
