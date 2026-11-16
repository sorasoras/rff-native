#include "tc_rt.h"

u32 fn_8016dbf4(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r29 = ((u32)param_2 << 1u) & 0xfffffffeu;
    a.r[0] = param_1;
    r3 = tc_call(0x8016dbe0u, &a);
    r30 = r29 + (u32)(s8)rd8(r3 + 1u);
    r3 = tc_call(0x80040b64u, &a);
    if ((r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u)) < r30) {
        a.r[0] = param_1;
        r3 = tc_call(0x8016dbe0u, &a);
        r3 = rd32(r3 + 4u);
    } else {
        r3 = tc_call(0x80040b64u, &a);
        r3 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
        if (r3 < (r29 + 1u)) {
            r29 = 0x64u;
            r3 = tc_call(0x80040b64u, &a);
            r31 = 0u;
            r30 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
            do {
                a.r[0] = r31;
                r3 = tc_call(0x8016dbccu, &a);
                r29 = r29 - (u32)(s8)rd8(r3 + 4u);
                if ((s32)r30 >= (s32)r29) {
                    a.r[0] = r31;
                    r3 = tc_call(0x8016dbccu, &a);
                    r3 = rd32(r3);
                    return r3;
                }
                r31 = r31 + 1u;
            } while ((s32)r31 <= 10);
            r3 = 0u;
        } else {
            a.r[0] = param_1;
            r3 = tc_call(0x8016dbe0u, &a);
            r3 = rd32(r3 + 8u);
        }
    }
    return r3;
}
