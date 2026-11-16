#include "tc_rt.h"

void fn_801c0f64(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x80571398u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801bfe58u, &a);
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = rd32(0x80571398u);
        (void)tc_call(0x801b3a38u, &a);
        wr32(0x80571398u, 0u);
    }
    return;
}
