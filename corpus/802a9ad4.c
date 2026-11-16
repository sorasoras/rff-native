#include "tc_rt.h"

s32 fn_802a9ad4(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r5 = 0, r9 = 0, r10 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r5 = param_1 | 0x2000u;
        wr16(r3 + 4u, 0u);
        r9 = (u32)param_2 + 8u;
        wr16(r3 + 2u, (u16)((u32)param_2 + 0xcu));
        r10 = (u32)param_2 + 4u;
        wr8(r3 + 8u, (u8)r5);
        wr8(r3 + 9u, (u8)((s32)r5 >> 8));
        wr8(r3 + 0xau, (u8)r9);
        wr8(r3 + 0xbu, (u8)((s32)r9 >> 8));
        wr8(r3 + 0xcu, (u8)r10);
        wr8(r3 + 0xdu, (u8)((s32)r10 >> 8));
        wr8(r3 + 0xeu, 1u);
        wr8(r3 + 0xfu, 0u);
        wr8(r3 + 0x10u, (u8)param_3);
        wr8(r3 + 0x11u, (u8)param_4);
        wr8(r3 + 0x12u, (u8)param_2);
        wr8(r3 + 0x13u, (u8)(((u32)param_2 >> 8u) & 0xffu));
    }
    return (s32)r3;
}
