#include "tc_rt.h"

void fn_8012537c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xc48u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        f1 = tc_callf(rd32(rd32(r0 + 0x28u) + 0x20u), &a);
        r4 = tc_lastr4();
    }
    r3 = rd32((u32)param_1 + 0xc4cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x20u), &a);
    }
    a.r[0] = (u32)param_1 + 0x44cu;
    (void)tc_call(0x8014b350u, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x8011a00cu, &a);
    a.r[0] = (u32)param_1 + 0x5c8u;
    f1 = tc_callf(0x80209064u, &a);
    a.r[0] = (u32)param_1 + 0x7b4u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x7dcu) + 0x20u), &a);
    a.r[0] = (u32)param_1 + 0x5e0u;
    (void)tc_call(0x801911f4u, &a);
    a.r[0] = (u32)param_1 + 0xb9cu;
    (void)tc_call(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0xbd4u;
    (void)tc_call(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0xc0cu;
    (void)tc_call(0x8020f078u, &a);
    return;
}
