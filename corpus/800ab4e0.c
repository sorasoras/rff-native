#include "tc_rt.h"

void fn_800ab4e0(void)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x8046b7e4u);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x98u), &a);
        r4 = tc_lastr4();
    }
    return;
}
