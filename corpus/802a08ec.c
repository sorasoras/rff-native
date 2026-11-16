#include "tc_rt.h"

void fn_802a08ec(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 == 0u) {
        return;
    }
    wr16(r3 + 2u, 0x14u);
    wr16(r3 + 4u, 0u);
    wr8(r3 + 8u, 0x28u);
    wr8(r3 + 9u, 4u);
    wr8(r3 + 0xau, 0x11u);
    wr8(r3 + 0xbu, (u8)param_1);
    wr8(r3 + 0xcu, (u8)((s32)param_1 >> 8));
    wr8(r3 + 0xdu, (u8)param_2);
    wr8(r3 + 0xeu, (u8)((param_2 >> 8u) & 0xffu));
    wr8(r3 + 0xfu, (u8)((param_2 >> 0x10u) & 0xffu));
    wr8(r3 + 0x10u, (u8)((param_2 >> 0x18u) & 0xffu));
    wr8(r3 + 0x11u, (u8)param_3);
    wr8(r3 + 0x12u, (u8)((param_3 >> 8u) & 0xffu));
    wr8(r3 + 0x13u, (u8)((param_3 >> 0x10u) & 0xffu));
    wr8(r3 + 0x14u, (u8)((param_3 >> 0x18u) & 0xffu));
    wr8(r3 + 0x15u, (u8)param_4);
    wr8(r3 + 0x16u, (u8)((s32)param_4 >> 8));
    wr8(r3 + 0x17u, (u8)param_5);
    wr8(r3 + 0x18u, (u8)((s32)param_5 >> 8));
    wr8(r3 + 0x19u, (u8)param_6);
    wr8(r3 + 0x1au, (u8)param_7);
    wr8(r3 + 0x1bu, (u8)((param_7 >> 8u) & 0xffu));
    a.r[0] = r3;
    (void)tc_call(0x8029db78u, &a);
    return;
}
