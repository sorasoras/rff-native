#include "tc_rt.h"

s32 fn_800ff920(u32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = param_1;
    r6 = 0xffffu;
    ctr = 3u;
    do {
        if ((u32)(s8)rd8(r4) == 0u) {
            return 65535;
        }
        r4 = r4 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    if ((u32)rd8(param_1 + 3u) == 0x5fu) {
        r7 = 0u;
        r5 = 0x8033924cu;
        r4 = (u32)(s8)rd8(param_1 + 4u);
        ctr = 0xdu;
        while (r4 != (u32)(s8)rd8(rd32(r5))) {
            r5 = r5 + 4u;
            r7 = r7 + 1u;
            ctr = ctr - 1u;
            if (ctr == 0u) {
                return (s32)r6;
            }
        }
        r6 = r7;
        return (s32)r6;
    }
    return 65535;
}
