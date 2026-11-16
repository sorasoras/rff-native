#include "tc_rt.h"

u32 fn_800d5640(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x800d569cu, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    r3 = tc_call(0x800d56c4u, &a);
    if (r3 != 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x800d569cu, &a);
        a.r[0] = param_1;
        a.r[1] = r3;
        r3 = tc_call(0x800d5504u, &a);
    }
    return r3;
}
