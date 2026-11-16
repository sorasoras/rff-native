#include "tc_rt.h"

u32 fn_800ccac8(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x800cc578u, &a);
    r3 = (ppc_cntlzw((u32)rd16(r3)) >> 5u) & 0x7ffffffu;
    return r3;
}
