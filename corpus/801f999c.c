#include "tc_rt.h"

s32 fn_801f999c(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = param_1;
    r31 = 0xffffu;
    ctr = 3u;
    do {
        if ((u32)(s8)rd8(r4) == 0u) {
            r3 = 0xffffu;
            return (s32)r3;
        }
        r4 = r4 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if ((u32)rd8(param_1 + 3u) == 0x5fu) {
        if ((u32)rd8(param_1 + 4u) == 0x74u) {
            r29 = param_1 + 5u;
            r30 = 0x80376e08u;
            r27 = 0u;
            do {
                r28 = rd32(r30);
                a.r[0] = r28;
                r3 = tc_call(0x802550d4u, &a);
                r4 = r29;
                r0 = r3 - 1u;
                r6 = 0u;
                ctr = r3;
                if ((s32)r3 > 0) {
                    do {
                        r5 = (u32)(s8)rd8(r28);
                        if (r5 != (u32)(s8)rd8(r4)) break;
                        if (r6 == r0) {
                            r31 = r27;
                            break;
                        }
                        if (r5 == 0u) break;
                        r6 = r6 + 1u;
                        r4 = r4 + 1u;
                        r28 = r28 + 1u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                }
                if (r31 != 0xffffu) break;
                r27 = r27 + 1u;
                r30 = r30 + 4u;
            } while ((s32)r27 < 6);
            r3 = r31;
        } else {
            r3 = 0xffffu;
        }
    } else {
        r3 = 0xffffu;
    }
    return (s32)r3;
}
