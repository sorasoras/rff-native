#include "tc_rt.h"

u32 fn_800ccaf4(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    r3 = tc_call(0x800ccf88u, &a);
    for (;;) {
        r0 = (u32)rd16(r3);
        if (r0 == 0u) break;
        if (param_2 == r0) {
            r3 = 1u;
            return r3;
        }
        r3 = r3 + 2u;
    }
    r3 = 0u;
    return r3;
}
