#include "tc_rt.h"

u32 fn_8010ec48(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = 0xfffffffcu;
    a.r[1] = param_2;
    a.r[2] = 1u;
    r3 = tc_call(0x8010d6f0u, &a);
    r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    return r3;
}
