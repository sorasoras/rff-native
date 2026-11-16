#include "tc_rt.h"

s32 fn_80142580(s32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)(s8)param_3;
    a.r[3] = param_4;
    r3 = tc_call(0x8014248cu, &a);
    r31 = (u32)(s8)r3;
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)(s8)param_3;
    a.r[3] = param_4;
    r3 = tc_call(0x801424b4u, &a);
    r30 = (u32)(s8)r3;
    r3 = tc_call(0x80040b64u, &a);
    r5 = (u32)rd8((u32)param_1 + 0x4cu);
    r4 = r30 - r31 + 1u;
    r0 = r31 + (r3 - (ppc_divwu(r3, r4) * r4));
    if (r5 != 0u) {
        r0 = r0 + r5 + 1u;
    }
    r3 = 0xau;
    if ((s32)r0 <= 10) {
        r3 = r0;
    }
    wr32((u32)param_1 + 0x30u, r30);
    return (s32)r3;
}
