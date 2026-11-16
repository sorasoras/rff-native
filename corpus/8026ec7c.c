#include "tc_rt.h"

void fn_8026ec7c(void)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80571a70u) == 0u) {
        r3 = tc_call(0x802308e8u, &a);
        wr32(0x80571a80u, r3);
        r3 = tc_call(0x802308f0u, &a);
        r4 = rd32(0x80571a80u);
        wr32(0x80571a7cu, r3);
        wr32(0x80571a78u, r4);
        wr32(0x80571a74u, r3);
        wr8(0x80571a70u, 1u);
    }
    return;
}
