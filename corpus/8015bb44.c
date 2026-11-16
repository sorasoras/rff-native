#include "tc_rt.h"

void fn_8015bb44(s32 param_1)
{
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 1u;
    r29 = (u32)param_1;
    r28 = 0u;
    r31 = rd32((u32)param_1 + 0x168u);
    do {
        if ((r31 & r30) != 0u) {
            a.r[0] = r29;
            (void)tc_call(0x8015b224u, &a);
        }
        r28 = r28 + 1u;
        r30 = (r30 << 1u) & 0xfffffffeu;
        r29 = r29 + 0x24u;
    } while ((s32)r28 < 10);
    return;
}
