#include "tc_rt.h"

void fn_80088a78(u32 param_1)
{
    u32 r0 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(0x80572908u);
    r0 = 0u;
    if ((f1 == (f64)rdf32(param_1) && f1 == (f64)rdf32(param_1 + 4u)) && f1 == (f64)rdf32(param_1 + 8u)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = param_1;
        a.r[1] = param_1;
        (void)tc_call(0x802343e4u, &a);
        return;
    }
    return;
}
