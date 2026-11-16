#include "tc_rt.h"

void fn_8007ac64(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    (void)param_1;
    r5 = param_3;
    r6 = param_4;
    if ((u32)param_2 != 0u) {
        if (param_3 == 0u) {
            r6 = 0x180u;
            r5 = 0x80489180u;
        }
        r7 = r5 + (((r6 + 0x1fu) >> 3u) & 0x1ffffffcu);
        r4 = (ppc_mulhwu(0x51eb851fu, (u32)param_2 - r7) >> 5u) & 0x7ffffffu;
        if (r4 < r6) {
            r3 = (r4 >> 3u) & 0x1fffffffu;
            r4 = r4 & 7u;
            r4 = ((r4 & 0x20u) != 0u) ? 0u : (u32)(128 >> (s32)(r4 & 0x1fu));
            wr8(r5 + r3, (u8)((u32)rd8(r5 + r3) & ~(r4 & 0xffu)));
        } else {
            a.r[0] = 0x51ec0000u;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = 0.0;
            r3 = tc_call(0x800545e4u, &a);
            r6 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = (u32)param_2;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = (u32)param_2;
                    (void)tc_call(0x80094ec0u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = (u32)param_2;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
        }
    }
    return;
}
