#include "tc_rt.h"

void fn_801d0b64(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x34cu);
    r3 = rd32((u32)param_1 + 0x320u);
    if (r0 == 5u) {
        a.r[0] = r3;
        a.r[1] = r3;
        a.r[2] = 5u;
        a.r[3] = 1u;
        (void)tc_call(0x801ce2f4u, &a);
        return;
    }
    if (r0 == 3u) {
        a.r[0] = r3;
        a.r[1] = r3;
        a.r[2] = 2u;
        a.r[3] = 1u;
        (void)tc_call(0x801ce2f4u, &a);
        return;
    }
    if (r0 == 4u) {
        a.r[0] = r3;
        a.r[1] = r3;
        a.r[2] = 3u;
        a.r[3] = 1u;
        (void)tc_call(0x801ce2f4u, &a);
        return;
    }
    return;
}
