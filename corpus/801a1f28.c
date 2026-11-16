#include "tc_rt.h"

void fn_801a1f28(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x805758b4u);
    a.r[0] = param_1;
    r3 = tc_call(0x800a993cu, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x801a1e2cu, &a);
    } else {
        r3 = tc_call(0x80040b64u, &a);
        if ((r3 - (((ppc_mulhwu(0xcccccccdu, r3) >> 3u) & 0x1fffffffu) * 0xau)) != 0u) {
            a.r[0] = param_1;
            a.r[1] = 6u;
            (void)tc_call(0x801a1e2cu, &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = 2u;
            (void)tc_call(0x801a1e2cu, &a);
        }
    }
    return;
}
