#include "tc_rt.h"

u32 fn_8029c1fc(u32 param_r3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x802952a8u, &a);
    if (r3 != 0u && ((u32)rd8(r3 + 0x81u) & 0x40u) != 0u) {
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
