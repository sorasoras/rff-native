#include "tc_rt.h"

f64 fn_800cc760(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r4 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(0x80572f78u);
    r31 = (u32)param_3;
    for (;;) {
        r4 = (u32)rd16(param_2);
        if (r4 == 0u || r31 == 0u) break;
        a.r[0] = param_1;
        a.r[1] = r4;
        f1 = tc_callf(0x800cca68u, &a);
        f31 = (f64)(f32)(f31 + f1);
        r31 = r31 - 1u;
    }
    return f31;
}
