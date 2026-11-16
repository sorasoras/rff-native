#include "tc_rt.h"

void fn_80037b5c(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfb8u;
    (void)tc_call(0x8027293cu, &a);
    a.r[0] = 0x817fdfb8u;
    r3 = tc_call(0x8027287cu, &a);
    if (param_1 != 0u) {
        wr32(param_1, r3);
    }
    return;
}
