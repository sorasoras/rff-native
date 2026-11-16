#include "tc_rt.h"

u32 fn_80119084(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0xffffffffu;
    a.r[2] = 0xffffffffu;
    r3 = tc_call(0x80118cd8u, &a);
    if ((s32)r3 >= 0 && (r3 + 0xau) == (u32)param_2) {
        r3 = 1u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xffffffffu;
        a.r[2] = 0xffffffffu;
        r3 = tc_call(0x80118da4u, &a);
        if ((s32)r3 >= 0 && (r3 + 0x3e8u) == (u32)param_2) {
            r3 = 1u;
        } else {
            r30 = rd32((u32)param_1 + 0x10u);
            r29 = (u32)(s8)rd8((u32)param_1 + 0x14u);
            a.r[0] = 0x12u;
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x800a51f8u, &a);
            r31 = r3;
            a.r[0] = 0x10u;
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x800a51f8u, &a);
            r0 = (u32)param_2 - 0x7d0u;
            if ((s32)r0 < 0 || (s32)r0 >= (s32)r29) {
                r3 = 0u;
            } else {
                r0 = (r0 << 2u) & 0xfffffffcu;
                r30 = r30 + r0;
                r7 = (u32)rd8(r30 + 2u);
                if ((u32)(s8)r7 == 0u && (u32)(s8)rd8(r30 + 3u) == 0u) {
                    r4 = 0u;
                    if ((u32)(s8)rd8(r30) == r3 && (u32)(s8)rd8(r30 + 1u) == r31) {
                        r4 = 1u;
                    }
                    r3 = r4;
                } else {
                    r3 = r3 & 0xffu;
                    a.r[0] = r3;
                    a.r[1] = r31 & 0xffu;
                    a.r[2] = (u32)rd8(r30);
                    a.r[3] = (u32)rd8(r30 + 1u);
                    a.r[4] = r7;
                    r3 = tc_call(0x80118fd8u, &a);
                }
            }
        }
    }
    return r3;
}
