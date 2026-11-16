#include "tc_rt.h"

void fn_80251570(u32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r7 = 0, r8 = 0, r11 = 0, r12 = 0;
    if (param_1 != 0u) {
        r7 = ((((((u32)rd8(param_2 + 0xcu) & 0xfu) | (((u32)rd8(param_2 + 0xdu) << 4u) & 0xf0u)) & 0xfffff0ffu) | (((u32)rd8(param_2 + 0xeu) << 8u) & 0xf00u)) & 0xffff0fffu) | (((u32)rd8(param_2 + 0xfu) << 0xcu) & 0xf000u);
        r8 = ((((((u32)rd8(param_2 + 0x12u) & 0xfu) | (((u32)rd8(param_2 + 0x13u) << 4u) & 0xf0u)) & 0xfffff0ffu) | (((u32)rd8(param_2 + 0x14u) << 8u) & 0xf00u)) & 0xffff0fffu) | (((u32)rd8(param_2 + 0x15u) << 0xcu) & 0xf000u);
        r0 = ((((((((u32)rd8(param_2) & 0xfu) | (((u32)rd8(param_2 + 1u) << 4u) & 0xf0u)) & 0xfffff0ffu) | (((u32)rd8(param_2 + 2u) << 8u) & 0xf00u)) & 0xffff0fffu) | (((u32)rd8(param_2 + 3u) << 0xcu) & 0xf000u)) & 0xfff0ffffu) | (((u32)rd8(param_2 + 4u) << 0x10u) & 0xf0000u);
        r7 = (r7 & 0xfff0ffffu) | (((u32)rd8(param_2 + 0x10u) << 0x10u) & 0xf0000u);
        r8 = (r8 & 0xfff0ffffu) | (((u32)rd8(param_2 + 0x16u) << 0x10u) & 0xf0000u);
        r3 = ((((((u32)rd8(param_2 + 6u) & 0xfu) | (((u32)rd8(param_2 + 7u) << 4u) & 0xf0u)) & 0xfffff0ffu) | (((u32)rd8(param_2 + 8u) << 8u) & 0xf00u)) & 0xffff0fffu) | (((u32)rd8(param_2 + 9u) << 0xcu) & 0xf000u);
        r0 = (r0 & 0xff0fffffu) | (((u32)rd8(param_2 + 5u) << 0x14u) & 0xf00000u);
        r7 = (r7 & 0xff0fffffu) | (((u32)rd8(param_2 + 0x11u) << 0x14u) & 0xf00000u);
        r3 = (r3 & 0xfff0ffffu) | (((u32)rd8(param_2 + 0xau) << 0x10u) & 0xf0000u);
        r3 = (r3 & 0xff0fffffu) | (((u32)rd8(param_2 + 0xbu) << 0x14u) & 0xf00000u);
        r8 = (r8 & 0xff0fffffu) | (((u32)rd8(param_2 + 0x17u) << 0x14u) & 0xf00000u);
        r0 = (r0 & 0xffffffu) | 0x1000000u;
        r3 = (r3 & 0xffffffu) | 0x2000000u;
        r7 = (r7 & 0xffffffu) | 0x3000000u;
        r8 = (r8 & 0xffffffu) | 0x4000000u;
    } else {
        r0 = 0x1666666u;
        r3 = 0x2666666u;
        r7 = 0x3666666u;
        r8 = 0x4666666u;
    }
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r0);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r3);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r7);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r8);
    if ((u32)param_3 != 0u) {
        r11 = ((((((((u32)rd8((u32)param_4) & 0x3fu) | 0x53000000u) & 0xfffff03fu) | (((u32)rd8((u32)param_4 + 1u) << 6u) & 0xfc0u)) & 0xfffc0fffu) | (((u32)rd8((u32)param_4 + 2u) << 0xcu) & 0x3f000u)) & 0xff03ffffu) | (((u32)rd8((u32)param_4 + 3u) << 0x12u) & 0xfc0000u);
        r12 = ((((((u32)rd8((u32)param_4 + 4u) & 0x3fu) | 0x54000000u) & 0xfffff03fu) | (((u32)rd8((u32)param_4 + 5u) << 6u) & 0xfc0u)) & 0xfffc0fffu) | (((u32)rd8((u32)param_4 + 6u) << 0xcu) & 0x3f000u);
    } else {
        r11 = 0x53595000u;
        r12 = 0x54000015u;
    }
    wr8(0xcc008000u, 0x61u);
    r3 = rd32(0x80576c88u);
    wr32(0xcc008000u, r11);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r12);
    wr16(r3 + 2u, 0u);
    return;
}
