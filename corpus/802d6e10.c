#include "tc_rt.h"

void fn_802d6e10(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    r11 = (u32)rd8(param_2);
    r10 = (u32)rd8(param_2 + 1u);
    c0eq = rd32((u32)param_1 + 0x20u) == 1u;
    r9 = (u32)rd8(param_2 + 2u);
    r8 = (u32)rd8(param_2 + 3u);
    r7 = (u32)rd8(param_3);
    r6 = (u32)rd8(param_3 + 1u);
    r4 = (u32)rd8(param_3 + 2u);
    r0 = (u32)rd8(param_3 + 3u);
    wr8((u32)param_1 + 0x18u, (u8)r11);
    wr8((u32)param_1 + 0x19u, (u8)r10);
    wr8((u32)param_1 + 0x1au, (u8)r9);
    wr8((u32)param_1 + 0x1bu, (u8)r8);
    wr8((u32)param_1 + 0x1cu, (u8)r7);
    wr8((u32)param_1 + 0x1du, (u8)r6);
    wr8((u32)param_1 + 0x1eu, (u8)r4);
    wr8((u32)param_1 + 0x1fu, (u8)r0);
    wr8((u32)param_1 + 8u, (u8)r11);
    wr8((u32)param_1 + 9u, (u8)r10);
    wr8((u32)param_1 + 0xau, (u8)r9);
    wr8((u32)param_1 + 0xbu, (u8)r8);
    if (!c0eq) {
        r5 = (u32)param_1 + 0x18u;
    } else {
        r5 = (u32)param_1 + 0x1cu;
    }
    r0 = rd32((u32)param_1 + 0x20u);
    wr8((u32)param_1 + 0xcu, rd8(r5));
    wr8((u32)param_1 + 0xdu, rd8(r5 + 1u));
    wr8((u32)param_1 + 0xeu, rd8(r5 + 2u));
    wr8((u32)param_1 + 0xfu, rd8(r5 + 3u));
    if (r0 != 2u) {
        r5 = (u32)param_1 + 0x18u;
    } else {
        r5 = (u32)param_1 + 0x1cu;
    }
    r0 = rd32((u32)param_1 + 0x20u);
    wr8((u32)param_1 + 0x10u, rd8(r5));
    wr8((u32)param_1 + 0x11u, rd8(r5 + 1u));
    wr8((u32)param_1 + 0x12u, rd8(r5 + 2u));
    wr8((u32)param_1 + 0x13u, rd8(r5 + 3u));
    if (r0 == 0u) {
        r8 = (u32)param_1 + 0x18u;
    } else {
        r8 = (u32)param_1 + 0x1cu;
    }
    r0 = (u32)rd8((u32)param_1 + 0xbu);
    wr8((u32)param_1 + 0x14u, rd8(r8));
    r7 = (u32)rd8((u32)param_1 + 0x42u);
    r4 = (u32)rd8((u32)param_1 + 0xfu);
    r6 = r0 * r7;
    wr8((u32)param_1 + 0x15u, rd8(r8 + 1u));
    r0 = (u32)rd8((u32)param_1 + 0x13u);
    wr8((u32)param_1 + 0x16u, rd8(r8 + 2u));
    r4 = r4 * r7;
    r8 = (u32)rd8(r8 + 3u);
    r5 = r0 * r7;
    r0 = r8 * r7;
    r6 = ppc_mulhw(-2139062143, (s32)r6) + r6;
    r8 = (u32)((s32)r6 >> 7);
    r4 = ppc_mulhw(-2139062143, (s32)r4) + r4;
    r8 = r8 + ((r8 >> 0x1fu) & 1u);
    r7 = (u32)((s32)r4 >> 7);
    wr8((u32)param_1 + 0xbu, (u8)r8);
    r5 = ppc_mulhw(-2139062143, (s32)r5) + r5;
    r7 = r7 + ((r7 >> 0x1fu) & 1u);
    r5 = (u32)((s32)r5 >> 7);
    wr8((u32)param_1 + 0xfu, (u8)r7);
    r0 = ppc_mulhw(-2139062143, (s32)r0) + r0;
    r0 = (u32)((s32)r0 >> 7);
    r5 = r5 + ((r5 >> 0x1fu) & 1u);
    wr8((u32)param_1 + 0x13u, (u8)r5);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    wr8((u32)param_1 + 0x17u, (u8)r0);
    return;
}
