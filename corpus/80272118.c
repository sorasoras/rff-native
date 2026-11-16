#include "tc_rt.h"

u32 fn_80272118(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0x8038f5d0u;
    a.r[2] = 8u;
    r3 = tc_call(0x8025bfccu, &a);
    r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    return r3;
}
