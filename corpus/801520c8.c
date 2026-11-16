#include "tc_rt.h"

void fn_801520c8(s32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = (u32)param_1;
    r28 = 0u;
    do {
        if (rd32(r29 + 0x16d8u) != 0u) {
            r3 = tc_call(0x800545e4u, &a);
            a.r[0] = 0x80469958u;
            a.r[1] = rd32(r29 + 0x16d8u);
            a.r[2] = r3;
            (void)tc_call(0x80058638u, &a);
            wr32(r29 + 0x16d8u, 0u);
        }
        r28 = r28 + 1u;
        r29 = r29 + 0x1f0u;
    } while ((s32)r28 < 2);
    return;
}
