#include "tc_rt.h"

void fn_802ca370(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = rd32(param_r3 + 0xcu);
    r28 = param_r4 + 0xb4u;
    r31 = 0x80398e28u;
    r27 = 0u;
    while ((s32)r27 < (s32)r30) {
        a.r[0] = r28;
        a.r[1] = rd32(r31);
        r3 = tc_call(0x8025beb0u, &a);
        if (r3 == 0u) break;
        r31 = r31 + 4u;
        r27 = r27 + 1u;
    }
    r27 = 0u;
    r31 = 0x80399728u;
    for (;;) {
        a.r[0] = r28;
        a.r[1] = rd32(r31);
        r3 = tc_call(0x8025beb0u, &a);
        if (r3 == 0u) break;
        r27 = r27 + 1u;
        r31 = r31 + 4u;
        if ((s32)r27 >= 10) {
            return;
        }
    }
    return;
}
