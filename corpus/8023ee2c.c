#include "tc_rt.h"

void fn_8023ee2c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0eq = 0, ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    u64 t0 = 0, t1 = 0;
    TcArgs a = {0};
    r26 = param_4;
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    r0 = rd32(0x804e6254u);
    wr16(0x804e6246u, (u16)param_1);
    wr16(0x804e6248u, (u16)param_2);
    wr16(0x804e624au, (u16)param_3);
    wr16(0x804e624cu, (u16)param_4);
    if (r0 != 2u && (r0 != 3u && rd32(0x804e6250u) == 0u)) {
        r26 = (param_4 << 1u) & 0xfffeu;
    }
    r3 = (u32)(s16)rd16(0x805716ccu);
    r4 = (u32)(s16)rd16(0x804e6230u);
    r0 = (u32)rd16(0x804e6234u);
    wr16(0x804e6236u, (u16)r26);
    r3 = r4 + r3;
    r6 = 0x2d0u - r0;
    r30 = rd32(0x804e6284u);
    r5 = (u32)rd16(r30 + 2u);
    if ((s32)r3 <= (s32)r6) {
        r6 = r3 & ~(u32)((s32)r3 >> 31);
    }
    r9 = (u32)(s16)rd16(0x805716ceu);
    r7 = (u32)rd16(0x804e6232u);
    r3 = rd32(0x804e6250u);
    r12 = r7 & 1u;
    r7 = (u32)(s16)r7 + r9;
    wr16(0x804e6238u, (u16)r6);
    r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    r0 = r12;
    r4 = r3 + 1u;
    if ((s32)r7 > (s32)r12) {
        r0 = r7;
    }
    r5 = (u32)(s16)r5;
    r6 = (r5 << 1u) & 0xfffffffeu;
    r5 = (u32)rd16(0x804e6236u);
    r26 = r6 - r12;
    r11 = r9 + (u32)(s16)rd16(0x804e6232u);
    r9 = (u32)(s16)rd16(0x804e6232u) + r9;
    r27 = r11 - r12;
    r6 = (u32)(s16)r5 + r11 - r26;
    r12 = r9 - r12;
    r26 = (u32)(s16)rd16(0x804e6236u) + r11 - r26;
    r8 = rd32(0x804e6274u);
    wr16(0x804e623au, (u16)r0);
    r12 = r12 & (u32)((s32)r12 >> 31);
    r10 = (u32)rd16(0x804e624cu);
    r26 = r26 & (u32)((s32)((0u - r26) & ~r26) >> 31);
    r9 = (u32)ppc_divw((s32)(r27 & (u32)((s32)r27 >> 31)), (s32)r4);
    r11 = (u32)rd16(0x804e6248u);
    r7 = (u32)rd16(0x804e624au);
    wr16(0x804e623cu, (u16)(r5 + (r27 & (u32)((s32)r27 >> 31)) - (r6 & (u32)((s32)((0u - r6) & ~r6) >> 31))));
    r6 = (u32)ppc_divw((s32)r12, (s32)r4);
    r28 = (u32)rd16(0x804e6234u);
    r0 = r7;
    r4 = (u32)ppc_divw((s32)r26, (s32)r4);
    r6 = r11 - r6;
    wr16(0x804e623eu, (u16)r6);
    r4 = r10 + r9 - r4;
    wr16(0x804e6240u, (u16)r4);
    if (r8 != 0u) {
        r0 = (r7 << 1u) & 0x1fffeu;
    }
    r6 = r0 & 0xffffu;
    if (r6 >= r28) {
        r3 = rd32(0x805716d8u);
        r0 = rd32(0x805716dcu) | 0x4000000u;
        wr16(0x804e6202u, 0x100u);
        wr32(0x805716dcu, r0);
        wr32(0x805716d8u, r3);
    } else {
        r3 = rd32(0x805716d8u);
        wr32(0x805716dcu, rd32(0x805716dcu) | 0x4000000u);
        wr32(0x805716d8u, r3);
        r3 = rd32(0x805716d8u);
        r0 = rd32(0x805716dcu);
        wr16(0x804e6202u, (u16)(ppc_divwu(r28 + ((r6 << 8u) & 0xffff00u) - 1u, r28) | 0x1000u));
        r0 = r0 | 0x80u;
        wr32(0x805716dcu, r0);
        wr16(0x804e6228u, (u16)r6);
        wr32(0x805716d8u, r3);
    }
    r0 = (u32)rd16(0x804e6242u) + 0xfu;
    r3 = (u32)rd16(0x804e6246u);
    ca = ((s32)r0 < 0) && ((r0 & 0xfu) != 0u);
    r0 = (u32)((s32)r0 >> 4);
    c0eq = rd32(0x804e6250u) == 0u;
    t0 = (u64)r0 + (u64)ca;
    wr8(0x804e625cu, (u8)t0);
    if (!c0eq) {
        r9 = ((u32)t0 << 1u) & 0xfeu;
    } else {
        r9 = (u32)t0 & 0xffu;
    }
    r0 = (r3 << 0x1cu) & 0xf0000000u;
    r3 = (r3 >> 0x1fu) & 1u;
    r0 = r0 - r3;
    r5 = rd32(0x805716d8u);
    r0 = (r0 << 4u) | (r0 >> 0x1cu);
    r8 = r0 + r3;
    r0 = rd32(0x805716f0u);
    r7 = r7 + (r8 & 0xffu);
    r7 = r7 + 0xfu;
    ca = ((s32)r7 < 0) && ((r7 & 0xfu) != 0u);
    r7 = (u32)((s32)r7 >> 4);
    wr32(0x805716dcu, rd32(0x805716dcu) | 0x8000000u);
    t1 = (u64)r7 + (u64)ca;
    wr8(0x804e625du, (u8)r9);
    wr8(0x804e626cu, (u8)r8);
    wr8(0x804e625eu, (u8)t1);
    wr16(0x804e6200u, (u16)((r9 & 0xffff00ffu) | (((u32)t1 << 8u) & 0xff00u)));
    wr32(0x805716d8u, r5);
    if (r0 != 0u) {
        a.r[0] = 0x804e6230u;
        a.r[1] = 0x804e6264u;
        a.r[2] = 0x804e6268u;
        a.r[3] = 0x804e627cu;
        a.r[4] = 0x804e6280u;
        (void)tc_call(0x8023e21cu, &a);
    }
    a.r[0] = (u32)rd16(0x804e623au);
    a.r[1] = (u32)rd16(0x804e6236u);
    a.r[2] = (u32)rd8(r30);
    a.r[3] = (u32)rd16(r30 + 2u);
    a.r[4] = (u32)rd16(r30 + 4u);
    a.r[5] = (u32)rd16(r30 + 6u);
    a.r[6] = (u32)rd16(r30 + 8u);
    a.r[7] = (u32)rd16(r30 + 0xau);
    a.s[0] = rd32(0x804e6270u);
    (void)tc_call(0x8023e5b4u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
