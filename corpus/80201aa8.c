#include "tc_rt.h"

u32 fn_80201aa8(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0u;
    while ((s32)r30 < (s32)rd32(param_1)) {
        a.r[0] = (u32)param_2 + 0xbcu;
        a.r[1] = rd32(rd32(param_1 + 0x2cu) + r31) + 0xbcu;
        r3 = tc_call(0x800f9514u, &a);
        if (r3 != 0u) {
            r3 = 1u;
            return r3;
        }
        r31 = r31 + 4u;
        r30 = r30 + 1u;
    }
    r3 = 0u;
    return r3;
}
