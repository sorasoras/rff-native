#include "tc_rt.h"

void fn_8028b7a8(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    wr32((((u32)rd8(0x805110a8u) << 2u) & 0xfffffffcu) - 0x7faeef54u, r3);
    wr8(0x805110a8u, (u8)((u32)rd8(0x805110a8u) + 1u));
    return;
}
