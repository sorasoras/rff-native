#include "tc_rt.h"

void fn_801a4294(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        if (rd32((u32)param_1 + 0xdc0u) == 0u) {
            a.f[0] = (f64)rdf32((u32)param_1 + 0xd1cu);
            a.f[1] = (f64)rdf32(0x80575934u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x14u;
            (void)tc_call(0x800a9704u, &a);
        } else {
            a.f[0] = (f64)rdf32((u32)param_1 + 0xd1cu);
            a.f[1] = (f64)rdf32(0x80575934u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0xcu;
            (void)tc_call(0x800a9704u, &a);
        }
        wr32((u32)param_1 + 0xef8u, 0u);
        wr32((u32)param_1 + 0xefcu, 0x1eu);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x1eu;
        (void)tc_call(0x801a39d0u, &a);
    } else {
        if ((u32)param_2 == 1u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 4u;
            (void)tc_call(0x801a2fdcu, &a);
            a.r[0] = (u32)param_1;
            (void)tc_call(0x801a39dcu, &a);
            if ((s32)rd32((u32)param_1 + 0xd00u) > 0) {
                wr32((u32)param_1 + 0x2b0u, 1u);
            }
        }
    }
    return;
}
