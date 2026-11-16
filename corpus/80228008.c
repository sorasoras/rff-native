#include "tc_rt.h"

u64 fn_80228008(s32 param_1)
{
    u32 r0 = 0, r1 = 0, r2 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0, r12 = 0;
    u32 r13 = 0, r14 = 0, r15 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0;
    u32 r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t0 = 0, t1 = 0;
    r6 = rd32((u32)param_1 + 0x198u);
    if (r6 > 0x8022c2b0u && r6 < 0x8022c2bcu) {
        wr32((u32)param_1 + 0x198u, 0x8022c2b0u);
    }
    r0 = rd32((u32)param_1);
    r1 = rd32((u32)param_1 + 4u);
    r2 = rd32((u32)param_1 + 8u);
    r4 = (u32)rd16((u32)param_1 + 0x1a2u);
    if ((r4 & 2u) != 0u) {
        r4 = r4 & 0xfffffffdu;
        wr16((u32)param_1 + 0x1a2u, (u16)r4);
        t0 = (u32)param_1 + 0x14u;
        r5 = rd32(t0);
        r6 = rd32(t0 + 4u);
        r7 = rd32(t0 + 8u);
        r8 = rd32(t0 + 0xcu);
        r9 = rd32(t0 + 0x10u);
        r10 = rd32(t0 + 0x14u);
        r11 = rd32(t0 + 0x18u);
        r12 = rd32(t0 + 0x1cu);
        r13 = rd32(t0 + 0x20u);
        r14 = rd32(t0 + 0x24u);
        r15 = rd32(t0 + 0x28u);
        r16 = rd32(t0 + 0x2cu);
        r17 = rd32(t0 + 0x30u);
        r18 = rd32(t0 + 0x34u);
        r19 = rd32(t0 + 0x38u);
        r20 = rd32(t0 + 0x3cu);
        r21 = rd32(t0 + 0x40u);
        r22 = rd32(t0 + 0x44u);
        r23 = rd32(t0 + 0x48u);
        r24 = rd32(t0 + 0x4cu);
        r25 = rd32(t0 + 0x50u);
        r26 = rd32(t0 + 0x54u);
        r27 = rd32(t0 + 0x58u);
        r28 = rd32(t0 + 0x5cu);
        r29 = rd32(t0 + 0x60u);
        r30 = rd32(t0 + 0x64u);
        r31 = rd32(t0 + 0x68u);
    } else {
        t1 = (u32)param_1 + 0x34u;
        r13 = rd32(t1);
        r14 = rd32(t1 + 4u);
        r15 = rd32(t1 + 8u);
        r16 = rd32(t1 + 0xcu);
        r17 = rd32(t1 + 0x10u);
        r18 = rd32(t1 + 0x14u);
        r19 = rd32(t1 + 0x18u);
        r20 = rd32(t1 + 0x1cu);
        r21 = rd32(t1 + 0x20u);
        r22 = rd32(t1 + 0x24u);
        r23 = rd32(t1 + 0x28u);
        r24 = rd32(t1 + 0x2cu);
        r25 = rd32(t1 + 0x30u);
        r26 = rd32(t1 + 0x34u);
        r27 = rd32(t1 + 0x38u);
        r28 = rd32(t1 + 0x3cu);
        r29 = rd32(t1 + 0x40u);
        r30 = rd32(t1 + 0x44u);
        r31 = rd32(t1 + 0x48u);
    }
    r4 = rd32((u32)param_1 + 0x1a8u);
    r4 = rd32((u32)param_1 + 0x1acu);
    r4 = rd32((u32)param_1 + 0x1b0u);
    r4 = rd32((u32)param_1 + 0x1b4u);
    r4 = rd32((u32)param_1 + 0x1b8u);
    r4 = rd32((u32)param_1 + 0x1bcu);
    r4 = rd32((u32)param_1 + 0x1c0u);
    r4 = rd32((u32)param_1 + 0x80u);
    r4 = rd32((u32)param_1 + 0x84u);
    r4 = rd32((u32)param_1 + 0x88u);
    r4 = rd32((u32)param_1 + 0x8cu);
    r4 = rd32((u32)param_1 + 0x198u);
    r4 = rd32((u32)param_1 + 0x19cu);
    r4 = rd32((u32)param_1 + 0x10u);
    return ((u64)rd32((u32)param_1 + 0xcu) << 0x20ull) | (u64)r4;
}
