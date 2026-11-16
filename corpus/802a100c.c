#include "tc_rt.h"

void fn_802a100c(s32 param_1, s32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 c1gt = 0, c1lt = 0, ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    TcArgs a = {0};
    r7 = param_5;
    wr16((u32)param_1 + 4u, 0u);
    r0 = param_4;
    wr8((u32)param_1 + 8u, 5u);
    wr8((u32)param_1 + 9u, 0xcu);
    if ((u32)param_2 != 0u) {
        wr16((u32)param_1 + 2u, (u16)(param_5 + 5u));
        r8 = (u32)param_1 + 0xdu;
        wr8((u32)param_1 + 0xau, (u8)(param_5 + 2u));
        wr8((u32)param_1 + 0xbu, (u8)param_2);
        wr8((u32)param_1 + 0xcu, (u8)param_3);
        if ((u32)param_3 == 1u) {
            r7 = (param_5 - 6u) & 0xffu;
            wr8(r8, rd8(param_4 + 2u));
            r0 = param_4 + 6u;
            wr8(r8 + 1u, rd8(param_4 + 1u));
            wr8(r8 + 2u, rd8(param_4));
            wr8(r8 + 3u, rd8(param_4 + 5u));
            wr8(r8 + 4u, rd8(param_4 + 4u));
            wr8(r8 + 5u, rd8(param_4 + 3u));
            r8 = r8 + 6u;
        } else {
            if ((u32)param_3 == 2u) {
                r7 = (param_5 - 6u) & 0xffu;
                wr8(r8, rd8(param_4 + 5u));
                r0 = param_4 + 6u;
                wr8(r8 + 1u, rd8(param_4 + 4u));
                wr8(r8 + 2u, rd8(param_4 + 3u));
                wr8(r8 + 3u, rd8(param_4 + 2u));
                wr8(r8 + 4u, rd8(param_4 + 1u));
                wr8(r8 + 5u, rd8(param_4));
                r8 = r8 + 6u;
            }
        }
        c1lt = (s32)r7 < 0;
        c1gt = (s32)r7 > 0;
        if (r7 == 0u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8029db78u, &a);
            return;
        }
        r9 = 0u;
        if (!c1gt) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8029db78u, &a);
            return;
        }
        r5 = r7 - 8u;
        if ((s32)r7 > 8) {
            r6 = 0u;
            if (!c1lt && (s32)r7 <= 2147483646) {
                r6 = 1u;
            }
            if (r6 != 0u) {
                ctr = ((r5 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r5 > 0) {
                    do {
                        r4 = (u32)rd8(r9 + r0);
                        r5 = r0 + r9;
                        r9 = r9 + 8u;
                        wr8(r8, (u8)r4);
                        wr8(r8 + 1u, rd8(r5 + 1u));
                        wr8(r8 + 2u, rd8(r5 + 2u));
                        wr8(r8 + 3u, rd8(r5 + 3u));
                        wr8(r8 + 4u, rd8(r5 + 4u));
                        wr8(r8 + 5u, rd8(r5 + 5u));
                        wr8(r8 + 6u, rd8(r5 + 6u));
                        wr8(r8 + 7u, rd8(r5 + 7u));
                        r8 = r8 + 8u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r5 = r0 + r9;
        ctr = r7 - r9;
        if ((s32)r9 >= (s32)r7) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x8029db78u, &a);
            return;
        }
        do {
            r0 = (u32)rd8(r5);
            r5 = r5 + 1u;
            wr8(r8, (u8)r0);
            r8 = r8 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    } else {
        wr16((u32)param_1 + 2u, 4u);
        wr8((u32)param_1 + 0xau, 1u);
        wr8((u32)param_1 + 0xbu, (u8)param_2);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8029db78u, &a);
    return;
}
