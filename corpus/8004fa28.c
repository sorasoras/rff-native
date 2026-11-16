#include "tc_rt.h"

u32 fn_8004fa28(u32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = rd32(param_1);
    a.r[0] = 0x803c65d0u;
    a.r[1] = rd32(r31 + 0xcu);
    a.r[2] = (rd32(param_1 + 4u) * 0x2cu) - 0x7fc39730u;
    a.r[3] = 0u;
    (void)tc_call(0x80305240u, &a);
    wr32(r31 + 0x328u, 1u);
    return 0u;
}
