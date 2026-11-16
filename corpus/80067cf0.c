#include "tc_rt.h"

void fn_80067cf0(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x800f35d4u, &a);
    r4 = tc_lastr4();
    r31 = (u32)param_1 + 0x29cu;
    r30 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r31) + 0x10u), &a);
        r4 = tc_lastr4();
        r30 = r30 + 1u;
        r31 = r31 + 0xacu;
    } while ((s32)r30 < 4);
    r31 = (u32)param_1 + 0x54cu;
    r30 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r31) + 0x10u), &a);
        r4 = tc_lastr4();
        r30 = r30 + 1u;
        r31 = r31 + 0x1a0u;
    } while ((s32)r30 < 2);
    r31 = (u32)param_1;
    r30 = 0u;
    do {
        r3 = rd32(r31 + 0x163cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
            r4 = tc_lastr4();
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while (r30 < 2u);
    a.r[0] = (u32)param_1 + 0x890u;
    a.r[1] = r4;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x890u) + 0x10u), &a);
    return;
}
