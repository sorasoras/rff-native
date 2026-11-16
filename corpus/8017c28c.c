#include "tc_rt.h"

void fn_8017c28c(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = param_1;
    r30 = 0u;
    do {
        r29 = rd32(r31);
        while (r29 != 0u) {
            r3 = r29;
            r29 = rd32(r29);
            r3 = rd32(r3 + 8u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
            r4 = tc_lastr4();
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x1cu;
    } while (r30 < 4u);
    return;
}
