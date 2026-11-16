#include "tc_rt.h"

void fn_800b2af0(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r5 = 0, r7 = 0;
    r5 = 0x8049f178u;
    r7 = 0u;
    ctr = 0xau;
    do {
        if (rd32(r5) == 0u) {
            r0 = (r7 << 2u) & 0xfffffffcu;
            wr32(r0 - 0x7fb60e88u, param_1);
            wr32(r0 - 0x7fb60eb0u, param_2);
            return;
        }
        r5 = r5 + 4u;
        r7 = r7 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
