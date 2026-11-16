#include "tc_rt.h"

s32 fn_802d15fc(s32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x1cu;
    a.r[1] = param_2;
    r3 = tc_call(0x802cb1d8u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        return (s32)r3;
    }
    r3 = rd32((u32)param_1 + 0x28u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = param_2;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x20u), &a);
        if (r3 != 0u) {
            return (s32)r3;
        }
    }
    r3 = 0u;
    return (s32)r3;
}
