#include "tc_rt.h"

void fn_800ffdec(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (rd32(param_1) != 0u) {
        a.r[0] = rd32(param_1 + 0xf0u);
        a.r[1] = 0u;
        r3 = tc_call(0x800f7fecu, &a);
        a.r[0] = param_1 + 4u;
        a.r[1] = r3;
        (void)tc_call(0x8025bd34u, &a);
    }
    return;
}
