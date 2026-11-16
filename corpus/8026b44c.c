#include "tc_rt.h"

u32 fn_8026b44c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_2;
    r30 = (u32)param_1;
    if (rd32(0x80571a20u) != 0u) {
        while ((s32)r31 > 0) {
            a.r[0] = r30;
            a.r[1] = r31;
            r3 = tc_call(0x8026bb0cu, &a);
            if (r3 == 0u) break;
            r30 = r30 + r3;
            r31 = r31 - r3;
        }
        r3 = 0u;
    } else {
        r3 = 0xffffd8efu;
    }
    return r3;
}
