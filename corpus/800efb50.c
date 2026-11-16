#include "tc_rt.h"

s32 fn_800efb50(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r12 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    for (;;) {
        a.r[0] = 0x804b8960u;
        a.r[1] = r30;
        r3 = tc_call(0x802de9f0u, &a);
        f1 = tc_lastf();
        r30 = r3;
        if (r3 == 0u) break;
        r12 = rd32(r3);
        r3 = r3;
        r12 = rd32(r12 + 8u);
        a.r[0] = r3;
        a.r[1] = param_1;
        a.r[2] = param_2;
        a.r[3] = param_3;
        a.f[0] = f1;
        r3 = tc_call(r12, &a);
        if (r3 != 2u) {
            return (s32)r3;
        }
    }
    r3 = 2u;
    return (s32)r3;
}
