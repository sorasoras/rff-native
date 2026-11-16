#include "tc_rt.h"

u32 fn_80161f9c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 1u;
    a.r[0] = (u32)param_2;
    a.r[1] = (u32)rd16((u32)param_1 + 0xbcu);
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32((u32)param_2 + 0xccu) + 0x10u), &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)rd16((u32)param_2 + 0xbcu);
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32((u32)param_1 + 0xccu) + 0x10u), &a);
        if (r3 != 0u) {
            return r31;
        }
    }
    r31 = 0u;
    return r31;
}
