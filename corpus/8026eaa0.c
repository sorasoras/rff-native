#include "tc_rt.h"

u32 fn_8026eaa0(u32 param_1, u32 param_2, u32 param_r5)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_2 == 0u || (param_2 & 0x1fu) != 0u) {
        return 0xffffff9bu;
    }
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_r5;
    r3 = tc_call(0x8026fb88u, &a);
    return r3;
}
