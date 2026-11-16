#include "tc_rt.h"

u32 fn_8015ce8c(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    a.r[0] = r3;
    r3 = tc_call(0x80096e1cu, &a);
    if (r3 != 0u) {
        r3 = 0u;
    } else {
        r3 = tc_call(0x80097da4u, &a);
        r3 = rd32(r3);
        a.r[0] = r3;
        r3 = tc_call(0x800a3460u, &a);
        if (r3 != 0u) {
            r3 = 0u;
        } else {
            r3 = tc_call(0x80097da4u, &a);
            r3 = rd32(r3 + 0x44u);
            r3 = (ppc_cntlzw(rd32(r3 + 0x490u)) >> 5u) & 0x7ffffffu;
        }
    }
    return r3;
}
