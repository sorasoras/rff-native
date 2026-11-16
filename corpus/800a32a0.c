#include "tc_rt.h"

u32 fn_800a32a0(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x393u;
    r3 = tc_call(0x800510acu, &a);
    wr32((u32)param_1 + 0x3320u, r3);
    r3 = tc_call(0x80097e5cu, &a);
    a.r[0] = (u32)param_1 + 0x3324u;
    a.r[1] = r3;
    a.r[2] = 0x394u;
    r3 = tc_call(0x800a6034u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = (u32)param_1 + 0x3324u;
        r3 = tc_call(0x800a63d4u, &a);
        a.r[0] = (u32)param_1 + 0xcu;
        a.r[1] = r3;
        (void)tc_call(0x800a349cu, &a);
        r3 = 1u;
    }
    return r3;
}
