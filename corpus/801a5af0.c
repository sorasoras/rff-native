#include "tc_rt.h"

void fn_801a5af0(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        a.f[0] = (f64)rdf32(0x80575934u);
        a.r[0] = (u32)param_1;
        a.r[1] = 7u;
        a.r[2] = 1u;
        (void)tc_call(0x800a94c0u, &a);
        wr32((u32)param_1 + 0xeecu, 0u);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xf9fu;
        (void)tc_call(0x8010a74cu, &a);
    } else {
        if ((u32)param_2 == 1u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            (void)tc_call(0x801a37d0u, &a);
            a.r[0] = (u32)param_1;
            a.r[1] = 3u;
            (void)tc_call(0x801a2fdcu, &a);
            if ((s32)rd32((u32)param_1 + 0xd00u) > (s32)rd32((u32)param_1 + 0xee4u)) {
                a.r[0] = (u32)param_1;
                a.r[1] = 0u;
                (void)tc_call(0x801a3958u, &a);
                wr32((u32)param_1 + 0x2b0u, 1u);
                wr32((u32)param_1 + 0x260u, 0xeu);
            }
        }
    }
    return;
}
