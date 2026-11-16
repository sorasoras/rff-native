#include "tc_rt.h"

u32 fn_801f88d0(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    if (rd32((u32)param_1 + 0x744u) != 0u) {
        r3 = tc_call(0x801f888cu, &a);
        a.r[0] = r3;
        r3 = tc_call(0x800d595cu, &a);
        if (r3 == 0u) {
            r31 = 1u;
        }
    }
    return r31;
}
