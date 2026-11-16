#include "tc_rt.h"

f64 fn_80159240(s32 param_1)
{
    u32 c0lt = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x801592c4u, &a);
    f31 = f1;
    f1 = tc_callf(0x80159308u, &a);
    c0lt = param_1 < 2;
    if ((u32)param_1 != 2u) {
        if (c0lt) {
            if (param_1 >= 1) {
                f1 = (f64)(f32)(f31 + f1);
                return f1;
            }
            f1 = (f64)rdf32(0x80574960u);
            return f1;
        }
        if (param_1 >= 4) {
            f1 = (f64)rdf32(0x80574960u);
            return f1;
        }
        f1 = (f64)rdf32(0x80574968u);
        return f1;
    }
    f1 = (f64)(f32)(f31 - f1);
    return f1;
}
