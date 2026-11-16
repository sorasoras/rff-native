#include "tc_rt.h"

void fn_800f7f90(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0u;
    wr32(0x817fdff8u, 0u);
    wr32(param_1 + 0xcu, rd32(param_1 + 0x14u));
    for (;;) {
        a.r[0] = param_1 + 4u;
        a.r[1] = 0x817fdfe8u;
        r3 = tc_call(0x8027622cu, &a);
        if (r3 == 0u) break;
        r31 = r31 + 1u;
    }
    wr32(param_1, r31);
    return;
}
