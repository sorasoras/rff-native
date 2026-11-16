#include "tc_rt.h"

u32 fn_800a6b80(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = (u32)param_3;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r3 = tc_call(0x800a39fcu, &a);
    if ((param_2 + (u32)param_3) >= r3) {
        r3 = 0u;
    } else {
        if (param_1 > 0x7fffffffu) {
            r30 = 0u;
        } else {
            r0 = ((((u32)param_3 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_3 & 0x1fu))) - 1u;
            if (param_1 < r0) {
                r0 = param_1;
            }
            r30 = r0;
        }
        if (param_2 < 0x687u) {
            a.r[0] = param_2;
            a.r[1] = (u32)param_3;
            a.r[2] = 0u;
            r3 = tc_call(0x8009abbcu, &a);
            wr32(0x817fdfe8u, r3);
            a.r[0] = 0x817fdfe8u;
            a.r[1] = 0x80352918u;
            a.r[2] = 0x2f7u;
            a.r[3] = 8u;
            a.r[4] = 0x800a6b70u;
            r3 = tc_call(0x80258684u, &a);
            if (r3 == 0u) {
                r3 = 1u;
                return r3;
            }
            r0 = rd32(r3 + 4u);
            if (r30 < r0) {
                r0 = r30;
            }
            r30 = r0;
        }
        r3 = tc_call(0x800a3a04u, &a);
        r0 = param_2 & 7u;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (u32)(128 >> (s32)(r0 & 0x1fu));
        r5 = r0 & 0xffu;
        r3 = r3 + ((param_2 >> 3u) & 0x1fffffffu);
        ctr = (u32)param_3;
        if ((u32)param_3 != 0u) {
            do {
                r0 = r31 - 1u;
                r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                r0 = r30 & r0;
                if (r0 != 0u) {
                    wr8(r3, (u8)((u32)rd8(r3) | r5));
                } else {
                    wr8(r3, (u8)((u32)rd8(r3) & ~r5));
                }
                r5 = (r5 >> 1u) & 0x7fu;
                if (r5 == 0u) {
                    r5 = 0x80u;
                    r3 = r3 + 1u;
                }
                r31 = r31 - 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        r3 = 1u;
    }
    return r3;
}
