#include "tc_rt.h"

void fn_8005768c(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 0u;
    (void)tc_call(0x800575b8u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = 1u;
    (void)tc_call(0x800575b8u, &a);
    (void)tc_call(0x8003d6c4u, &a);
    r3 = (u32)param_1 + ((u32)param_2 * 0x28u);
    a.f[0] = (f64)rdf32(r3 + 0x94u);
    a.f[1] = (f64)rdf32(r3 + 0x98u);
    a.f[2] = (f64)rdf32(r3 + 0x9cu);
    a.r[0] = rd32((u32)param_1 + ((u32)param_2 * 0x30u));
    (void)tc_call(0x8003db38u, &a);
    return;
}
