#include "tc_rt.h"

u32 fn_80162258(s32 param_1, u32 param_2, u32 param_3)
{
    u32 c1eq = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = param_3;
    r6 = (u32)rd16(param_2);
    if (r6 == 0x2e8u) {
        r3 = 0u;
    } else {
        r0 = (u32)rd8(param_2 + 2u);
        if ((s32)r0 < (s32)param_3 || (s32)param_3 < 0) {
            r29 = r0;
        }
        r0 = (u32)rd16((u32)param_1 + 0xbcu);
        c1eq = r0 == 0x2e8u;
        if (c1eq) {
            a.r[0] = (u32)param_1;
            a.r[1] = r6;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.f[0] = 0.0;
            r3 = tc_call(rd32(rd32((u32)param_1 + 0xccu) + 0x10u), &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            if ((s32)r29 >= 0) {
                wr8(param_2 + 2u, (u8)((u32)rd8(param_2 + 2u) - r29));
            }
            wr16((u32)param_1 + 0xbcu, rd16(param_2));
            wr8((u32)param_1 + 0xbfu, rd8(param_2 + 3u));
            wr8((u32)param_1 + 0xbeu, (u8)r29);
            if ((u32)rd8(param_2 + 2u) == 0u) {
                wr16(param_2, 0x2e8u);
                wr8(param_2 + 3u, 1u);
                wr8(param_2 + 2u, 1u);
            }
            a.r[0] = (u32)param_1;
            (void)tc_call(0x80161a60u, &a);
        } else {
            r5 = 0u;
            if (r6 == r0 && ((u32)rd8(param_2 + 3u) == (u32)rd8((u32)param_1 + 0xbfu) || c1eq)) {
                r5 = 1u;
            }
            if (r5 == 0u) {
                r3 = 0u;
                return r3;
            }
            a.r[0] = r6;
            r3 = tc_call(0x800cd704u, &a);
            r3 = r3 & 0xffu;
            r0 = r29 + (u32)rd8((u32)param_1 + 0xbeu);
            if ((s32)r0 > (s32)r3) {
                r0 = r0 - r3;
                wr8(param_2 + 2u, (u8)r0);
                wr8((u32)param_1 + 0xbeu, (u8)r3);
            } else {
                wr8((u32)param_1 + 0xbeu, (u8)r0);
                r3 = (u32)rd8(param_2 + 2u) - r29;
                wr8(param_2 + 2u, (u8)r3);
                if ((r3 & 0xffu) == 0u) {
                    wr16(param_2, 0x2e8u);
                    wr8(param_2 + 3u, 1u);
                    wr8(param_2 + 2u, 1u);
                }
            }
        }
        r3 = 1u;
    }
    return r3;
}
