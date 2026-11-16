#include "tc_rt.h"

void fn_8015d874(s32 param_1, s32 param_2)
{
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x46cu);
    if (r31 != 0u) {
        if ((u32)param_2 == 0u) {
            a.r[0] = r31;
            a.r[1] = 0u;
            (void)tc_call(0x800d5bacu, &a);
        }
        a.r[0] = r31;
        (void)tc_call(0x800d39e0u, &a);
        if ((u32)param_2 == 0u) {
            a.r[0] = r31;
            a.r[1] = 1u;
            (void)tc_call(0x800d5bacu, &a);
        }
        f1 = tc_callf(0x800d339cu, &a);
        a.f[0] = f1;
        a.r[0] = r31;
        (void)tc_call(0x800d3b10u, &a);
        wr32((u32)param_1 + 0x46cu, 0u);
        wr32((u32)param_1 + 0x4b0u, 1u);
    }
    return;
}
