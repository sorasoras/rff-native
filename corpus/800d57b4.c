#include "tc_rt.h"

u32 fn_800d57b4(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x800d57a4u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x800d569cu, &a);
    } else {
        r3 = 0xffffffffu;
    }
    return r3;
}
