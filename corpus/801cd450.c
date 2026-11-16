#include "tc_rt.h"

u32 fn_801cd450(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 1u;
    if ((u32)param_2 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 1u;
        a.r[2] = 3u;
        a.r[3] = 0u;
        (void)tc_call(0x801ce348u, &a);
        wr32((u32)param_1 + 0xd18u, 0u);
        wr32((u32)param_1 + 0xd28u, 0u);
    } else {
        if ((u32)param_2 == 1u) {
            if (rd32((u32)param_1 + 0xd28u) != 1u) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x801cd018u, &a);
                if (r3 == 0u) {
                    return r31;
                }
            }
            r31 = 0u;
        }
    }
    return r31;
}
