#include "tc_rt.h"

void fn_80137ab4(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r27 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x328u) != (u32)param_2) {
        r29 = (u32)param_2;
        r27 = 0u;
        wr32(rd32(0x80571398u) + 0xfcu, (u32)param_2);
        r28 = rd32((u32)param_1 + 0x1bcu);
        do {
            a.r[0] = r28;
            (void)tc_call(0x80161ac4u, &a);
            wr16(r28 + 0xbcu, 0x2e8u);
            wr8(r28 + 0xbeu, 0u);
            wr8(r28 + 0xbfu, 0u);
            r0 = rd32(r29 + 0xcu);
            if (r0 != 0x2e8u) {
                wr16(r28 + 0xbcu, (u16)r0);
                a.r[0] = r28;
                (void)tc_call(0x80161a60u, &a);
                a.r[0] = r28;
                (void)tc_call(0x80161e18u, &a);
            }
            r27 = r27 + 1u;
            r28 = r28 + 0xd0u;
            r29 = r29 + 4u;
        } while ((s32)r27 < 6);
        wr32((u32)param_1 + 0x328u, (u32)param_2);
    }
    return;
}
