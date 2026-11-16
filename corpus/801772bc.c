#include "tc_rt.h"

void fn_801772bc(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x202du;
    r3 = tc_call(0x8014d9a4u, &a);
    if (r3 != 1u) {
        wr32((u32)param_1 + 0x2a8u, 0u);
    }
    a.r[0] = 0x202du;
    r3 = tc_call(0x8014d9a4u, &a);
    if (r3 != 2u) {
        wr32((u32)param_1 + 0x2b0u, 0u);
    }
    return;
}
