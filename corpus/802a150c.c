#include "tc_rt.h"

void fn_802a150c(s32 param_1, s32 param_2)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x802550d4u, &a);
    r7 = (r3 + 1u) & 0xffffu;
    wr16((u32)param_1 + 2u, 0xfbu);
    c1lt = (s32)r7 < 0;
    r6 = (u32)param_1 + 0xbu;
    wr16((u32)param_1 + 4u, 0u);
    r8 = 0u;
    wr8((u32)param_1 + 8u, 0x13u);
    wr8((u32)param_1 + 9u, 0xcu);
    wr8((u32)param_1 + 0xau, 0xf8u);
    if ((s32)r7 > 0) {
        r4 = r7 - 8u;
        if ((s32)r7 > 8) {
            r5 = 0u;
            if (!c1lt && (s32)r7 <= 2147483646) {
                r5 = 1u;
            }
            if (r5 != 0u) {
                ctr = ((r4 + 7u) >> 3u) & 0x1fffffffu;
                if ((s32)r4 > 0) {
                    do {
                        r0 = (u32)rd8((u32)param_2 + r8);
                        r3 = (u32)param_2 + r8;
                        r8 = r8 + 8u;
                        wr8(r6, (u8)r0);
                        wr8(r6 + 1u, rd8(r3 + 1u));
                        wr8(r6 + 2u, rd8(r3 + 2u));
                        wr8(r6 + 3u, rd8(r3 + 3u));
                        wr8(r6 + 4u, rd8(r3 + 4u));
                        wr8(r6 + 5u, rd8(r3 + 5u));
                        wr8(r6 + 6u, rd8(r3 + 6u));
                        wr8(r6 + 7u, rd8(r3 + 7u));
                        r6 = r6 + 8u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        r3 = (u32)param_2 + r8;
        ctr = r7 - r8;
        if ((s32)r8 < (s32)r7) {
            do {
                r0 = (u32)rd8(r3);
                r3 = r3 + 1u;
                wr8(r6, (u8)r0);
                r6 = r6 + 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8029db78u, &a);
    return;
}
