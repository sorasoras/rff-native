#include "tc_rt.h"

void fn_8015a314(s32 param_1)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x6acu;
    r30 = 0u;
    do {
        if ((u32)((s32)((rd32(r31 + 0x34u) << 2u) & 0xc0000000u) >> 31) != 0u) {
            a.r[0] = r31;
            a.r[1] = 1u;
            (void)tc_call(0x80159390u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x3cu;
    } while ((s32)r30 < 4);
    wr32((u32)param_1 + 0x79cu, 0u);
    return;
}
