#include "tc_rt.h"

u32 fn_802e5d98(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((u32)param_2 + 4u);
    if (r31 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = param_3;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x10u), &a);
        f1 = tc_lastf();
        r30 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = param_3;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
        }
        r3 = r30;
    }
    return r3;
}
