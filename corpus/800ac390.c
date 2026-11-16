#include "tc_rt.h"

void fn_800ac390(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 8u, 0u);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x44u);
    wr32(r3 + 0x498u, 0u);
    r3 = tc_call(0x80097da4u, &a);
    r3 = rd32(r3 + 0x40u);
    wr32(r3 + 0x7b8u, 0u);
    return;
}
