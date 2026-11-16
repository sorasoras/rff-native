#include "tc_rt.h"

u32 fn_801b1ecc(u32 param_1)
{
    u32 r0 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r5 = rd32(0x80372464u);
    r0 = rd32(0x80372468u);
    wr32(0x817fdfe8u, rd32(0x80372460u));
    wr32(0x817fdfecu, r5);
    wr32(0x817fdff0u, r0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x801b2610u, &a);
    (void)tc_call(0x800a7ae0u, &a);
    a.r[0] = 1u;
    a.r[1] = 5u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = 2u;
    a.r[1] = 0x3au;
    (void)tc_call(0x800a6d5cu, &a);
    return 1u;
}
