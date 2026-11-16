#include "tc_rt.h"

u32 fn_801b6ea8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x800fa628u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 4u;
        a.r[1] = 1u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
