#include "tc_rt.h"

u32 fn_8015b8d8(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x6acu;
    r30 = 0u;
    do {
        if ((u32)((s32)((rd32(r31 + 0x34u) << 1u) & 0xc0000000u) >> 31) != 0u) {
            r3 = 1u;
            return r3;
        }
        a.r[0] = r31;
        r3 = tc_call(0x80159860u, &a);
        if (r3 != 0u) {
            r3 = 1u;
            return r3;
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x3cu;
    } while ((s32)r30 < 4);
    r3 = 0u;
    return r3;
}
