#include "tc_rt.h"

void fn_80253d98(u32 param_1, s32 param_2, u32 param_r5)
{
    u32 r3 = 0, r8 = 0, r10 = 0, r11 = 0, r12 = 0;
    if (param_1 != 0u) {
        r10 = (u32)rd16(param_r5 + 2u);
        r11 = (u32)rd16(param_r5) & 0xfffu;
        wr8(0xcc008000u, 0x61u);
        r8 = (((r11 & 0xff000fffu) | ((r10 << 0xcu) & 0xfff000u)) & 0xffffffu) | 0xe9000000u;
        r11 = (u32)rd16(param_r5 + 4u) & 0xfffu;
        wr32(0xcc008000u, r8);
        r10 = (u32)rd16(param_r5 + 6u);
        wr8(0xcc008000u, 0x61u);
        r8 = (((r11 & 0xff000fffu) | ((r10 << 0xcu) & 0xfff000u)) & 0xffffffu) | 0xea000000u;
        r10 = (u32)rd16(param_r5 + 0xau);
        r11 = (u32)rd16(param_r5 + 8u) & 0xfffu;
        wr32(0xcc008000u, r8);
        wr8(0xcc008000u, 0x61u);
        r8 = (((r11 & 0xff000fffu) | ((r10 << 0xcu) & 0xfff000u)) & 0xffffffu) | 0xeb000000u;
        r11 = (u32)rd16(param_r5 + 0xcu) & 0xfffu;
        wr32(0xcc008000u, r8);
        r10 = (u32)rd16(param_r5 + 0xeu);
        wr8(0xcc008000u, 0x61u);
        r12 = (u32)rd16(param_r5 + 0x10u);
        r8 = (((r11 & 0xff000fffu) | ((r10 << 0xcu) & 0xfff000u)) & 0xffffffu) | 0xec000000u;
        r10 = (u32)rd16(param_r5 + 0x12u);
        wr32(0xcc008000u, r8);
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, (((r12 & 0xfffu) | ((r10 << 0xcu) & 0xfff000u)) & 0xffffffu) | 0xed000000u);
    }
    wr8(0xcc008000u, 0x61u);
    r3 = rd32(0x80576c88u);
    wr32(0xcc008000u, (((((u32)param_2 + 0x156u) & 0x3ffu) | ((param_1 << 0xau) & 0x400u)) & 0xffffffu) | 0xe8000000u);
    wr16(r3 + 2u, 0u);
    return;
}
