#include "tc_rt.h"

s32 fn_8029d58c(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x80295360u, &a);
    if (r3 != 0u) {
        r3 = r3 + 0x10u;
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
