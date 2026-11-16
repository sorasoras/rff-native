#include "tc_rt.h"

void fn_8016ae60(u32 param_1, u32 param_2)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    f1 = (f64)rdf32(0x80574c80u);
    if ((f64)rdf32(param_2 + 0x10cu) > f1) {
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_2) + 0x50u), &a);
        return;
    }
    return;
}
