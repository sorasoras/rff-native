#include "tc_rt.h"

u32 fn_802c0cdc(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1 + 0x20u);
    a.r[1] = rd32(param_1);
    r3 = tc_call(0x802c197cu, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = rd32(param_1 + 0x20u);
        a.r[1] = rd32(param_1);
        a.r[2] = param_2;
        r3 = tc_call(0x802c1998u, &a);
    }
    return r3;
}
