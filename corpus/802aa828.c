#include "tc_rt.h"

void fn_802aa828(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c1gt = 0, c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = (u32)rd16((u32)param_1 + 0x28u);
    r0 = (u32)rd8((u32)param_1 + 0x31u) + 1u;
    wr8((u32)param_1 + 0x31u, (u8)r0);
    a.r[0] = r3;
    a.r[1] = (u32)param_3;
    a.r[2] = 8u;
    a.r[3] = r0 & 0xffu;
    r3 = tc_call(0x802a9ad4u, &a);
    f1 = tc_lastf();
    r6 = 0u;
    r8 = 0u;
    r5 = r3;
    if (r3 == 0u) {
        if ((u32)rd8(0x80540a20u) < 2u) {
            return;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80001u;
        a.r[1] = 0x80396b44u;
        a.r[2] = r3;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8028cc54u, &a);
    } else {
        c1lt = param_3 < 0;
        c1gt = param_3 > 0;
        r7 = r3 + 0x14u;
        if ((u32)param_3 != 0u) {
            r8 = 0u;
            if (c1gt) {
                r4 = (u32)param_3 - 8u;
                if (param_3 > 8) {
                    r6 = 0u;
                    if (!c1lt && param_3 <= 2147483646) {
                        r6 = 1u;
                    }
                    if (r6 != 0u) {
                        ctr = ((r4 + 7u) >> 3u) & 0x1fffffffu;
                        if ((s32)r4 > 0) {
                            do {
                                r0 = (u32)rd8((u32)param_2 + r8);
                                r3 = (u32)param_2 + r8;
                                r8 = r8 + 8u;
                                wr8(r7, (u8)r0);
                                wr8(r7 + 1u, rd8(r3 + 1u));
                                wr8(r7 + 2u, rd8(r3 + 2u));
                                wr8(r7 + 3u, rd8(r3 + 3u));
                                wr8(r7 + 4u, rd8(r3 + 4u));
                                wr8(r7 + 5u, rd8(r3 + 5u));
                                wr8(r7 + 6u, rd8(r3 + 6u));
                                wr8(r7 + 7u, rd8(r3 + 7u));
                                r7 = r7 + 8u;
                                ctr = ctr - 1u;
                            } while (ctr != 0u);
                        }
                    }
                }
                r3 = (u32)param_2 + r8;
                ctr = (u32)param_3 - r8;
                if ((s32)r8 < param_3) {
                    do {
                        r0 = (u32)rd8(r3);
                        r3 = r3 + 1u;
                        wr8(r7, (u8)r0);
                        r7 = r7 + 1u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
            }
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802a7e04u, &a);
    }
    return;
}
