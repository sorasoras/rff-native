#include "tc_rt.h"

u32 fn_8016dd0c(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8016dbe0u, &a);
    r3 = (u32)rd8(r3 + 1u);
    r3 = (u32)(s8)r3;
    r3 = ((u32)param_2 * 0x14u) + r3;
    r31 = r3 + 0x14u;
    r3 = tc_call(0x80040b64u, &a);
    r3 = (ppc_mulhwu(0xcccccccdu, r3 - (ppc_divwu(r3, r31) * r31)) >> 3u) & 0x1fffffffu;
    if ((s32)r3 <= 0) {
        r3 = 1u;
    }
    if ((s32)r3 > 10) {
        r3 = 0xau;
    }
    return r3;
}
