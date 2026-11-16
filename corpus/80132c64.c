#include "tc_rt.h"

void fn_80132c64(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x454u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(r3 + 0x28u) + 0x20u), &a);
    r3 = rd32((u32)param_1 + 0x458u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x20u), &a);
    a.r[0] = rd32((u32)param_1 + 0x458u);
    (void)tc_call(0x80137974u, &a);
    a.r[0] = rd32((u32)param_1 + 0x45cu);
    (void)tc_call(0x80138484u, &a);
    a.r[0] = (u32)param_1 + 0x47cu;
    (void)tc_call(0x801911f4u, &a);
    a.r[0] = (u32)param_1 + 0x464u;
    (void)tc_call(0x80221b3cu, &a);
    a.r[0] = (u32)param_1 + 0x64cu;
    (void)tc_call(0x8014b350u, &a);
    a.r[0] = (u32)param_1 + 0x48u;
    (void)tc_call(0x8011a00cu, &a);
    r31 = (u32)param_1 + 0x7c8u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        (void)tc_call(0x8020f078u, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x38u;
    } while ((s32)r30 < 5);
    return;
}
