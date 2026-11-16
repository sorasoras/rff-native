#include "tc_rt.h"

u32 fn_80190000(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x80190050u, &a);
    if (r3 != 0u) {
        a.r[0] = param_2;
        r3 = tc_call(0x800a4500u, &a);
        r31 = r3;
    }
    return r31;
}
