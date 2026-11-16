#include "tc_rt.h"

u32 fn_802e5528(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 4u;
    r31 = rd32((u32)param_1 + 4u);
    while (r31 != r30) {
        r29 = r31 - 4u;
        a.r[0] = r29 + 0x18u;
        a.r[1] = param_2;
        r3 = tc_call(0x802ef340u, &a);
        if (r3 != 0u) {
            r3 = r29;
            return r3;
        }
        r31 = rd32(r31);
    }
    r3 = 0u;
    return r3;
}
