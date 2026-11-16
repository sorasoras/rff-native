#include "tc_rt.h"

void fn_801e9e50(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    r12 = (u32)rd8(param_3 + 3u);
    r26 = (u32)rd8(param_2 + 1u);
    r27 = (u32)rd8(param_2 + 2u);
    r28 = (u32)rd8(param_2 + 3u);
    r29 = (u32)rd8(param_3);
    r30 = (u32)rd8(param_3 + 1u);
    r31 = (u32)rd8(param_3 + 2u);
    r11 = (u32)rd8(param_4);
    r10 = (u32)rd8(param_4 + 1u);
    r9 = (u32)rd8(param_4 + 2u);
    r8 = (u32)rd8(param_4 + 3u);
    r6 = (u32)rd8(param_5);
    r5 = (u32)rd8(param_5 + 1u);
    r4 = (u32)rd8(param_5 + 2u);
    r0 = (u32)rd8(param_5 + 3u);
    wr8((u32)param_1 + 0x4cu, rd8(param_2));
    wr8((u32)param_1 + 0x4du, (u8)r26);
    wr8((u32)param_1 + 0x4eu, (u8)r27);
    wr8((u32)param_1 + 0x4fu, (u8)r28);
    wr8((u32)param_1 + 0x50u, (u8)r29);
    wr8((u32)param_1 + 0x51u, (u8)r30);
    wr8((u32)param_1 + 0x52u, (u8)r31);
    wr8((u32)param_1 + 0x53u, (u8)r12);
    wr8((u32)param_1 + 0x54u, (u8)r11);
    wr8((u32)param_1 + 0x55u, (u8)r10);
    wr8((u32)param_1 + 0x56u, (u8)r9);
    wr8((u32)param_1 + 0x57u, (u8)r8);
    wr8((u32)param_1 + 0x58u, (u8)r6);
    wr8((u32)param_1 + 0x59u, (u8)r5);
    wr8((u32)param_1 + 0x5au, (u8)r4);
    wr8((u32)param_1 + 0x5bu, (u8)r0);
    return;
}
