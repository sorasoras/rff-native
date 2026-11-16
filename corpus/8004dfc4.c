#include "tc_rt.h"

u32 fn_8004dfc4(f64 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    f0 = (f64)rdf32((u32)param_3 + 0x18u);
    if ((param_1 < f0) || (param_1 == f0)) {
        a.f[0] = param_1;
        a.r[0] = (u32)param_3;
        r3 = tc_call(0x8004df80u, &a);
        if (r3 == 0u) {
            r3 = 0xffffffffu;
            return r3;
        }
        a.f[0] = param_1;
        a.r[0] = param_2;
        a.r[1] = r3;
        r3 = tc_call(0x8004dd70u, &a);
    } else {
        r3 = 0xffffffffu;
    }
    return r3;
}
