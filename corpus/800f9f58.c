#include "tc_rt.h"

void fn_800f9f58(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x800f8610u, &a);
    a.r[0] = (u32)param_1 + 0x9b0u;
    (void)tc_call(0x80209064u, &a);
    a.r[0] = (u32)param_1 + 0xb98u;
    (void)tc_call(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0xbd0u;
    (void)tc_call(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0xc08u;
    f1 = tc_callf(0x8020f078u, &a);
    a.r[0] = (u32)param_1 + 0x5c8u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x5f0u) + 0x20u), &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x8011a00cu, &a);
    a.r[0] = (u32)param_1 + 0x44cu;
    (void)tc_call(0x8014b350u, &a);
    a.r[0] = (u32)param_1 + 0x9c8u;
    (void)tc_call(0x801911f4u, &a);
    return;
}
