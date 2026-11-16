#include "tc_rt.h"

void fn_80255f50(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(0x80570be8u) == 0xfffffffeu) {
        a.r[0] = 0x80030864u;
        a.r[1] = 0x80579e40u;
        r3 = tc_call(0x80255fc0u, &a);
        wr32(0x80570be8u, r3);
    }
    return;
}
