#include "tc_rt.h"

s32 fn_800d9718(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = rd32((u32)param_1 + 0x10u);
    if (r30 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r30 + 4u;
        a.r[1] = 0u;
        r3 = tc_call(0x802de9f0u, &a);
        f1 = tc_lastf();
        r31 = r3;
        if (r3 == 0u) {
            r31 = 0u;
        } else {
            a.r[0] = r30;
            a.r[1] = r3;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r30 + 0x20u) + 8u), &a);
            a.r[0] = r30 + 4u;
            a.r[1] = r31;
            (void)tc_call(0x802de984u, &a);
            a.r[0] = r30 + 0x10u;
            a.r[1] = r31;
            (void)tc_call(0x802de7f4u, &a);
        }
        r3 = r31;
    }
    return (s32)r3;
}
