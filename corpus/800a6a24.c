#include "tc_rt.h"

u32 fn_800a6a24(u32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r7 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800a39fcu, &a);
    if ((param_2 + (u32)param_3) > r3) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x800a3a04u, &a);
        r0 = param_2 & 7u;
        r5 = 0u;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (u32)(128 >> (s32)(r0 & 0x1fu));
        r7 = r0 & 0xffu;
        r3 = r3 + ((param_2 >> 3u) & 0x1fffffffu);
        ctr = (u32)param_3;
        if ((u32)param_3 != 0u) {
            do {
                r5 = (r5 << 1u) & 0xfffffffeu;
                if ((r7 & 0xffu & (u32)rd8(r3)) != 0u) {
                    r5 = r5 | 1u;
                }
                r7 = (r7 >> 1u) & 0x7fu;
                if (r7 == 0u) {
                    r7 = 0x80u;
                    r3 = r3 + 1u;
                }
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        wr32(param_1, r5);
        r3 = 1u;
    }
    return r3;
}
