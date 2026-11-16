#include "tc_rt.h"

s32 fn_8025beb0(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r3 = param_1;
    r4 = param_2;
    r5 = (u32)rd8(param_1);
    r0 = r5 - (u32)rd8(param_2);
    if (r0 == 0u) {
        r6 = param_1 & 3u;
        if ((param_2 & 3u) == r6) {
            if (r6 != 0u) {
                if (r5 == 0u) {
                    return 0;
                }
                r0 = 3u - r6;
                ctr = r0;
                if (r0 == 0u) {
                    r3 = r3 + 1u;
                    r4 = r4 + 1u;
                } else {
                    do {
                        r3 = r3 + 1u;
                        r5 = (u32)rd8(r3);
                        r4 = r4 + 1u;
                        r0 = r5 - (u32)rd8(r4);
                        if (r0 != 0u) {
                            return (s32)r0;
                        }
                        if (r5 == 0u) {
                            return 0;
                        }
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r3 = r3 + 1u;
                    r4 = r4 + 1u;
                }
            }
            r7 = rd32(r3);
            r8 = rd32(r4);
            if (((r7 - 0x1010101u) & ~r7 & 0x80808080u) == 0u) {
                while (r7 == r8) {
                    r3 = r3 + 4u;
                    r7 = rd32(r3);
                    r4 = r4 + 4u;
                    r8 = rd32(r4);
                    if (((r7 - 0x1010101u) & 0x80808080u) != 0u) break;
                }
            }
            r5 = (u32)rd8(r3);
            r0 = r5 - (u32)rd8(r4);
            if (r0 != 0u) {
                return (s32)r0;
            }
        }
        if (r5 != 0u) {
            do {
                r3 = r3 + 1u;
                r5 = (u32)rd8(r3);
                r4 = r4 + 1u;
                r0 = r5 - (u32)rd8(r4);
                if (r0 != 0u) {
                    return (s32)r0;
                }
            } while (r5 != 0u);
            return 0;
        }
        return 0;
    }
    return (s32)r0;
}
