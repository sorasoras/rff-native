#include "tc_rt.h"

u32 fn_802680e8(void)
{
    u32 r7 = 0, r8 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = 0u;
    a.r[2] = 0x40u;
    (void)tc_call(0x8000446cu, &a);
    r8 = rd32(0x80502708u);
    wr8(0x817fdfbcu, 0x80u);
    r7 = r8 + 1u;
    wr32(0x817fdfc4u, r8);
    wr32(0x80502708u, r7);
    wr32(0x817fdfb8u, 0x40u);
    wr8(0x817fdfc0u, 0u);
    wr32(0x80502708u, r7 + 1u);
    wr32(0x817fdfc4u, r7);
    (void)tc_call(0x8026af8cu, &a);
    (void)tc_call(0x8026ac30u, &a);
    return 0u;
}
