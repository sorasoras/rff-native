#include "tc_rt.h"

u32 fn_80091a30(u32 param_r4, u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    a.r[1] = param_r4;
    r3 = tc_call(0x8009218cu, &a);
    if ((s32)r3 >= 25) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        r3 = tc_call(0x800bf01cu, &a);
    }
    return r3;
}
