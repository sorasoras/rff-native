#include "tc_rt.h"

void fn_801bdb74(u32 param_1)
{
    u32 r3 = 0, r24 = 0, r25 = 0, r26 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r25 = 0u;
    while ((s32)r31 < (s32)rd32(param_1)) {
        a.r[0] = rd32(0x80571398u);
        a.r[1] = r31;
        r3 = tc_call(0x801c09d4u, &a);
        r26 = r3;
        r24 = rd32(param_1 + 0x164u) + r25;
        if (r3 != (u32)rd16(r24 + 0xbcu)) {
            a.r[0] = r24;
            (void)tc_call(0x80161ac4u, &a);
            wr16(r24 + 0xbcu, 0x2e8u);
            wr8(r24 + 0xbeu, 0u);
            wr8(r24 + 0xbfu, 0u);
            wr16(rd32(param_1 + 0x164u) + r25 + 0xbcu, (u16)r26);
            wr8(rd32(param_1 + 0x164u) + r25 + 0xbfu, 1u);
            wr8(rd32(param_1 + 0x164u) + r25 + 0xbeu, 1u);
            a.r[0] = rd32(param_1 + 0x164u) + r25;
            (void)tc_call(0x80161a60u, &a);
        }
        r25 = r25 + 0xd0u;
        r31 = r31 + 1u;
    }
    return;
}
