#include "tc_rt.h"

void fn_801a5f38(f64 param_1, s32 param_2)
{
    u32 r0 = 0, r31 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_2 + 0xee8u) == 0u) {
        f0 = (f64)rdf32(0x805708f4u);
        if (((param_1 > f0) || (param_1 == f0)) && rd32((u32)param_2 + 0xf40u) == 0u) {
            r0 = rd32((u32)param_2 + 0xdf8u);
            wr32((u32)param_2 + 0xf40u, 1u);
            if (r0 == 0u) {
                r31 = 0u;
                do {
                    a.f[0] = (f64)rdf32(0x80575974u);
                    a.r[0] = (u32)param_2;
                    a.r[1] = r31;
                    a.r[2] = 6u;
                    (void)tc_call(0x801a2b64u, &a);
                    r31 = r31 + 1u;
                } while ((s32)r31 < 5);
            } else {
                r31 = 0u;
                do {
                    a.f[0] = (f64)rdf32(0x805758bcu);
                    a.r[0] = (u32)param_2;
                    a.r[1] = r31;
                    a.r[2] = 0xbu;
                    (void)tc_call(0x801a2b64u, &a);
                    r31 = r31 + 1u;
                } while ((s32)r31 < 11);
            }
            a.r[0] = (u32)param_2;
            a.r[1] = 5u;
            (void)tc_call(0x801a2fdcu, &a);
        }
    }
    return;
}
