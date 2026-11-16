#include "tc_rt.h"

u32 fn_800509cc(void)
{
    u32 ctr = 0, r3 = 0;
    r3 = 0x803c8688u;
    ctr = 0x14u;
    do {
        if (rd32(r3 + 0x58u) == 0u) {
            wr32(r3 + 0x58u, 1u);
            return r3;
        }
        r3 = r3 + 0x5cu;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0u;
}
