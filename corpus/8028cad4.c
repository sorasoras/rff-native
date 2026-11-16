#include "tc_rt.h"

void fn_8028cad4(void)
{
    u32 r3 = 0, r4 = 0, r12 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x80571b68u);
    if (r3 != 0u) {
        r12 = rd32(r3);
        if (r12 != 0u) {
            a.r[0] = 2u;
            a.r[1] = 1u;
            a.r[2] = 0x800u;
            a.f[0] = 0.0;
            f1 = tc_callf(r12, &a);
            r4 = tc_lastr4();
        }
        r12 = rd32(rd32(0x80571b68u) + 4u);
        if (r12 != 0u) {
            a.r[0] = rd32(0x80571b6cu);
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(r12, &a);
        }
    }
    return;
}
