#include "tc_rt.h"

void fn_802f3694(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    r12 = (u32)rd16(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    r10 = (u32)rd16(param_2 + 2u);
    r9 = (u32)rd16(param_2 + 4u);
    r8 = (u32)rd16(param_2 + 6u);
    r7 = (u32)rd16(param_2 + 8u);
    r6 = (u32)rd16(param_2 + 0xau);
    r5 = (u32)rd16(param_2 + 0xcu);
    r0 = (u32)rd16(param_2 + 0xeu);
    wr16(0x817fdfd8u, (u16)r12);
    wr16(0x817fdfdau, 0u);
    wr16(0x817fdfdcu, (u16)r10);
    wr16(0x817fdfdeu, 0u);
    wr16(0x817fdfe0u, (u16)r9);
    wr16(0x817fdfe2u, 0u);
    wr16(0x817fdfe4u, (u16)r8);
    wr16(0x817fdfe6u, 0u);
    wr16(0x817fdfe8u, (u16)r7);
    wr16(0x817fdfeau, 0u);
    wr16(0x817fdfecu, (u16)r6);
    wr16(0x817fdfeeu, 0u);
    wr16(0x817fdff0u, (u16)r5);
    wr16(0x817fdff2u, 0u);
    wr16(0x817fdff4u, (u16)r0);
    wr16(0x817fdff6u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd8u;
    (void)tc_call(0x802f4348u, &a);
    return;
}
