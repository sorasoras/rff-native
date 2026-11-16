#include "tc_rt.h"

u32 fn_801fc084(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x78u;
    r3 = tc_call(0x801f1144u, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x27cu;
        a.r[1] = 0u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
