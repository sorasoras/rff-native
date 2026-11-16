#include "tc_rt.h"

u32 fn_800abc3c(s32 param_1)
{
    u32 r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800ac2c4u, &a);
    if (r3 != 0u) {
        f1 = (f64)rdf32((u32)param_1 + 0x54u);
        f0 = (f64)rdf32(0x80572bccu);
        if ((f1 > f0) || (f1 == f0)) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800abca8u, &a);
            r3 = 0u;
            return r3;
        }
        r3 = 1u;
    } else {
        r3 = 1u;
        wrf32d((u32)param_1 + 0x54u, (f64)rdf32(0x80572bc0u));
    }
    return r3;
}
