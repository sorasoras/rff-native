#include "tc_rt.h"

void fn_801ce2f4(s32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    TcArgs a = {0};
    (void)param_2;
    if ((u32)param_3 == 5u && (u32)param_4 == 1u) {
        wr32((u32)param_1 + 0xd28u, 5u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801cec94u, &a);
        return;
    }
    if ((u32)param_3 == 4u && (u32)param_4 == 1u) {
        a.f[0] = (f64)(f32)((f64)rdf32(0x80575ea0u) * (f64)rdf32((u32)param_1 + 0xdb0u));
        a.r[0] = (u32)param_1;
        (void)tc_call(0x801cefccu, &a);
        return;
    }
    if (((u32)param_3 - 2u) <= 1u) {
        wr32((u32)param_1 + 0xd28u, 1u);
        return;
    }
    return;
}
