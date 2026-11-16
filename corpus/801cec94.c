#include "tc_rt.h"

void fn_801cec94(s32 param_1)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    r29 = 0u;
    do {
        r28 = rd32(r30 + 0xe38u);
        if (r28 != 0u) {
            a.r[0] = r28;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = r28;
                (void)tc_call(0x80157f30u, &a);
            }
            wr32(r30 + 0xe38u, 0u);
        }
        r29 = r29 + 1u;
        r30 = r30 + 4u;
    } while ((s32)r29 < 20);
    return;
}
