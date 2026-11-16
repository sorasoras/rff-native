#include "tc_rt.h"

u32 fn_800efadc(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = 0u;
    for (;;) {
        a.r[0] = 0x804b8960u;
        a.r[1] = r4;
        r3 = tc_call(0x802de9f0u, &a);
        r4 = r3;
        if (r3 == 0u) break;
        if (r3 == (u32)param_1) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
