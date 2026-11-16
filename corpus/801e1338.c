#include "tc_rt.h"

void fn_801e1338(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(0x80576234u);
    wr32(0x817fdfe8u, rd32(0x80576230u));
    wr32(0x817fdfecu, r0);
    r3 = tc_call(0x8025bbd4u, &a);
    r3 = rd32(((r3 << 2u) & 4u) - 0x7e802018u);
    a.r[0] = r3;
    a.r[1] = 0u;
    (void)tc_call(0x801dc4b4u, &a);
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = 6u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.f[0] = (f64)rdf32(0x80576208u);
    (void)tc_call(rd32(rd32(r3) + 0x54u), &a);
    return;
}
