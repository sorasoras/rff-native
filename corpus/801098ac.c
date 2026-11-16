#include "tc_rt.h"

u32 fn_801098ac(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = rd32(param_1) + 0xcdu;
    a.r[1] = 8u;
    r3 = tc_call(0x800f89c4u, &a);
    a.r[0] = r3;
    r3 = tc_call(0x800cd694u, &a);
    r7 = (u32)rd8(0x805740a9u);
    r6 = (u32)rd8(0x805740aau);
    r0 = (u32)rd8(0x805740abu);
    wr8(0x817fdfe8u, rd8(0x805740a8u));
    f1 = (f64)rdf32(0x805740c8u);
    wr8(0x817fdfe9u, (u8)r7);
    wr8(0x817fdfeau, (u8)r6);
    wr8(0x817fdfebu, (u8)r0);
    a.f[0] = f1;
    a.r[0] = param_1;
    a.r[1] = r3;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x801007d0u, &a);
    return 1u;
}
