#include "tc_rt.h"

u32 fn_8010d430(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x60u);
    r3 = rd32(r3 + 0x9bcu);
    if ((s32)r3 < 0) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        r3 = tc_call(0x800a7b08u, &a);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            if ((rd32(0x8057118cu) & 0x1000u) == 0u) {
                r3 = 0u;
            } else {
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0x4cu);
                if (rd32(r3 + 0x48u) != 0u) {
                    r3 = 0u;
                } else {
                    r3 = tc_call(0x80097da4u, &a);
                    r3 = rd32(r3 + 0x4cu);
                    r3 = (ppc_cntlzw(rd32(r3 + 0x44u)) >> 5u) & 0x7ffffffu;
                }
            }
        }
    }
    return r3;
}
