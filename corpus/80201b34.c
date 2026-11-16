#include "tc_rt.h"

void fn_80201b34(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r27 = 0u;
    r28 = 0u;
    while ((s32)r27 < (s32)rd32(param_1)) {
        r29 = rd32(rd32(param_1 + 0x2cu) + r28);
        a.r[0] = (u32)param_2 + 0xbcu;
        a.r[1] = r29 + 0xbcu;
        r3 = tc_call(0x800f9514u, &a);
        if (r3 != 0u) {
            a.r[0] = r29;
            (void)tc_call(0x80161ac4u, &a);
            wr16(r29 + 0xbcu, 0x2e8u);
            wr8(r29 + 0xbeu, 0u);
            wr8(r29 + 0xbfu, 0u);
        }
        r28 = r28 + 4u;
        r27 = r27 + 1u;
    }
    return;
}
