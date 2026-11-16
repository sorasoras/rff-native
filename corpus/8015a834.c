#include "tc_rt.h"

u32 fn_8015a834(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if ((rd32((u32)param_1 + 0x14u) + 0x10000u) == 0xffffu) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800a6420u, &a);
        if (r3 == 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800a6478u, &a);
            if (r3 == 0u) {
                r31 = 1u;
            }
        }
    }
    return r31;
}
