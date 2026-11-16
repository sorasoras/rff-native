#include "tc_rt.h"

u32 fn_801cdbe4(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        a.f[0] = (f64)rdf32(0x80575ed4u);
        a.r[0] = (u32)param_1;
        a.r[1] = 8u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        (void)tc_call(0x801ccb44u, &a);
        wr32((u32)param_1 + 0xd18u, 1u);
        a.r[0] = (u32)param_1;
        a.r[1] = 0u;
        a.r[2] = 0xdu;
        a.r[3] = 0u;
        (void)tc_call(0x801ce348u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 0xdu;
        a.r[3] = 0u;
        (void)tc_call(0x801ce348u, &a);
        r30 = 2u;
        do {
            r3 = tc_call(0x80040b64u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = r30;
            a.r[2] = 8u;
            a.r[3] = (((r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 2u) & 0x3fffffffu) * 6u)) << 0x13u) & 0xfff80000u) | 1u;
            (void)tc_call(0x801ce368u, &a);
            r30 = r30 + 1u;
        } while (r30 < 0xau);
    } else {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801cea60u, &a);
    }
    return 1u;
}
