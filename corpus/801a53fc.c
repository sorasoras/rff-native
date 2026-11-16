#include "tc_rt.h"

void fn_801a53fc(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        r0 = rd32((u32)param_1 + 0x9cu);
        wr32((u32)param_1 + 0xdc0u, 1u);
        r0 = r0 | 0x2000000u;
        f1 = (f64)rdf32(0x80575934u);
        wr32((u32)param_1 + 0x9cu, r0);
        a.f[0] = f1;
        a.r[0] = (u32)param_1;
        a.r[1] = 0xcu;
        a.r[2] = 1u;
        (void)tc_call(0x800a94c0u, &a);
        r4 = rd32((u32)param_1 + 0xf04u);
        wr32((u32)param_1 + 0xf00u, 0x1eu);
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        (void)tc_call(0x801a39d0u, &a);
    } else {
        if ((u32)param_2 == 1u) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a39dcu, &a);
            f1 = (f64)rdf32((u32)param_1 + 0xde0u);
            f0 = (f64)rdf32(0x805758f4u);
            if ((f1 > f0) || (f1 == f0)) {
                wr32((u32)param_1 + 0x2b0u, 1u);
                r3 = tc_call(0x80040b64u, &a);
                r5 = 0u;
                r3 = r3 - (((ppc_mulhwu(0xcccccccdu, r3) >> 3u) & 0x1fffffffu) * 0xau);
                if (r3 <= rd32(0x805708f0u)) {
                    r5 = 1u;
                    if ((s32)rd32(0x8046ad7cu) > 8) {
                        r5 = 0u;
                    }
                }
                if (r5 != 0u) {
                    wr32((u32)param_1 + 0x260u, 8u);
                } else {
                    wr32((u32)param_1 + 0x260u, 0x10u);
                }
            }
        }
    }
    return;
}
