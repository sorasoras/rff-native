#include "tc_rt.h"

void fn_800897e8(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    while (rd32((u32)param_1 + 0x10u) != 0u) {
        a.r[0] = (u32)param_1 + 8u;
        r3 = tc_call(0x8007b09cu, &a);
        f1 = tc_lastf();
        r31 = r3;
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
        if (r31 != 0u) {
            a.r[0] = r31;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r31) + 8u), &a);
        }
    }
    a.r[0] = (u32)param_1 + 8u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8008bca4u, &a);
    return;
}
