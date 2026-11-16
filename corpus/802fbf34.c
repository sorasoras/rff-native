#include "tc_rt.h"

u32 fn_802fbf34(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = param_1;
    c0lt = param_5 < 3;
    if ((u32)param_5 == 3u) {
        r3 = 0u;
        do {
            r5 = rd32(param_2);
            r3 = (r3 << 7u) & 0xffffff80u;
            wr32(param_2, r5 + 1u);
            r5 = (u32)rd8(r5);
            r3 = r3 | (r5 & 0x7fu);
        } while ((r5 & 0x80u) != 0u);
    } else if (!c0lt) {
        c0lt = param_5 < 5;
        if ((u32)param_5 == 5u) {
            r3 = rd32(param_2);
            wr32(param_2, r3 + 1u);
            r4 = (u32)rd8(r3);
            if ((s32)r4 >= 32) {
                if ((s32)r4 >= 48) {
                    r3 = 0u;
                } else {
                    r4 = r4 - 0x20u;
                    a.r[0] = param_4;
                    a.r[1] = r4;
                    r3 = tc_call(0x802ffe00u, &a);
                }
            } else {
                a.r[0] = param_3;
                a.r[1] = r4;
                r3 = tc_call(0x802fdfbcu, &a);
            }
            if (r3 != 0u) {
                r3 = (u32)(s16)rd16(r3);
            }
        } else if (c0lt) {
            r6 = rd32(param_2);
            r7 = r6 + 1u;
            wr32(param_2, r7);
            r3 = r7 + 1u;
            r5 = r3 + 1u;
            r6 = (u32)rd8(r6);
            wr32(param_2, r3);
            r7 = (u32)rd8(r7);
            r7 = (r7 & 0xffff00ffu) | ((r6 << 8u) & 0xff00u);
            wr32(param_2, r5);
            r30 = (u32)(s16)r7;
            r3 = (u32)rd8(r3);
            wr32(param_2, r5 + 1u);
            r31 = ((u32)rd8(r5) & 0xffff00ffu) | ((r3 << 8u) & 0xff00u);
            r3 = tc_call(0x8030e918u, &a);
            r3 = (u32)((s32)((r3 & 0xffffu) * ((u32)(s16)r31 - r30 + 1u)) >> 16) + r30;
        }
    } else {
        c0lt = param_5 < 1;
        if ((u32)param_5 == 1u) {
            r3 = rd32(param_2);
            wr32(param_2, r3 + 1u);
            r3 = (u32)rd8(r3);
        } else if (!c0lt) {
            r5 = rd32(param_2);
            r3 = r5 + 1u;
            wr32(param_2, r3);
            r5 = (u32)rd8(r5);
            wr32(param_2, r3 + 1u);
            r3 = (u32)rd8(r3);
            r3 = (r3 & 0xffff00ffu) | ((r5 << 8u) & 0xff00u);
        }
    }
    return r3;
}
