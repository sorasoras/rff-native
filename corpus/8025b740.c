#include "tc_rt.h"

u32 fn_8025b740(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x8038e900u;
    a.r[1] = 0xffffffffu;
    r3 = tc_call(0x8025eb08u, &a);
    if ((s32)r3 >= 0) {
        r3 = 0xffffffffu;
    } else {
        a.r[0] = 0x8025b67cu;
        a.r[1] = 0x8038e900u;
        a.r[2] = param_1;
        a.r[3] = param_2;
        r3 = tc_call(0x8025ae20u, &a);
    }
    return r3;
}
