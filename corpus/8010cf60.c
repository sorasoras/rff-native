#include "tc_rt.h"

void fn_8010cf60(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x805706e8u);
    r30 = rd32(0x8046adecu);
    while (r30 != 0u) {
        r3 = r30;
        r30 = rd32(r30);
        r3 = rd32(r3 + 8u);
        if (r31 == rd32(r3 + 0x7cu) && (u32)param_1 == rd32(r3 + 0xf4u)) {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.r[2] = param_2;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x7cu), &a);
        }
    }
    return;
}
