#include "tc_rt.h"

u32 fn_8008ca14(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    for (;;) {
        a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0x4150u) * 0x4150u);
        a.r[1] = r31;
        a.r[2] = 0u;
        r3 = tc_call(0x80088bc4u, &a);
        if (r3 != 0u) break;
        r31 = r31 + 1u;
        if (r31 >= 0x40u) {
            r3 = 0u;
            return r3;
        }
    }
    f0 = (f64)rdf32(0x80572964u);
    wrf32d(param_2, (f64)rdf32(r3 + 4u));
    f1 = (f64)rdf32(r3 + 8u);
    r3 = 1u;
    wrf32d(param_2 + 8u, f1);
    wrf32d(param_2 + 4u, f0);
    return r3;
}
