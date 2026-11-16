#include "tc_rt.h"

void fn_8003ab98(void)
{
    u32 r3 = 0;
    r3 = rd32(0x80570fd8u);
    if (rd32(0x80570fe4u) == r3) {
        r3 = rd32(0x80570fdcu);
    }
    wr32(0x80570fe4u, r3);
    return;
}
