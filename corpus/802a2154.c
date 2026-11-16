#include "tc_rt.h"

void fn_802a2154(s32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r4 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    TcArgs a = {0};
    r8 = param_2 | 0xfc00u;
    c1lt = param_3 < 0;
    wr16((u32)param_1 + 2u, (u16)((u32)param_3 + 3u));
    r9 = (u32)param_1 + 0xbu;
    r10 = 0u;
    wr16((u32)param_1 + 4u, 0u);
    wr8((u32)param_1 + 8u, (u8)r8);
    wr8((u32)param_1 + 9u, (u8)((s32)r8 >> 8));
    wr8((u32)param_1 + 0xau, (u8)param_3);
    if (param_3 > 0) {
        r7 = (u32)param_3 - 8u;
        if (param_3 > 8) {
            r8 = 0u;
            if (!c1lt && param_3 <= 2147483646) {
                r8 = 1u;
            }
            if (r8 != 0u) {
                ctr = ((r7 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r7 > 0) {
                    do {
                        r0 = (u32)rd8((u32)param_4 + r10);
                        r4 = (u32)param_4 + r10;
                        r10 = r10 + 8u;
                        wr8(r9, (u8)r0);
                        wr8(r9 + 1u, rd8(r4 + 1u));
                        wr8(r9 + 2u, rd8(r4 + 2u));
                        wr8(r9 + 3u, rd8(r4 + 3u));
                        wr8(r9 + 4u, rd8(r4 + 4u));
                        wr8(r9 + 5u, rd8(r4 + 5u));
                        wr8(r9 + 6u, rd8(r4 + 6u));
                        wr8(r9 + 7u, rd8(r4 + 7u));
                        r9 = r9 + 8u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r4 = (u32)param_4 + r10;
        ctr = (u32)param_3 - r10;
        if ((s32)r10 < param_3) {
            do {
                r0 = (u32)rd8(r4);
                r4 = r4 + 1u;
                wr8(r9, (u8)r0);
                r9 = r9 + 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8029db78u, &a);
    return;
}
