#include "tc_rt.h"

u32 fn_80133520(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(rd32((u32)param_1 + 0x1cu) + 0x438u, 0u);
    a.r[0] = (u32)param_1 + 0x20u;
    a.r[1] = 1u;
    r3 = tc_call(0x800f857cu, &a);
    if (r3 == 0u) {
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 4u;
        a.r[1] = 2u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
