#include "tc_rt.h"

u32 fn_800f3c58(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x128u);
    if (r0 == 1u) {
        r3 = 0u;
    } else {
        if (r0 == 0u) {
            wr32((u32)param_1 + 0x128u, 3u);
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            (void)tc_call(0x800f3b14u, &a);
        }
        r3 = 1u;
    }
    return r3;
}
