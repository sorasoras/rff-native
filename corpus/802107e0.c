#include "tc_rt.h"

void fn_802107e0(s32 param_1, u32 param_2)
{
    u32 r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x29cu;
    a.r[1] = (u32)param_1 + 0x254u;
    f1 = tc_callf(0x8007b03cu, &a);
    a.r[0] = (u32)param_1 + 0x1028u;
    a.r[1] = param_2;
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32((u32)param_1 + 0x1028u) + 0x14u), &a);
    r31 = (u32)param_1 + 0x488u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = param_2;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r31) + 0x14u), &a);
        r30 = r30 + 1u;
        r31 = r31 + 0xf8u;
    } while ((s32)r30 < 12);
    return;
}
