#include "tc_rt.h"

u32 fn_802cb528(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0x28u;
    r31 = rd32((u32)param_1 + 0x28u);
    while (r31 != r30) {
        a.r[0] = param_2;
        a.r[1] = r31 + 8u;
        r3 = tc_call(0x8025beb0u, &a);
        if (r3 == 0u) {
            r3 = rd32(r31 + 0x88u);
            return r3;
        }
        r31 = rd32(r31);
    }
    r3 = 0u;
    return r3;
}
