#include "tc_rt.h"

u32 fn_80175004(s32 param_1)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32(0x80574f08u);
    r0 = 1u;
    f1 = (f64)rdf32((u32)param_1 + 0x164u);
    if ((f1 < f0) || (f1 == f0)) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80175160u, &a);
        r0 = 0u;
    }
    wrf32d((u32)param_1 + 0x164u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x164u) - (f64)rdf32(0x80574f0cu)));
    return r0;
}
