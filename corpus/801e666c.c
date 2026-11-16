#include "tc_rt.h"

void fn_801e666c(s32 param_1)
{
    u32 r4 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (u32)param_1;
    r29 = 0u;
    do {
        r4 = rd32(r30 + 0x3f70u);
        if (r4 != 0xffffffffu) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = r4;
            (void)tc_call(0x8010a864u, &a);
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x18u;
    } while (r29 < 0x14u);
    return;
}
