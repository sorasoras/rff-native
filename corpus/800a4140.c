#include "tc_rt.h"

u32 fn_800a4140(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_1 < 0) {
        r3 = 0x803540e6u;
    } else {
        (void)tc_call(0x80097da4u, &a);
        r3 = tc_call(0x8009a634u, &a);
        if (param_1 >= (s32)r3) {
            r3 = 0x803540f6u;
        } else {
            a.r[0] = 0x804ac83cu;
            a.r[1] = (u32)param_1;
            r3 = tc_call(0x801655f0u, &a);
        }
    }
    return r3;
}
