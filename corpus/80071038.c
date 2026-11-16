#include "tc_rt.h"

u32 fn_80071038(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, t4 = 0;
    u32 t8 = 0, t12 = 0, t16 = 0, t20 = 0;
    f64 t1 = 0.0, t2 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x70u);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        a.r[1] = param_3;
        r3 = tc_call(0x80031be0u, &a);
        if (r3 != 0u) {
            r3 = rd32(r3 + 0x50u);
            t1 = (f64)rdf32(r3);
            t2 = (f64)rdf32(r3 + 4u);
            t4 = r3 + 8u;
            t8 = r3 + 0x10u;
            t12 = r3 + 0x18u;
            t16 = r3 + 0x20u;
            t20 = r3 + 0x28u;
            r3 = 1u;
            r12 = ppc_single_bits((f64)rdf32(t4));
            r11 = ppc_single_bits((f64)rdf32(t4 + 4u));
            r10 = ppc_single_bits((f64)rdf32(t8));
            r9 = ppc_single_bits((f64)rdf32(t8 + 4u));
            r8 = ppc_single_bits((f64)rdf32(t12));
            r7 = ppc_single_bits((f64)rdf32(t12 + 4u));
            r6 = ppc_single_bits((f64)rdf32(t16));
            r5 = ppc_single_bits((f64)rdf32(t16 + 4u));
            r4 = ppc_single_bits((f64)rdf32(t20));
            r0 = ppc_single_bits((f64)rdf32(t20 + 4u));
            wr32(param_2, ppc_single_bits(t1));
            wr32(param_2 + 4u, ppc_single_bits(t2));
            wr32(param_2 + 8u, r12);
            wr32(param_2 + 0xcu, r11);
            wr32(param_2 + 0x10u, r10);
            wr32(param_2 + 0x14u, r9);
            wr32(param_2 + 0x18u, r8);
            wr32(param_2 + 0x1cu, r7);
            wr32(param_2 + 0x20u, r6);
            wr32(param_2 + 0x24u, r5);
            wr32(param_2 + 0x28u, r4);
            wr32(param_2 + 0x2cu, r0);
        } else {
            r3 = 0u;
        }
    }
    return r3;
}
