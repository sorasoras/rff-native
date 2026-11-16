#include "tc_rt.h"

void fn_800c9ce8(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_2;
    r3 = tc_call(0x8025e7a4u, &a);
    r31 = r3;
    if ((r3 + rd32((u32)param_1 + 0x48cu)) < 0x200u) {
        if (rd32((u32)param_1 + 0x490u) != 0u) {
            wr32((u32)param_1 + 0x490u, 1u);
            a.r[0] = (u32)param_1 + 0xcu;
            a.r[1] = 0x80570750u;
            (void)tc_call(0x8025e820u, &a);
        }
        wr32((u32)param_1 + 0x48cu, rd32((u32)param_1 + 0x48cu) + r31);
        a.r[0] = (u32)param_1 + 0xcu;
        a.r[1] = param_2;
        (void)tc_call(0x8025e820u, &a);
    }
    return;
}
