#include "tc_rt.h"

u32 fn_800a3460(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x800a2d40u, &a);
    a.r[0] = r3;
    r3 = tc_call(0x8009bf68u, &a);
    r3 = (ppc_cntlzw((u32)(s8)r3) >> 5u) & 0x7ffffffu;
    return r3;
}
