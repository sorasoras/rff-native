#include "tc_rt.h"

void fn_80073c0c(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x8046adecu);
    while (r31 != 0u) {
        r3 = r31;
        r31 = rd32(r31);
        r30 = rd32(r3 + 8u);
        a.r[0] = r30 + 0x80u;
        f1 = tc_callf(0x800cb5a8u, &a);
        a.r[0] = r30;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r30) + 0x18u), &a);
        if (r30 != 0u) {
            a.r[0] = r30;
            a.r[1] = 1u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(r30) + 8u), &a);
        }
    }
    return;
}
