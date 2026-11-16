#include "tc_rt.h"

s32 fn_802d39c0(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x802d15fcu, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        return (s32)r3;
    }
    r30 = 0u;
    r31 = 0u;
    while ((s32)r30 < (s32)rd8((u32)param_1 + 0x100u)) {
        r3 = rd32(rd32((u32)param_1 + 0xfcu) + r31 + 4u);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x20u), &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            return (s32)r3;
        }
        r31 = r31 + 8u;
        r30 = r30 + 1u;
    }
    r3 = 0u;
    return (s32)r3;
}
