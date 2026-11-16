#include "tc_rt.h"

u32 fn_8021d5e8(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = param_1;
    r31 = 0xffffu;
    ctr = 3u;
    do {
        if ((u32)(s8)rd8(r4) == 0u) {
            r3 = 0xffffu;
            return r3;
        }
        r4 = r4 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if ((u32)rd8(param_1 + 3u) == 0x5fu) {
        if ((u32)rd8(param_1 + 4u) == 0x78u) {
            r29 = rd32(0x80570a08u);
            r30 = param_1 + 5u;
            a.r[0] = r29;
            r3 = tc_call(0x802550d4u, &a);
            r0 = r3 - 1u;
            r5 = 0u;
            ctr = r3;
            if ((s32)r3 > 0) {
                for (;;) {
                    r4 = (u32)(s8)rd8(r29);
                    if (r4 != (u32)(s8)rd8(r30)) {
                        r3 = r31;
                        return r3;
                    }
                    if (r5 == r0) break;
                    if (r4 == 0u) {
                        r3 = r31;
                        return r3;
                    }
                    r5 = r5 + 1u;
                    r30 = r30 + 1u;
                    r29 = r29 + 1u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        r3 = r31;
                        return r3;
                    }
                }
                r31 = 0u;
            }
            r3 = r31;
            return r3;
        }
        r3 = 0xffffu;
        return r3;
    }
    r3 = 0xffffu;
    return r3;
}
