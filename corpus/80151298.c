#include "tc_rt.h"

u32 fn_80151298(s32 param_1, u32 param_r4, u32 param_r5)
{
    u32 r0 = 0, r3 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 0xda4u);
    if (r6 != 0u) {
        r0 = rd32(r6 + 4u);
    } else {
        r0 = 0xffffffffu;
    }
    if (r0 == 0x26u) {
        return 2u;
    }
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    r3 = tc_call(0x800b4010u, &a);
    return r3;
}
