#include "tc_rt.h"

u32 fn_800cf718(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 4u);
    if (r0 == 0u) {
        a.r[0] = 0x804b14d4u;
        a.r[1] = (u32)param_1;
        a.r[2] = 0u;
        r3 = tc_call(0x8007b0f4u, &a);
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    } else {
        if (r0 == 1u) {
            a.r[0] = 0x804b14fcu;
            a.r[1] = (u32)param_1;
            a.r[2] = 0u;
            r3 = tc_call(0x8007b0f4u, &a);
            r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        } else {
            r3 = 0u;
        }
    }
    return r3;
}
