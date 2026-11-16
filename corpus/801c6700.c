#include "tc_rt.h"

void fn_801c6700(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 8u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157f30u, &a);
    }
    a.r[0] = (u32)param_2;
    (void)tc_call(0x801c2e10u, &a);
    wr32((u32)param_2 + 0xd34u, 1u);
    return;
}
