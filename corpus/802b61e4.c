#include "tc_rt.h"

u32 fn_802b61e4(void)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = 0u;
    r31 = 0x8054165cu;
    ctr = 4u;
    do {
        if ((u32)rd8(r31) == 0u) {
            a.r[0] = r31;
            a.r[1] = 0u;
            a.r[2] = 0x478u;
            (void)tc_call(0x8000443cu, &a);
            wr32(r31 + 0x18u, r31);
            r3 = r31;
            return r3;
        }
        r4 = r4 + 1u;
        r31 = r31 + 0x478u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r3 = 0u;
    return r3;
}
