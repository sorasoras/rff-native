#include "tc_rt.h"

u32 fn_801b3c78(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x800fa3f4u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu);
        (void)tc_call(0x800fa318u, &a);
        r3 = 0u;
    } else {
        r3 = 1u;
    }
    return r3;
}
