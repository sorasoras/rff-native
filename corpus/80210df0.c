#include "tc_rt.h"

void fn_80210df0(s32 param_1)
{
    u32 r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = (u32)param_1 + 0x488u;
    r29 = 0u;
    r31 = (u32)param_1;
    do {
        if (rd32(r31 + 0x4f8u) != 0u) {
            a.r[0] = r30;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r30) + 0x18u), &a);
            r4 = tc_lastr4();
        }
        r29 = r29 + 1u;
        r30 = r30 + 0xf8u;
        r31 = r31 + 0xf8u;
    } while ((s32)r29 < 12);
    if (rd32((u32)param_1 + 0x1098u) != 0u) {
        a.r[0] = (u32)param_1 + 0x1028u;
        a.r[1] = r4;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32((u32)param_1 + 0x1028u) + 0x18u), &a);
    }
    return;
}
