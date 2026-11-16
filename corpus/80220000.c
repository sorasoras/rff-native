#include "tc_rt.h"

u32 fn_80220000(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    wr32(0x817fdf70u, 0x817fe000u);
    r6 = 0x817fdf74u;
    r5 = 0x8033c87cu;
    ctr = 0x10u;
    do {
        r4 = rd32(r5 + 4u);
        r5 = r5 + 8u;
        r0 = rd32(r5);
        wr32(r6 + 4u, r4);
        wr32(r6 + 8u, r0);
        r6 = r6 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7e802088u);
}
