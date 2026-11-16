#include "tc_rt.h"

void fn_8005251c(void)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x803cb90cu);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r3 = rd32(r3 + 8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
        r4 = tc_lastr4();
    }
    a.r[0] = 0x803cb90cu;
    (void)tc_call(0x8007ae84u, &a);
    return;
}
