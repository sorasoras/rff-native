#include "tc_rt.h"

void fn_801c2d40(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    r29 = 0u;
    wr32((u32)param_1 + 0xd40u, 0u);
    wr32((u32)param_1 + 0xd44u, 0u);
    do {
        r3 = rd32(r30 + 0xd48u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x80157f30u, &a);
        }
        r29 = r29 + 1u;
        wr32(r30 + 0xd48u, 0u);
        r30 = r30 + 4u;
    } while ((s32)r29 < 32);
    return;
}
