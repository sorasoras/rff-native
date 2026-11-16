#include "tc_rt.h"

s32 fn_8009f92c(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = rd32((u32)param_1 + 0x14u);
    a.r[0] = r30 + 0xcu;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    a.f[0] = 0.0;
    r3 = tc_call(rd32((u32)param_3 + 8u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (param_2 < r3) {
        a.r[0] = r30 + 0x10u;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32((u32)param_3 + 8u), &a);
        if (r3 != 0u) {
            r31 = (param_2 * 0x18u) + (rd32((u32)param_1 + 0x14u) + r3);
        }
    }
    return (s32)r31;
}
