#include "tc_rt.h"

void fn_80052cb0(u32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0;
    r4 = 0x803cba90u;
    r5 = 0u;
    ctr = 0xau;
    do {
        if (r4 == param_1) {
            wr32((r5 * 0x740u) - 0x7fc33e34u, 0u);
            return;
        }
        r4 = r4 + 0x740u;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
