#include "tc_rt.h"

u32 fn_801f1144(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    r3 = tc_call(0x800f84d0u, &a);
    r3 = (ppc_cntlzw(r3) >> 5u) & 0x7ffffffu;
    return r3;
}
