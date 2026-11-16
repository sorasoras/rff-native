#include "tc_rt.h"

void fn_8007e64c(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x8006454cu, &a);
    r4 = tc_lastr4();
    r30 = 0u;
    r31 = 0u;
    while (r30 < rd32((u32)param_1 + 0x328u)) {
        r3 = rd32(rd32((u32)param_1 + 0x324u) + r31);
        if (r3 != 0u && (u32)((s32)rd32(r3 + 0x9cu) >> 31) != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
            r4 = tc_lastr4();
        }
        r31 = r31 + 4u;
        r30 = r30 + 1u;
    }
    return;
}
