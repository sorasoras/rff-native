#include "tc_rt.h"

void fn_8019893c(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r4 = 0u;
    if (rd32(0x80571170u) != 0u && (rd32(0x8057118cu) & 0x8000u) != 0u) {
        r4 = 1u;
    }
    if (r4 != 0u) {
        f0 = (f64)rdf32(0x80575644u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xb0u) + (f64)rdf32(0x80575640u));
        wrf32d((u32)param_1 + 0xb0u, f1);
        if ((f1 > f0) || (f1 == f0)) {
            wrf32d((u32)param_1 + 0xb0u, (f64)rdf32(0x8057563cu));
        }
    }
    r3 = tc_call(0x80081034u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = r3 & 0xffu;
    (void)tc_call(0x801989d0u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80084004u, &a);
    return;
}
