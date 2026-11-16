#include "tc_rt.h"

u32 fn_800ab81c(void)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32(0x805706e0u) == 4u && rd32(rd32(0x8057110cu) + 0x18u) != 0u) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x800a7854u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            r0 = rd32(r3 + 0x290u);
            if (r0 == 0u) {
                r3 = 0u;
            } else {
                if (r0 == 1u) {
                    r3 = 0u;
                } else {
                    if (rd32(r3 + 0x110u) != 0u) {
                        r3 = 0u;
                    } else {
                        r3 = tc_call(0x80097da4u, &a);
                        r3 = rd32(r3 + 0x4cu);
                        r3 = (ppc_cntlzw(rd32(r3 + 0x48u)) >> 5u) & 0x7ffffffu;
                    }
                }
            }
        }
    }
    return r3;
}
