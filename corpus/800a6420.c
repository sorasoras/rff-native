#include "tc_rt.h"

u32 fn_800a6420(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = param_1;
    r3 = tc_call(0x800a63d4u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800a6478u, &a);
        if (r3 == 0u) {
            r31 = 1u;
        }
    }
    return r31;
}
