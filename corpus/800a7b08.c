#include "tc_rt.h"

u32 fn_800a7b08(s32 param_1)
{
    u32 c1lt = 0, r3 = 0;
    TcArgs a = {0};
    c1lt = param_1 < 0;
    if ((u32)param_1 == 0u) {
        return 1u;
    }
    if (param_1 >= 33 || c1lt) {
        return 0u;
    }
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80074e90u, &a);
    return r3;
}
