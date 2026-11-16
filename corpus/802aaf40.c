#include "tc_rt.h"

u32 fn_802aaf40(u32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0;
    r5 = 0u;
    r4 = 0x80541070u;
    ctr = 2u;
    do {
        if ((u32)rd8(r4) != 0u && (u32)rd16(r4 + 2u) == param_1) {
            return r4;
        }
        r4 = r4 + 0x2cu;
        r5 = r5 + 1u;
        if ((u32)rd8(r4) != 0u && (u32)rd16(r4 + 2u) == param_1) {
            return r4;
        }
        r4 = r4 + 0x2cu;
        r5 = r5 + 1u;
        if ((u32)rd8(r4) != 0u && (u32)rd16(r4 + 2u) == param_1) {
            return r4;
        }
        r4 = r4 + 0x2cu;
        r5 = r5 + 1u;
        if ((u32)rd8(r4) != 0u && (u32)rd16(r4 + 2u) == param_1) {
            return r4;
        }
        r5 = r5 + 1u;
        r4 = r4 + 0x2cu;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0u;
}
