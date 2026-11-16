#include "tc_rt.h"

u32 fn_800a69a4(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7488u, &a);
    if (r3 == 0x50u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800a4500u, &a);
        if (r3 != 0u) {
            r3 = (u32)rd8(r3 + 0x205u);
        } else {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8020e584u, &a);
            if (r3 != 0u) {
                r3 = 0u;
            } else {
                r3 = (u32)rd8(((u32)param_1 * 0x38u) - 0x7fb64fcau);
            }
        }
    }
    return r3;
}
