#include "tc_rt.h"

void fn_802525bc(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    TcArgs a = {0};
    r12 = (rd32(param_1) & 0xffffffu) | (((u32)rd8((u32)param_3 - 0x7fa8f460u) << 0x18u) & 0xff000000u);
    r10 = (u32)rd8((u32)param_3 - 0x7fa8f450u);
    r11 = (rd32(param_1 + 4u) & 0xffffffu) | (((u32)rd8((u32)param_3 - 0x7fa8f458u) << 0x18u) & 0xff000000u);
    r0 = (u32)rd8((u32)param_3 - 0x7fa8f440u);
    r8 = (u32)rd8((u32)param_3 - 0x7fa8f448u);
    r5 = (u32)rd8((u32)param_3 - 0x7fa8f438u);
    r9 = (rd32(param_1 + 8u) & 0xffffffu) | ((r10 << 0x18u) & 0xff000000u);
    wr8(0xcc008000u, 0x61u);
    r7 = (rd32(param_2) & 0xffffffu) | ((r8 << 0x18u) & 0xff000000u);
    wr32(0xcc008000u, r12);
    r6 = (rd32(param_2 + 4u) & 0xffffffu) | ((r0 << 0x18u) & 0xff000000u);
    wr8(0xcc008000u, 0x61u);
    r0 = (u32)rd8(param_1 + 0x1fu);
    wr32(0xcc008000u, r11);
    r0 = r0 & 2u;
    c0eq = r0 == 0u;
    r0 = rd32(param_1 + 0xcu);
    wr8(0xcc008000u, 0x61u);
    r0 = (r0 & 0xffffffu) | ((r5 << 0x18u) & 0xff000000u);
    wr32(0xcc008000u, r9);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r7);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r6);
    wr8(0xcc008000u, 0x61u);
    wr32(param_1, r12);
    wr32(param_1 + 4u, r11);
    wr32(param_1 + 8u, r9);
    wr32(param_2, r7);
    wr32(param_2 + 4u, r6);
    wr32(param_1 + 0xcu, r0);
    wr32(0xcc008000u, r0);
    if (c0eq) {
        r4 = rd32(0x80576c88u);
        a.r[0] = rd32(param_1 + 0x18u);
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(r4 + 0x51cu), &a);
        wr32(r3 + 4u, (rd32(r3 + 4u) & 0xffffffu) | (((u32)rd8((u32)param_3 - 0x7fa8f430u) << 0x18u) & 0xff000000u));
        wr8(0xcc008000u, 0x61u);
        wr32(0xcc008000u, rd32(r3 + 4u));
    }
    r6 = rd32(0x80576c88u);
    r4 = r6 + (((u32)param_3 << 2u) & 0xfffffffcu);
    r3 = rd32(param_1);
    wr32(r4 + 0x564u, rd32(param_1 + 8u));
    wr32(r4 + 0x584u, r3);
    wr32(r6 + 0x5fcu, rd32(r6 + 0x5fcu) | 1u);
    wr16(r6 + 2u, 0u);
    return;
}
