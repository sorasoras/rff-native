#include "tc_rt.h"

s32 fn_8018d054(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = tc_call(0x80040b64u, &a);
    r3 = (u32)param_2 + (r3 - ppc_divwu(r3, 1u));
    r0 = r3 + 1u;
    r3 = (r0 >> 0x1fu) & 1u;
    r0 = r0 & 1u;
    r0 = r0 ^ r3;
    r3 = r0 - r3;
    return (s32)r3;
}
