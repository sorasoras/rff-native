#include "tc_rt.h"

void fn_8017d528(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0x817fdff0u;
    a.r[3] = 0x817fdfe0u;
    (void)tc_call(0x8017d750u, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0x817fdfecu;
    a.r[3] = 0x817fdfdcu;
    a.r[4] = rd32(0x817fdfe0u);
    (void)tc_call(0x8017d864u, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0x817fdfe8u;
    a.r[3] = 0x817fdfd8u;
    a.r[4] = rd32(0x817fdfdcu);
    (void)tc_call(0x8017d988u, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0x817fdfe4u;
    a.r[3] = rd32(0x817fdfd8u);
    (void)tc_call(0x8017daacu, &a);
    r5 = rd32(0x817fdff0u);
    if ((s32)r5 < 0) {
        r5 = 0u;
    }
    r6 = rd32(0x817fdfecu);
    if ((s32)r6 < 0) {
        r6 = 0u;
    }
    r7 = rd32(0x817fdfe8u);
    if ((s32)r7 < 0) {
        r7 = 0u;
    }
    r8 = rd32(0x817fdfe4u);
    if ((s32)r8 < 0) {
        r8 = 0u;
    }
    r4 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
    r3 = (u32)rd8(r4 + 0x39cu);
    if (r3 > r3) {
        r3 = r3 - r3;
        wr8(r4 + 0x39cu, (u8)r3);
    } else {
        wr8(r4 + 0x39cu, 0u);
    }
    r3 = (u32)rd8(r4 + 0x39du);
    if (r3 > r3) {
        r3 = r3 - r3;
        wr8(r4 + 0x39du, (u8)r3);
    } else {
        wr8(r4 + 0x39du, 0u);
    }
    r3 = (u32)rd8(r4 + 0x39eu);
    if (r3 > r3) {
        r3 = r3 - r3;
        wr8(r4 + 0x39eu, (u8)r3);
    } else {
        wr8(r4 + 0x39eu, 0u);
    }
    r3 = (u32)rd8(r4 + 0x39fu);
    if (r3 > r3) {
        r3 = r3 - r3;
        wr8(r4 + 0x39fu, (u8)r3);
    } else {
        wr8(r4 + 0x39fu, 0u);
    }
    r3 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
    r0 = (u32)rd8(r3 + 0x39cu) + r5;
    if (r0 <= 0x3cu) {
        wr8(r3 + 0x39cu, (u8)r0);
    } else {
        wr8(r3 + 0x39cu, 0x3cu);
    }
    r3 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
    r0 = (u32)rd8(r3 + 0x39du) + r6;
    if (r0 <= 0x3cu) {
        wr8(r3 + 0x39du, (u8)r0);
    } else {
        wr8(r3 + 0x39du, 0x3cu);
    }
    r3 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
    r0 = (u32)rd8(r3 + 0x39eu) + r7;
    if (r0 <= 0x3cu) {
        wr8(r3 + 0x39eu, (u8)r0);
    } else {
        wr8(r3 + 0x39eu, 0x3cu);
    }
    r3 = (((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fb6d800u;
    r0 = (u32)rd8(r3 + 0x39fu) + r8;
    if (r0 <= 0x3cu) {
        wr8(r3 + 0x39fu, (u8)r0);
    } else {
        wr8(r3 + 0x39fu, 0x3cu);
    }
    return;
}
