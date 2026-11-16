#include "tc_rt.h"

void fn_802a09e8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8)
{
    TcArgs a = {0};
    wr16(param_1 + 2u, 0x18u);
    wr16(param_1 + 4u, 0u);
    wr8(param_1 + 8u, 0x29u);
    wr8(param_1 + 9u, 4u);
    wr8(param_1 + 0xau, 0x15u);
    wr8(param_1 + 0xbu, rd8(param_2 + 5u));
    wr8(param_1 + 0xcu, rd8(param_2 + 4u));
    wr8(param_1 + 0xdu, rd8(param_2 + 3u));
    wr8(param_1 + 0xeu, rd8(param_2 + 2u));
    wr8(param_1 + 0xfu, rd8(param_2 + 1u));
    wr8(param_1 + 0x10u, rd8(param_2));
    wr8(param_1 + 0x11u, (u8)param_3);
    wr8(param_1 + 0x12u, (u8)((param_3 >> 8u) & 0xffu));
    wr8(param_1 + 0x13u, (u8)((param_3 >> 0x10u) & 0xffu));
    wr8(param_1 + 0x14u, (u8)((param_3 >> 0x18u) & 0xffu));
    wr8(param_1 + 0x15u, (u8)param_4);
    wr8(param_1 + 0x16u, (u8)((param_4 >> 8u) & 0xffu));
    wr8(param_1 + 0x17u, (u8)((param_4 >> 0x10u) & 0xffu));
    wr8(param_1 + 0x18u, (u8)((param_4 >> 0x18u) & 0xffu));
    wr8(param_1 + 0x19u, (u8)param_5);
    wr8(param_1 + 0x1au, (u8)((s32)param_5 >> 8));
    wr8(param_1 + 0x1bu, (u8)param_6);
    wr8(param_1 + 0x1cu, (u8)((param_6 >> 8u) & 0xffu));
    wr8(param_1 + 0x1du, (u8)param_7);
    wr8(param_1 + 0x1eu, (u8)param_8);
    wr8(param_1 + 0x1fu, (u8)((param_8 >> 8u) & 0xffu));
    a.r[0] = param_1;
    (void)tc_call(0x8029db78u, &a);
    return;
}
