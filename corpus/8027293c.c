#include "tc_rt.h"

u32 fn_8027293c(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32(0x80571aa0u) == 2u) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    if (r0 == 0u) {
        r3 = 0xffffff80u;
    } else {
        a.r[0] = param_1;
        a.r[1] = 0x80503420u;
        (void)tc_call(0x8025bd34u, &a);
        r3 = 0u;
    }
    return r3;
}
