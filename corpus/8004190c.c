#include "tc_rt.h"

void fn_8004190c(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(0x8034f7f8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x3cu;
        (void)tc_call(0x8024b04cu, &a);
    }
    r3 = rd32(0x8034f7fcu);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x3cu;
        (void)tc_call(0x8024b04cu, &a);
    }
    (void)tc_call(0x8004197cu, &a);
    wr32(0x8034f7ecu, 0u);
    wr32(0x8034f7f0u, 0u);
    (void)tc_call(0x80045d74u, &a);
    return;
}
