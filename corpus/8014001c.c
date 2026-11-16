#include "tc_rt.h"

u32 fn_8014001c(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8013f288u, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8013f718u, &a);
        r31 = r3;
        a.r[0] = param_1;
        r3 = tc_call(0x8013f438u, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        r3 = tc_call(0x80140568u, &a);
    } else {
        r3 = 0u;
    }
    return r3;
}
