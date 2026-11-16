#include "tc_rt.h"

void fn_80045550(void)
{
    u32 r3 = 0, r4 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0x80571038u;
    r30 = 0u;
    do {
        r12 = rd32(r31);
        if (r12 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 2);
    return;
}
