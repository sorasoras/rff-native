#include "tc_rt.h"

void fn_801a5b94(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        a.f[0] = (f64)rdf32(0x80575934u);
        a.r[0] = (u32)param_1;
        a.r[1] = 8u;
        a.r[2] = 0u;
        (void)tc_call(0x800a94c0u, &a);
        return;
    }
    if ((u32)param_2 == 1u) {
        if ((s32)rd32((u32)param_1 + 0xd00u) <= 0) {
            return;
        }
        wr32((u32)param_1 + 0x2b0u, 1u);
        return;
    }
    return;
}
