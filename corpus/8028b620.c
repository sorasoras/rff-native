#include "tc_rt.h"

void fn_8028b620(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr32((((u32)rd8(0x805110a8u) << 2u) & 0xfffffffcu) - 0x7faeef54u, r3);
    wr8(0x805110a8u, (u8)((u32)rd8(0x805110a8u) + 1u));
    wr8(0x805398aau, 0u);
    r3 = (u32)rd8(0x805110a8u) - 1u;
    wr8(0x805110a8u, (u8)r3);
    r3 = ((r3 << 2u) & 0x3fcu) - 0x7faeef58u;
    r3 = rd32(r3 + 4u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    while ((u32)rd8(0x805110a8u) != 0u) {
        r3 = (u32)rd8(0x805110a8u) - 1u;
        wr8(0x805110a8u, (u8)r3);
        r3 = ((r3 << 2u) & 0x3fcu) - 0x7faeef58u;
        r3 = rd32(r3 + 4u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
