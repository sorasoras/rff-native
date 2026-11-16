#include "tc_rt.h"

u32 fn_8020bf1c(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((rd32((u32)param_1 + 8u) + 0x10000u) != 0xffffu) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x8020bf8cu, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_1;
    r3 = tc_call(0x8020bfd4u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32((u32)param_1 + 8u, param_2);
        r3 = 1u;
    }
    return r3;
}
