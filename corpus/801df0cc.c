#include "tc_rt.h"

void fn_801df0cc(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801df0bcu, &a);
    if (r3 != 0u) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = rd32((u32)param_1 + 0xd60u);
        (void)tc_call(0x801206f4u, &a);
        wr32((u32)param_1 + 0xd60u, 0xffffffffu);
    }
    return;
}
