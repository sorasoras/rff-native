#include "tc_rt.h"

u32 fn_80141274(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80141168u, &a);
    if (r3 == 0u) {
        return 1u;
    }
    a.r[0] = param_1;
    (void)tc_call(0x801412bcu, &a);
    return 1u;
}
