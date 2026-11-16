#include "tc_rt.h"

void fn_8023e748(u32 param_r3)
{
    u32 c0eq = 0, ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    u64 t0 = 0, t1 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r5 = rd32(param_r3);
    r29 = r3;
    r3 = r5 & 3u;
    if (rd32(0x804e6254u) != r3) {
        wr32(0x804e6254u, r3);
        wr32(0x805716d0u, 1u);
    }
    r25 = rd32(0x800000ccu);
    r26 = (rd32(param_r3) >> 2u) & 0x3fffffffu;
    if (r26 == 4u && rd32(0x80571704u) == 0u) {
        wr32(0x80571704u, 1u);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80388c9cu;
        a.r[1] = 0x804e6230u;
        a.r[2] = r5;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80228554u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80388cc8u;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80228554u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80388cf4u;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80228554u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80388d20u;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80228554u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80388d4cu;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80228554u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80388d78u;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80228554u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80388c9cu;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80228554u, &a);
    }
    if ((r25 != 1u && r25 != 5u && (r26 == 1u || r26 == 5u)) || ((r25 == 1u || r25 == 5u) && r26 != 1u && r26 != 5u)) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80570b18u;
        a.r[1] = 0xa57u;
        a.r[2] = 0x80388da4u;
        a.r[3] = r25;
        a.r[4] = r26;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802285e4u, &a);
    }
    if (r26 == 0u || r26 == 2u) {
        wr32(0x804e6258u, r25);
    } else {
        wr32(0x804e6258u, r26);
    }
    r0 = rd32(0x804e6254u);
    wr16(0x804e6230u, rd16(param_r3 + 0xau));
    if (r0 != 1u) {
        r8 = (u32)rd16(param_r3 + 0xcu);
    } else {
        r8 = ((u32)rd16(param_r3 + 0xcu) << 1u) & 0xfffeu;
    }
    r6 = (u32)rd16(param_r3 + 0xeu);
    r4 = (u32)rd16(param_r3 + 4u);
    r9 = rd32(0x804e6254u);
    r5 = (u32)rd16(param_r3 + 8u);
    r3 = rd32(param_r3 + 0x14u);
    wr16(0x804e6232u, (u16)r8);
    wr16(0x804e6234u, (u16)r6);
    wr16(0x804e6242u, (u16)r4);
    wr16(0x804e6244u, (u16)r5);
    wr32(0x804e6250u, r3);
    wr16(0x804e624au, (u16)r4);
    wr16(0x804e624cu, (u16)r5);
    wr16(0x804e6246u, 0u);
    wr16(0x804e6248u, 0u);
    if (r9 != 2u && (r9 != 3u && r3 == 0u)) {
        r5 = (r5 << 1u) & 0xfffeu;
    }
    r4 = rd32(0x804e6254u);
    r0 = rd32(0x804e6258u);
    wr16(0x804e6236u, (u16)r5);
    r0 = (r0 << 2u) & 0xfffffffcu;
    wr32(0x804e6274u, (ppc_cntlzw(r4 - 3u) >> 5u) & 0x7ffffffu);
    a.r[0] = r0 + r4;
    r3 = tc_call(0x8023d958u, &a);
    r30 = r3;
    r5 = (u32)(s16)rd16(0x804e6230u);
    r4 = (u32)(s16)rd16(0x805716ccu);
    r8 = 0x2d0u - (u32)rd16(0x804e6234u);
    wr32(0x804e6284u, r3);
    r4 = r5 + r4;
    r7 = (u32)rd16(r3 + 2u);
    if ((s32)r4 <= (s32)r8) {
        r8 = r4 & ~(u32)((s32)r4 >> 31);
    }
    r9 = (u32)(s16)rd16(0x805716ceu);
    r6 = (u32)rd16(0x804e6232u);
    r4 = rd32(0x804e6250u);
    r0 = (u32)(s16)r6;
    r6 = r6 & 1u;
    r10 = r0 + r9;
    wr16(0x804e6238u, (u16)r8);
    r4 = (ppc_cntlzw(r4) >> 5u) & 0x7ffffffu;
    r0 = r6;
    r5 = r4 + 1u;
    if ((s32)r10 > (s32)r6) {
        r0 = r10;
    }
    r7 = (u32)(s16)r7;
    r8 = (r7 << 1u) & 0xfffffffeu;
    r7 = (u32)rd16(0x804e6236u);
    r31 = r8 - r6;
    r28 = r9 + (u32)(s16)rd16(0x804e6232u);
    r8 = (u32)(s16)r7 + r28 - r31;
    r26 = (u32)(s16)rd16(0x804e6232u) + r9 - r6;
    r25 = (u32)(s16)rd16(0x804e6236u) + r28 - r31;
    r27 = r28 - r6;
    wr16(0x804e623au, (u16)r0);
    r9 = (u32)rd16(0x804e624cu);
    r8 = r8 & (u32)((s32)((0u - r8) & ~r8) >> 31);
    r7 = r7 + (r27 & (u32)((s32)r27 >> 31));
    wr16(0x804e623cu, (u16)(r7 - r8));
    r7 = (u32)ppc_divw((s32)(r26 & (u32)((s32)r26 >> 31)), (s32)r5);
    r0 = r9 + (u32)ppc_divw((s32)(r27 & (u32)((s32)r27 >> 31)), (s32)r5);
    r5 = (u32)ppc_divw((s32)(r25 & (u32)((s32)((0u - r25) & ~r25) >> 31)), (s32)r5);
    wr16(0x804e623eu, (u16)((u32)rd16(0x804e6248u) - r7));
    r0 = r0 - r5;
    wr16(0x804e6240u, (u16)r0);
    r5 = (u32)rd16(r3 + 0x18u);
    r4 = (r5 >> 0x1fu) & 1u;
    r7 = (r5 >> 1u) & 0xffffu;
    if (((((r5 & 1u) ^ r4) - r4) & 0xffffu) == 0u) {
        r6 = 0u;
    } else {
        r6 = (u32)rd16(r3 + 0x1au);
    }
    r4 = rd32(0x805716d8u) | 0x40u;
    wr32(0x805716dcu, rd32(0x805716dcu));
    r9 = rd32(0x804e6254u);
    wr32(0x805716d8u, r4);
    r5 = rd32(0x805716dcu);
    r0 = rd32(0x805716d8u) | 0x80u;
    wr16(0x804e61eau, (u16)(r6 + 1u));
    r4 = (u32)rd16(0x804e61bau);
    wr32(0x805716dcu, r5);
    r5 = (u32)rd16(0x804e6224u);
    wr16(0x804e61e8u, (u16)(((r7 + 1u) & 0xffffu) | 0x1000u));
    wr32(0x805716d8u, r0);
    if ((r9 - 2u) > 1u) {
        r4 = r4 & 0xfffffffbu;
        r10 = r5 & 0xfffffffeu;
        r4 = (r4 & 0xfffffffbu) | ((r9 << 2u) & 4u);
    } else {
        r4 = (r4 & 0xfffffffbu) | 4u;
        if (rd32(0x804e6258u) != 8u) {
            r10 = (r5 & 0xfffffffeu) | 1u;
        } else {
            r10 = r5 & 0xfffffffeu;
        }
    }
    r4 = r4 & 0xfffffff7u;
    r5 = rd32(0x804e6258u);
    r8 = rd32(0x804e6274u);
    r7 = (r4 | ((r8 << 3u) & 0xfffffff8u)) & 0xfffffcffu;
    if ((r5 - 1u) <= 2u) {
        r7 = r7 | ((r5 << 8u) & 0xffffff00u);
    }
    r0 = rd32(0x805716d8u) | 0x40000000u;
    wr32(0x805716dcu, rd32(0x805716dcu));
    r4 = (u32)rd16(0x804e624au);
    wr32(0x805716d8u, r0);
    r5 = (u32)rd16(0x804e6234u);
    r3 = rd32(0x805716d8u);
    r0 = rd32(0x805716dcu);
    wr16(0x804e61bau, (u16)r7);
    r0 = r0 | 0x200u;
    wr32(0x805716dcu, r0);
    wr16(0x804e6224u, (u16)r10);
    wr32(0x805716d8u, r3);
    if (r8 != 0u) {
        r4 = (r4 << 1u) & 0x1fffeu;
    }
    r7 = r4 & 0xffffu;
    if (r7 >= r5) {
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
        wr16(0x804e6202u, (u16)(ppc_divwu(r5 + ((r7 << 8u) & 0xffff00u) - 1u, r5) | 0x1000u));
        r0 = r0 | 0x80u;
        wr32(0x805716dcu, r0);
        wr16(0x804e6228u, (u16)r7);
        wr32(0x805716d8u, r3);
    }
    a.r[0] = r30;
    a.r[1] = (u32)rd16(0x804e6238u);
    a.r[2] = r5;
    (void)tc_call(0x8023e4d4u, &a);
    r5 = rd32(0x805716d8u) | 0x100000u;
    r7 = (u32)rd8(r30 + 0xcu) | (((u32)rd16(r30 + 0x10u) << 5u) & 0xffffffe0u);
    r4 = (u32)rd16(0x804e6242u);
    wr32(0x805716dcu, rd32(0x805716dcu));
    r6 = rd32(0x804e6250u);
    r0 = r4 + 0xfu;
    wr32(0x805716d8u, r5);
    ca = ((s32)r0 < 0) && ((r0 & 0xfu) != 0u);
    r4 = (u32)((s32)r0 >> 4);
    c0eq = r6 == 0u;
    r0 = (u32)rd16(0x804e624au);
    wr16(0x804e61ceu, (u16)r7);
    t0 = (u64)r4 + (u64)ca;
    r5 = rd32(0x805716d8u) | 0x200000u;
    r7 = (u32)rd8(r30 + 0xeu) | (((u32)rd16(r30 + 0x14u) << 5u) & 0xffffffe0u);
    r9 = (u32)rd16(0x804e6246u);
    wr32(0x805716dcu, rd32(0x805716dcu));
    wr32(0x805716d8u, r5);
    wr16(0x804e61ccu, (u16)r7);
    r5 = rd32(0x805716d8u) | 0x40000u;
    r7 = (u32)rd8(r30 + 0xdu) | (((u32)rd16(r30 + 0x12u) << 5u) & 0xffffffe0u);
    wr32(0x805716dcu, rd32(0x805716dcu));
    wr32(0x805716d8u, r5);
    wr16(0x804e61d2u, (u16)r7);
    r5 = rd32(0x805716d8u) | 0x80000u;
    r6 = rd32(0x805716dcu);
    r7 = (u32)rd8(r30 + 0xfu) | (((u32)rd16(r30 + 0x16u) << 5u) & 0xffffffe0u);
    wr8(0x804e625cu, (u8)t0);
    wr32(0x805716dcu, r6);
    wr16(0x804e61d0u, (u16)r7);
    wr32(0x805716d8u, r5);
    if (!c0eq) {
        r10 = ((u32)t0 << 1u) & 0xfeu;
    } else {
        r10 = (u32)t0 & 0xffu;
    }
    r4 = (r9 >> 0x1fu) & 1u;
    r3 = ((r9 << 0x1cu) & 0xf0000000u) - r4;
    r5 = rd32(0x805716d8u);
    r3 = (r3 << 4u) | (r3 >> 0x1cu);
    r9 = r3 + r4;
    c0eq = rd32(0x805716f0u) == 0u;
    r0 = r0 + (r9 & 0xffu) + 0xfu;
    ca = ((s32)r0 < 0) && ((r0 & 0xfu) != 0u);
    r8 = (u32)((s32)r0 >> 4);
    r0 = rd32(0x805716dcu) | 0x8000000u;
    wr8(0x804e625du, (u8)r10);
    t1 = (u64)r8 + (u64)ca;
    wr32(0x805716dcu, r0);
    wr8(0x804e626cu, (u8)r9);
    wr8(0x804e625eu, (u8)t1);
    wr16(0x804e6200u, (u16)((r10 & 0xffff00ffu) | (((u32)t1 << 8u) & 0xff00u)));
    wr32(0x805716d8u, r5);
    if (!c0eq) {
        a.r[0] = 0x804e6230u;
        a.r[1] = 0x804e6264u;
        a.r[2] = 0x804e6268u;
        a.r[3] = 0x804e627cu;
        a.r[4] = 0x804e6280u;
        (void)tc_call(0x8023e21cu, &a);
    }
    a.r[0] = (u32)rd16(0x804e623au);
    a.r[1] = (u32)rd16(0x804e623cu);
    a.r[2] = (u32)rd8(r30);
    a.r[3] = (u32)rd16(r30 + 2u);
    a.r[4] = (u32)rd16(r30 + 4u);
    a.r[5] = (u32)rd16(r30 + 6u);
    a.r[6] = (u32)rd16(r30 + 8u);
    a.r[7] = (u32)rd16(r30 + 0xau);
    a.s[0] = rd32(0x804e6270u);
    (void)tc_call(0x8023e5b4u, &a);
    a.r[0] = r29;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
