#include "tc_rt.h"

void fn_8014afa4(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 1u;
    r3 = tc_call(0x801bfb7cu, &a);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    r3 = tc_call(0x800f9458u, &a);
    wr32((u32)param_1 + 0xcu, r3);
    wr32(r3 + 0xd4u, 0u);
    return;
}
