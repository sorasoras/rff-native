#include "tc_rt.h"

void fn_8012db64(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x805712a8u);
    if (r31 != 0u) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = r31;
        (void)tc_call(0x801b3a38u, &a);
        wr32(0x805712a8u, 0u);
    }
    return;
}
