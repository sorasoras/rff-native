#include "tc_rt.h"

s32 fn_8028b7f0(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x80284b74u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    }
    return (s32)r3;
}
