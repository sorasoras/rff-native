#include "tc_rt.h"

void fn_80179f08(u32 param_1, u32 param_r4)
{
    u32 r0 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x80179d4cu, &a);
    f0 = (f64)rdf32(0x80575010u);
    wrf32d(0x817fdff0u, f0);
    wrf32d(0x817fdfecu, f0);
    wrf32d(0x817fdfe8u, f0);
    a.r[0] = param_1;
    f1 = tc_callf(0x80234428u, &a);
    if (f1 > (f64)rdf32(0x80575018u)) {
        f1 = (f64)rdf32(0x80575010u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(param_1) && f1 == (f64)rdf32(param_1 + 4u)) && f1 == (f64)rdf32(param_1 + 8u)) {
            r0 = 1u;
        }
        if (r0 != 0u) {
            return;
        }
        a.r[0] = param_1;
        a.r[1] = param_1;
        (void)tc_call(0x802343e4u, &a);
    } else {
        f1 = (f64)rdf32(0x817fdfecu);
        f0 = (f64)rdf32(0x817fdff0u);
        wrf32d(param_1, (f64)rdf32(0x817fdfe8u));
        wrf32d(param_1 + 4u, f1);
        wrf32d(param_1 + 8u, f0);
    }
    return;
}
