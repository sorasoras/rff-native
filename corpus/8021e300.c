#include "tc_rt.h"

u32 fn_8021e300(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    r31 = r3;
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    (void)tc_call(0x80119f48u, &a);
    if (r31 == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
        a.r[1] = 2u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
