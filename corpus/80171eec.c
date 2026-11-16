#include "tc_rt.h"

void fn_80171eec(s32 param_1)
{
    u32 ctr = 0, fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r25 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    (void)tc_call(0x800f95b4u, &a);
    wr8((u32)param_1 + 0x17acu, 0x3cu);
    r31 = 0u;
    r28 = 0u;
    wr32((u32)param_1 + 0x17a4u, 0u);
    wr32((u32)param_1 + 0x17a8u, 0u);
    wr8((u32)param_1 + 0x17b8u, 0x3cu);
    wr32((u32)param_1 + 0x17b0u, 0u);
    wr32((u32)param_1 + 0x17b4u, 0u);
    wr8((u32)param_1 + 0x17c4u, 0x3cu);
    wr32((u32)param_1 + 0x17bcu, 0u);
    wr32((u32)param_1 + 0x17c0u, 0u);
    wr8((u32)param_1 + 0x17d0u, 0x3cu);
    wr32((u32)param_1 + 0x17c8u, 0u);
    wr32((u32)param_1 + 0x17ccu, 0u);
    wr8((u32)param_1 + 0x17dcu, 0x3cu);
    wr32((u32)param_1 + 0x17d4u, 0u);
    wr32((u32)param_1 + 0x17d8u, 0u);
    wr8((u32)param_1 + 0x17e8u, 0x3cu);
    wr32((u32)param_1 + 0x17e0u, 0u);
    wr32((u32)param_1 + 0x17e4u, 0u);
    wr8((u32)param_1 + 0x17f4u, 0x3cu);
    wr32((u32)param_1 + 0x17ecu, 0u);
    wr32((u32)param_1 + 0x17f0u, 0u);
    wr8((u32)param_1 + 0x1800u, 0x3cu);
    wr32((u32)param_1 + 0x17f8u, 0u);
    wr32((u32)param_1 + 0x17fcu, 0u);
    do {
        r3 = r28 - 0x7fb66fa0u;
        r6 = (u32)rd16(r3 + 0x11cu);
        do {
            if (r6 != 0x2e8u) {
                r0 = (u32)rd8(r3 + 0x11fu);
                r7 = 0u;
                r3 = 0u;
                ctr = 0x3cu;
                for (;;) {
                    r5 = r3 - 0x7fb66fa0u;
                    r4 = (u32)rd16(r5 + 0x1e0u);
                    if (r4 != 0x2e8u && r4 == r6 && (u32)rd8(r5 + 0x1e3u) == r0) {
                        fl_ = 2u;
                        break;
                    }
                    r7 = r7 + 1u;
                    r3 = r3 + 4u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        fl_ = 1u;
                        break;
                    }
                }
                if (fl_ == 2u) {
                    fl_ = 0u;
                } else if (fl_ == 1u) {
                    fl_ = 0u;
                    break;
                }
                wr8(r30 + 0x17acu, (u8)r7);
                a.r[0] = 0x80472f48u;
                a.r[1] = (u32)rd16(r5 + 0x1e0u);
                r3 = tc_call(0x800bede4u, &a);
                wr32(r30 + 0x17a4u, r3);
                r3 = tc_call(0x800545e4u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0x48u;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0x48u;
                        r3 = tc_call(0x80094e80u, &a);
                    }
                    r25 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x48u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    r25 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    a.r[1] = rd32(r30 + 0x17a4u);
                    (void)tc_call(0x800514a0u, &a);
                }
                wr32(r30 + 0x17a8u, r25);
            }
        } while (0);
        r31 = r31 + 1u;
        r28 = r28 + 6u;
        r30 = r30 + 0xcu;
    } while ((s32)r31 < 8);
    return;
}
