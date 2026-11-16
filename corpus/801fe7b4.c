#include "tc_rt.h"

u32 fn_801fe7b4(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x10cu;
    a.r[1] = 0u;
    a.r[2] = 1u;
    r3 = tc_call(0x80130c2cu, &a);
    if (r3 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
        a.r[1] = 3u;
        (void)tc_call(0x800f8544u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x10cu;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x80130b5cu, &a);
    }
    return 1u;
}
