#include "tc_rt.h"

u32 fn_8029a674(u32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0;
    r4 = 0x8053d958u;
    r5 = 0u;
    ctr = 2u;
    do {
        if (rd32(r4 + 0x192cu) == 0u) {
            wr32(((r5 << 2u) & 0xfffffffcu) - 0x7fac0d7cu, param_1);
            return 1u;
        }
        r4 = r4 + 4u;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0u;
}
