#include "tc_rt.h"

u32 fn_80088abc(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    r30 = (u32)param_1 + 0x22a0u;
    r29 = (u32)param_1 + 0x230cu;
    r27 = 0u;
    do {
        if (rd32(r31 + 0x2294u) != 0u) {
            r28 = r30;
            r26 = 0u;
            do {
                a.r[0] = r28;
                a.r[1] = param_2;
                a.r[2] = param_3;
                r3 = tc_call(0x800b67a0u, &a);
                if (r3 != 0u) {
                    r3 = 0u;
                    wr32(param_4, rd32((u32)param_1 + (r27 * 0xa8u) + 0x2298u));
                    wr32(param_5, 1u);
                    return r3;
                }
                r26 = r26 + 1u;
                r28 = r28 + 0x24u;
            } while (r26 < 3u);
            a.r[0] = r29;
            a.r[1] = param_2;
            a.r[2] = param_3;
            r3 = tc_call(0x800b67a0u, &a);
            if (r3 != 0u) {
                r4 = (u32)param_1 + (r27 * 0xa8u);
                wr32(param_4, rd32(r4 + 0x2298u));
                wr32(param_5, 2u);
                wr32(0x8057116cu, rd32(r4 + 0x229cu));
                a.r[0] = rd32(r4 + 0x2298u);
                (void)tc_call(0x801b06c8u, &a);
                r3 = 1u;
                return r3;
            }
        }
        r27 = r27 + 1u;
        r30 = r30 + 0xa8u;
        r29 = r29 + 0xa8u;
        r31 = r31 + 0xa8u;
    } while ((s32)r27 < 12);
    r3 = 0u;
    return r3;
}
