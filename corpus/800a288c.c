#include "tc_rt.h"

s32 fn_800a288c(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80040b64u, &a);
    r4 = (u32)param_1 + 1u;
    r3 = r3 - (ppc_divwu(r3, r4) * r4);
    return (s32)r3;
}
