#include "tc_rt.h"

u32 fn_800dacf8(u32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    if ((u32)param_2 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x8014d8acu, &a);
        c0eq = r3 == 0u;
        r3 = 0xffffffffu;
        if (!c0eq) {
            r3 = 1u;
        }
    }
    return r3;
}
