#include "tc_rt.h"

u32 fn_801fdec4(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = (u32)param_1 + 0xd0u;
    r3 = tc_call(0x800f84d0u, &a);
    if (r3 != 2u) {
        a.r[0] = (u32)param_1 + 0xd0u;
        r3 = tc_call(0x800f84d0u, &a);
        if (r3 != 3u) {
            a.r[0] = (u32)param_1 + 0xd0u;
            r3 = tc_call(0x800f84d0u, &a);
            if (r3 != 4u) {
                return r31;
            }
        }
    }
    r31 = 1u;
    return r31;
}
