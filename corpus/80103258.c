#include "tc_rt.h"

u32 fn_80103258(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = 0u;
    a.r[0] = param_2;
    a.r[1] = param_3;
    r3 = tc_call(0x8010341cu, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8010322cu, &a);
        r31 = r3;
    }
    return r31;
}
