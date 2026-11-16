#include "tc_rt.h"

u32 fn_800cf790(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x804b1524u;
    a.r[1] = (u32)param_1;
    a.r[2] = 0u;
    r3 = tc_call(0x8007b0f4u, &a);
    if (r3 != 0u) {
        r3 = 0u;
    } else {
        wr32((u32)param_1 + 0xcu, 0u);
        a.r[0] = 0x804b1524u;
        a.r[1] = (u32)param_1;
        (void)tc_call(0x8007b03cu, &a);
        r3 = 1u;
    }
    return r3;
}
