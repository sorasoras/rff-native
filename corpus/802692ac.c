#include "tc_rt.h"

void fn_802692ac(u32 param_1)
{
    u32 r0 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfacu;
    a.r[1] = 0u;
    a.r[2] = 0x40u;
    (void)tc_call(0x8000446cu, &a);
    r4 = rd32(0x8038f454u);
    wr32(0x817fdfacu, 0x40u);
    wr8(0x817fdfb0u, 0x91u);
    wr32(0x817fdfb4u, r4);
    a.r[0] = 0x817fdfa8u;
    a.r[1] = r4;
    (void)tc_call(0x8026a16cu, &a);
    r0 = (u32)rd16(0x8038f45cu);
    wr32(0x817fdfb8u, rd32(0x817fdfa8u));
    wr32(0x817fdfbcu, r0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfacu;
    a.r[2] = 0x40u;
    (void)tc_call(0x802669f4u, &a);
    return;
}
