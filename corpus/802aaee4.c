#include "tc_rt.h"

u32 fn_802aaee4(u32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0;
    r5 = 0u;
    r4 = 0x80541070u;
    ctr = 8u;
    do {
        if ((u32)rd8(r4) == 0u) {
            wr8(r4, 1u);
            wr16(r4 + 2u, (u16)param_1);
            return r4;
        }
        r5 = r5 + 1u;
        r4 = r4 + 0x2cu;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0u;
}
