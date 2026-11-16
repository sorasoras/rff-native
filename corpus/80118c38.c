#include "tc_rt.h"

u32 fn_80118c38(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80118bccu, &a);
    if (r3 != 0u) {
        a.r[0] = ((u32)param_1 * 0x18u) - 0x7fb43ee8u;
        r3 = tc_call(0x800a63d4u, &a);
    } else {
        r3 = 0u;
    }
    return r3;
}
