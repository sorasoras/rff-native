#include "tc_rt.h"

u32 fn_801d28b8(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = 0u;
    if ((u32)param_2 != 0u && (u32)param_2 == 1u) {
        r4 = rd32(param_1 + 0x374u);
        c0eq = r4 == 0u;
        if ((s32)r4 > 0) {
            wr32(param_1 + 0x374u, r4 - 1u);
        } else {
            if (c0eq) {
                r5 = 1u;
                wr32(param_1 + 0x374u, 0xffffffffu);
            }
        }
    }
    if (r5 != 0u) {
        r3 = tc_call(0x80040b64u, &a);
        r0 = r3 - (((ppc_mulhwu(0xaaaaaaabu, r3) >> 1u) & 0x7fffffffu) * 3u);
        if (r0 == 0u) {
            a.r[0] = param_1;
            a.r[1] = 6u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.f[0] = (f64)rdf32(0x80575ed4u);
            (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        } else {
            if (r0 == 1u) {
                a.r[0] = param_1;
                a.r[1] = 7u;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.f[0] = (f64)rdf32(0x80575ed4u);
                (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
            } else {
                if (r0 == 2u) {
                    a.r[0] = param_1;
                    a.r[1] = 8u;
                    a.r[2] = 1u;
                    a.r[3] = 0u;
                    a.f[0] = (f64)rdf32(0x80575ed4u);
                    (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
                }
            }
        }
    }
    return 1u;
}
