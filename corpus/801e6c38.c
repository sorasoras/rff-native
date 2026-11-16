#include "tc_rt.h"

void fn_801e6c38(s32 param_1)
{
    u32 r4 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r29 = 0u;
    r30 = (u32)param_1;
    do {
        r4 = rd32(r30 + 0x3f70u);
        if (r4 != 0xffffffffu) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = r4;
            (void)tc_call(0x801206f4u, &a);
        }
        r29 = r29 + 1u;
        r30 = r30 + 0x18u;
    } while (r29 < 0x14u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801e6570u, &a);
    return;
}
