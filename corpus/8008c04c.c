#include "tc_rt.h"

void fn_8008c04c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((rd32(0x8057118cu) & 1u) != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x8008c1b0u, &a);
        if (r3 != 0u) {
            wr32(0x80571160u, 1u);
            return;
        }
    }
    a.r[0] = param_1;
    r3 = tc_call(0x8008c318u, &a);
    if (r3 != 0u) {
        wr32(0x80571168u, 1u);
    }
    return;
}
