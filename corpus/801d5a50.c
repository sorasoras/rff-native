#include "tc_rt.h"

s32 fn_801d5a50(u32 param_1)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80040b64u, &a);
    r5 = (r3 >> 2u) & 0x3fffffffu;
    r31 = r5 - (((ppc_mulhwu(0x51eb851fu, r5) >> 5u) & 0x7ffffffu) * 0x64u);
    a.r[0] = param_1;
    r3 = tc_call(0x801d55f8u, &a);
    r4 = rd32(r3 + 0x48u);
    if ((s32)r31 <= (s32)r4) {
        r3 = 1u;
    } else {
        r0 = rd32(r3 + 0x4cu);
        r3 = r31 ^ 0x80000000u;
        r0 = r0 + r4;
        r0 = r0 - r31;
        ca = (r0 + r3) < r0;
        r0 = r0 + r3;
        r3 = (u32)((u64)~r0 + (u64)r0 + (u64)ca) + 3u;
    }
    return (s32)r3;
}
