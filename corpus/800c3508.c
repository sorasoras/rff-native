#include "tc_rt.h"

u32 fn_800c3508(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    if ((rd32(0x80499094u) & 0x20u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 0x20u;
        r3 = tc_call(0x801a8f18u, &a);
        if (r3 == 0u) {
            r31 = 0u;
        }
    }
    if (r31 != 0u) {
        r3 = 0u;
    } else {
        if (((rd32(0x80499094u) & 0x10u) == 0u && ((ppc_cntlzw(rd32(0x80571188u) & 0x10u) >> 5u) & 0x7ffffffu) != 0u) && rd32(0x805711ecu) == 0u) {
            r3 = 1u;
            return r3;
        }
        r3 = 0u;
    }
    return r3;
}
