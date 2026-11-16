#include "tc_rt.h"

u32 fn_802730c4(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    if (rd32(0x80570c78u) == 0xffffff01u) {
        r31 = 0u;
        wr32(0x80570c78u, 0xffffff02u);
    } else {
        r31 = 1u;
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return (ppc_cntlzw(r31) >> 5u) & 0x7ffffffu;
}
