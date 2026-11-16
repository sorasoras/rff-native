#include "tc_rt.h"

void fn_802c0f98(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r4 = rd32(param_1);
    if ((s32)r4 < 4 && (u32)rd8(param_1 + 0x44u) != 0u) {
        a.r[0] = rd32(param_1 + 0x20u);
        a.r[1] = r4;
        r3 = tc_call(0x802c197cu, &a);
        if (r3 == 0u) {
            r3 = rd32(param_1);
            wr8(param_1 + 0x1cu, 1u);
            a.r[0] = r3;
            a.r[1] = 1u;
            (void)tc_call(0x8027a740u, &a);
        }
    }
    return;
}
