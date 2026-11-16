#include "tc_rt.h"

u32 fn_8017a9e4(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8017a96cu, &a);
    if ((s32)r3 < 0) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        a.r[1] = r3;
        r3 = tc_call(0x8017aef8u, &a);
    }
    return r3;
}
