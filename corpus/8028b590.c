#include "tc_rt.h"

void fn_8028b590(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x805110a8u;
    a.r[1] = 0u;
    a.r[2] = 0x28ae0u;
    (void)tc_call(0x8000443cu, &a);
    (void)tc_call(0x80289e14u, &a);
    (void)tc_call(0x8028b038u, &a);
    wr8(0x805398aau, 1u);
    wr32(0x80539890u, 0u);
    wr32(0x805398f0u, 0u);
    wr16(0x805398b4u, 0u);
    wr8(0x805110a8u, 0u);
    r3 = tc_call(0x8022c2c4u, &a);
    wr32((((u32)rd8(0x805110a8u) << 2u) & 0xfffffffcu) - 0x7faeef54u, r3);
    wr8(0x805110a8u, (u8)((u32)rd8(0x805110a8u) + 1u));
    return;
}
