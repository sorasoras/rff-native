#include "tc_rt.h"

u32 fn_800a3520(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x800a3514u, &a);
    r0 = ppc_cntlzw(r3 ^ param_2);
    r0 = ((r0 & 0x20u) != 0u) ? 0u : (r3 << (r0 & 0x1fu));
    return (r0 >> 0x1fu) & 1u;
}
