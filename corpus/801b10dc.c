#include "tc_rt.h"

void fn_801b10dc(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x805706e8u);
    r30 = rd32(0x8046adecu);
    while (r30 != 0u) {
        r3 = r30;
        r30 = rd32(r30);
        r29 = rd32(r3 + 8u);
        if (r31 == rd32(r29 + 0x7cu)) {
            if ((u32)param_1 == 0u) {
                a.r[0] = r29;
                a.r[1] = 0u;
                a.r[2] = 8u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r29) + 0x7cu), &a);
            }
            wr32(r29 + 0x74u, (rd32(r29 + 0x74u) & 0x7fffffffu) | (((u32)param_1 << 0x1fu) & 0x80000000u));
            a.r[0] = r29;
            a.r[1] = (u32)param_1;
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r29) + 0x88u), &a);
        }
    }
    return;
}
