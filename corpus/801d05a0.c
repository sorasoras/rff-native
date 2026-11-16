#include "tc_rt.h"

u32 fn_801d05a0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = param_2;
    a.r[1] = param_3;
    r3 = tc_call(0x80031cf8u, &a);
    if (r3 != 0u) {
        r4 = rd32(r3 + 0x50u);
        r3 = 1u;
        wrf32d(param_4, (f64)rdf32(r4 + 0xcu));
        wrf32d(param_4 + 4u, (f64)rdf32(r4 + 0x1cu));
        wrf32d(param_4 + 8u, (f64)rdf32(r4 + 0x2cu));
    } else {
        r3 = 0u;
    }
    return r3;
}
