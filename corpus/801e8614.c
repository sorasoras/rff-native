#include "tc_rt.h"

void fn_801e8614(s32 param_1)
{
    u32 r4 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    r29 = (u32)param_1;
    r28 = 0u;
    do {
        r4 = rd32(r29 + 0x9dcu);
        if (r4 != 0xffffffffu) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = r4;
            (void)tc_call(0x801206f4u, &a);
            wr32(r29 + 0x9dcu, 0xffffffffu);
        }
        r28 = r28 + 1u;
        r29 = r29 + 4u;
    } while ((s32)r28 < 20);
    return;
}
