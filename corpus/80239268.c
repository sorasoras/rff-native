#include "tc_rt.h"

void fn_80239268(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    wr32(0x805715c4u, 0u);
    if (rd32(0x805715c8u) != 0u) {
        wr32(0x805715c8u, 0u);
        (void)tc_call(0x80237c80u, &a);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
