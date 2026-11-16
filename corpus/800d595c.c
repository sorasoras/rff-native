#include "tc_rt.h"

u32 fn_800d595c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x800d5148u, &a);
    if (r3 != 0u) {
        r3 = 1u;
    } else {
        a.r[0] = param_1;
        r3 = tc_call(0x800d5158u, &a);
        if (r3 != 0u) {
            r3 = 3u;
        } else {
            a.r[0] = param_1;
            r3 = tc_call(0x800d50b8u, &a);
            r3 = (u32)((s32)((0u - r3) | r3) >> 31) & 2u;
        }
    }
    return r3;
}
