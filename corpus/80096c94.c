#include "tc_rt.h"

s32 fn_80096c94(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x5cu);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = 0u;
    a.r[3] = 1u;
    r3 = tc_call(0x8010ebd4u, &a);
    r3 = (u32)(s8)((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu);
    return (s32)r3;
}
