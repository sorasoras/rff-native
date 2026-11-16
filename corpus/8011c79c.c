#include "tc_rt.h"

u32 fn_8011c79c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x802ee818u, &a);
        r3 = r3 & 0xffffu;
    } else {
        r3 = 0u;
    }
    return r3;
}
