#include "tc_rt.h"

void fn_80121e80(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0xdc8u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x20u), &a);
    a.r[0] = (u32)param_1 + 0x92cu;
    (void)tc_call(0x80123e58u, &a);
    a.r[0] = (u32)param_1 + 0x450u;
    (void)tc_call(0x8019395cu, &a);
    a.r[0] = (u32)param_1 + 0x5c8u;
    (void)tc_call(0x8014b350u, &a);
    a.r[0] = (u32)param_1 + 0x744u;
    (void)tc_call(0x801911f4u, &a);
    a.r[0] = (u32)param_1 + 0x914u;
    (void)tc_call(0x80209064u, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    (void)tc_call(0x8011a00cu, &a);
    r31 = (u32)param_1 + 0xd1cu;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8020f078u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x38u;
    } while ((s32)r30 < 3);
    return;
}
