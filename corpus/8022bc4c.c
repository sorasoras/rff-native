#include "tc_rt.h"

void fn_8022bc4c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 ca = 0, ctr = 0, r0 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    TcArgs a = {0};
    r0 = (u32)rd16((u32)param_1 + 0x18u);
    r6 = (u32)param_1 + 0x2cu;
    if (r0 == 0u) {
        r7 = rd32((u32)param_1 + 0x28u);
        r7 = (u32)((s32)(((r7 >> 0x1fu) & 1u) + r7) >> 1);
        r8 = r7 - 1u;
        r7 = (u32)param_2 + r8;
        r9 = (r8 << 1u) & 0xfffffffeu;
        r4 = r8 + 1u;
        if ((s32)r8 < 0) {
            a.r[0] = (u32)param_3;
            a.r[1] = rd32((u32)param_1 + 0x28u);
            (void)tc_call(0x80227768u, &a);
            return;
        }
        r0 = (r4 >> 1u) & 0x7fffffffu;
        ctr = r0;
        if (r0 != 0u) {
            do {
                r0 = (u32)rd8(r7);
                r10 = (u32)param_3 + r9;
                r8 = (r0 >> 6u) & 3u;
                r0 = (r0 >> 4u) & 3u;
                r0 = (u32)rd8(r6 + r0);
                r8 = (u32)rd8(r6 + r8);
                r0 = r0 & 0xfu;
                r0 = (r0 & 0xffffff0fu) | (r8 & 0xf0u);
                wr8((u32)param_3 + r9, (u8)r0);
                r9 = r9 - 2u;
                r0 = (u32)rd8(r7);
                r8 = (r0 >> 2u) & 3u;
                r0 = r0 & 3u;
                r0 = (u32)rd8(r6 + r0);
                r8 = (u32)rd8(r6 + r8);
                r0 = r0 & 0xfu;
                r0 = (r0 & 0xffffff0fu) | (r8 & 0xf0u);
                wr8(r10 + 1u, (u8)r0);
                r10 = (u32)param_3 + r9;
                r0 = (u32)rd8(r7 - 1u);
                r8 = (r0 >> 6u) & 3u;
                r0 = (r0 >> 4u) & 3u;
                r0 = (u32)rd8(r6 + r0);
                r8 = (u32)rd8(r6 + r8);
                r0 = r0 & 0xfu;
                r0 = (r0 & 0xffffff0fu) | (r8 & 0xf0u);
                wr8((u32)param_3 + r9, (u8)r0);
                r9 = r9 - 2u;
                r0 = (u32)rd8(r7 - 1u);
                r7 = r7 - 2u;
                r8 = (r0 >> 2u) & 3u;
                r0 = r0 & 3u;
                r0 = (u32)rd8(r6 + r0);
                r8 = (u32)rd8(r6 + r8);
                r0 = r0 & 0xfu;
                r0 = (r0 & 0xffffff0fu) | (r8 & 0xf0u);
                wr8(r10 + 1u, (u8)r0);
                ctr = ctr - 1u;
            } while (ctr != 0u);
            r4 = r4 & 1u;
            if (r4 == 0u) {
                a.r[0] = (u32)param_3;
                a.r[1] = rd32((u32)param_1 + 0x28u);
                (void)tc_call(0x80227768u, &a);
                return;
            }
        }
        ctr = r4;
        do {
            r0 = (u32)rd8(r7);
            r10 = (u32)param_3 + r9;
            r8 = (r0 >> 6u) & 3u;
            r0 = (r0 >> 4u) & 3u;
            r0 = (u32)rd8(r6 + r0);
            r8 = (u32)rd8(r6 + r8);
            r0 = r0 & 0xfu;
            r0 = (r0 & 0xffffff0fu) | (r8 & 0xf0u);
            wr8((u32)param_3 + r9, (u8)r0);
            r9 = r9 - 2u;
            r0 = (u32)rd8(r7);
            r7 = r7 - 1u;
            r8 = (r0 >> 2u) & 3u;
            r0 = r0 & 3u;
            r0 = (u32)rd8(r6 + r0);
            r8 = (u32)rd8(r6 + r8);
            r0 = r0 & 0xfu;
            r0 = (r0 & 0xffffff0fu) | (r8 & 0xf0u);
            wr8(r10 + 1u, (u8)r0);
            ctr = ctr - 1u;
        } while (ctr != 0u);
    } else {
        if (r0 == 2u) {
            r0 = rd32((u32)param_1 + 0x28u);
            ca = ((s32)r0 < 0) && ((r0 & 3u) != 0u);
            r0 = (u32)((s32)r0 >> 2);
            r9 = (u32)((u64)r0 + (u64)ca) - 1u;
            r7 = (u32)param_2 + r9;
            r8 = (r9 << 2u) & 0xfffffffcu;
            r4 = r9 + 1u;
            if ((s32)r9 >= 0) {
                r0 = (r4 >> 1u) & 0x7fffffffu;
                ctr = r0;
                if (r0 != 0u) {
                    do {
                        r9 = (u32)param_3 + r8;
                        wr8((u32)param_3 + r8, rd8(r6 + (((u32)rd8(r7) >> 6u) & 3u)));
                        r8 = r8 - 4u;
                        wr8(r9 + 1u, rd8(r6 + (((u32)rd8(r7) >> 4u) & 3u)));
                        wr8(r9 + 2u, rd8(r6 + (((u32)rd8(r7) >> 2u) & 3u)));
                        wr8(r9 + 3u, rd8(r6 + ((u32)rd8(r7) & 3u)));
                        r9 = (u32)param_3 + r8;
                        wr8((u32)param_3 + r8, rd8(r6 + (((u32)rd8(r7 - 1u) >> 6u) & 3u)));
                        r8 = r8 - 4u;
                        wr8(r9 + 1u, rd8(r6 + (((u32)rd8(r7 - 1u) >> 4u) & 3u)));
                        wr8(r9 + 2u, rd8(r6 + (((u32)rd8(r7 - 1u) >> 2u) & 3u)));
                        r0 = (u32)rd8(r7 - 1u);
                        r7 = r7 - 2u;
                        r0 = r0 & 3u;
                        r0 = (u32)rd8(r6 + r0);
                        wr8(r9 + 3u, (u8)r0);
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r4 = r4 & 1u;
                    if (r4 == 0u) {
                        a.r[0] = (u32)param_3;
                        a.r[1] = rd32((u32)param_1 + 0x28u);
                        (void)tc_call(0x80227768u, &a);
                        return;
                    }
                }
                ctr = r4;
                do {
                    r9 = (u32)param_3 + r8;
                    wr8((u32)param_3 + r8, rd8(r6 + (((u32)rd8(r7) >> 6u) & 3u)));
                    r8 = r8 - 4u;
                    wr8(r9 + 1u, rd8(r6 + (((u32)rd8(r7) >> 4u) & 3u)));
                    wr8(r9 + 2u, rd8(r6 + (((u32)rd8(r7) >> 2u) & 3u)));
                    r0 = (u32)rd8(r7);
                    r7 = r7 - 1u;
                    r0 = r0 & 3u;
                    r0 = (u32)rd8(r6 + r0);
                    wr8(r9 + 3u, (u8)r0);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
    }
    a.r[0] = (u32)param_3;
    a.r[1] = rd32((u32)param_1 + 0x28u);
    (void)tc_call(0x80227768u, &a);
    return;
}
