#include "tc_rt.h"

s32 fn_80158ec8(s32 param_1, s32 param_2, s32 param_3, s32 param_4, s32 param_5, s32 param_6, u32 param_7, u32 param_8)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    TcArgs a = {0};
    if ((s32)rd32((u32)param_1 + 0x7a0u) > param_2) {
        a.r[0] = (u32)param_1 + 0x68cu;
        r3 = tc_call(0x800a63d4u, &a);
        r4 = 0xffffffffu;
        r3 = r3 + (((u32)param_2 << 3u) & 0xfffffff8u);
        r5 = 0u;
        r0 = (u32)rd8(r3 + 4u);
        r6 = 0u;
        r3 = rd32(r3);
        r7 = 0u;
        r0 = (u32)(s8)r0;
        r8 = 0u;
        ctr = r0;
        if ((s32)r0 > 0) {
            do {
                if ((u32)(s8)rd8(r3 + 1u) == (u32)param_4 && (u32)(s8)rd8(r3 + 2u) == (u32)param_5) {
                    if ((u32)(s8)rd8(r3) == (u32)param_3) {
                        r4 = r8;
                        r7 = 1u;
                    } else if ((s32)r4 < 0) {
                        r4 = r8;
                    }
                    r0 = (u32)(s8)rd8(r3 + 3u);
                    if (r0 != 0x7fu) {
                        if ((u32)param_6 != 2u || r0 == 0u) {
                            r5 = 1u;
                        } else {
                            r4 = r0;
                            r5 = 0u;
                            r6 = 1u;
                        }
                    } else {
                        r5 = 0u;
                    }
                    if (r7 != 0u) break;
                }
                r8 = r8 + 1u;
                r3 = r3 + 4u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        if ((s32)r4 >= 0) {
            if (param_7 != 0u) {
                wr32(param_7, r5);
            }
            if (param_8 != 0u) {
                wr32(param_8, r6);
            }
            r3 = r4 + rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7fc97138u);
        } else {
            r3 = 0xffffffffu;
        }
    } else {
        r3 = 0xffffffffu;
    }
    return (s32)r3;
}
