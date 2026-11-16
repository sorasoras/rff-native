#include "tc_rt.h"

void fn_8028b784(void)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = (u32)rd8(0x805110a8u) - 1u;
    wr8(0x805110a8u, (u8)r4);
    a.r[0] = rd32(((r4 << 2u) & 0x3fcu) - 0x7faeef54u);
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
