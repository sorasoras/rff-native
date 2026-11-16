#include "tc_rt.h"

f64 fn_80079bf8(u32 param_1, u32 param_2)
{
    u32 r4 = 0, r31 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r31 = param_2;
    if (param_2 == 0u) {
        f1 = (f64)rdf32(0x805727e0u);
    } else {
        f31 = (f64)rdf32(0x805727e0u);
        for (;;) {
            r4 = (u32)rd16(r31);
            if (r4 == 0u) break;
            a.r[0] = param_1;
            a.r[1] = r4;
            f1 = tc_callf(0x80079cd4u, &a);
            f31 = (f64)(f32)(f31 + f1);
            r31 = r31 + 2u;
        }
        f1 = f31;
    }
    return f1;
}
