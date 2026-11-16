#include "tc_rt.h"

u32 fn_80088d34(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    r30 = (u32)param_1 + 0x2a7cu;
    r29 = 0u;
    do {
        if (rd32(r31 + 0x2a74u) == 1u) {
            a.r[0] = r30;
            a.r[1] = param_2;
            a.r[2] = param_3;
            r3 = tc_call(0x800b67a0u, &a);
            if (r3 != 0u) {
                r3 = 1u;
                wr32(param_4, rd32((u32)param_1 + (r29 * 0x2cu) + 0x2a78u));
                return r3;
            }
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x2cu;
        r31 = r31 + 0x2cu;
    } while (r29 < 0x28u);
    r3 = 0u;
    return r3;
}
