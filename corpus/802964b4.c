#include "tc_rt.h"

void fn_802964b4(u32 param_1)
{
    u32 r4 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = rd32(0x8053df00u);
    a.r[0] = 0x8053dee8u;
    f1 = tc_callf(0x8028d290u, &a);
    r4 = tc_lastr4();
    wr32(0x8053df00u, 0u);
    if (r30 != 0u) {
        if ((u32)rd8(param_1) == 0u) {
            a.r[0] = param_1 + 1u;
            a.r[1] = r4;
            a.f[0] = f1;
            (void)tc_call(r30, &a);
        } else {
            a.r[0] = 0u;
            a.r[1] = r4;
            a.f[0] = f1;
            (void)tc_call(r30, &a);
        }
    }
    return;
}
