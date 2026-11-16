#include "tc_rt.h"

void fn_801dc4f0(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r10 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x8025bbd4u, &a);
    r8 = rd32(0x8033c0b4u);
    r0 = rd32(0x8033c0b8u);
    wr32(0x817fdfd8u, rd32(0x8033c0b0u));
    r10 = (u32)((s32)ppc_mulhw(1717986919, (s32)r3) >> 1);
    r7 = rd32(0x8033c0bcu);
    r6 = rd32(0x8033c0c0u);
    r10 = r10 + ((r10 >> 0x1fu) & 1u);
    wr32(0x817fdfdcu, r8);
    wr32(0x817fdfe0u, r0);
    r3 = r3 - (r10 * 5u);
    wr32(0x817fdfe4u, r7);
    wr32(0x817fdfe8u, r6);
    r3 = rd32(((r3 << 2u) & 0xfffffffcu) - 0x7e802028u);
    a.r[0] = r3;
    a.r[1] = param_1;
    (void)tc_call(0x801dc4b4u, &a);
    return;
}
