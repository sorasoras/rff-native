#include "tc_rt.h"

void fn_800b3f68(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x154u), &a);
    r4 = tc_lastr4();
    r3 = rd32(param_1 + 0xda4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(r3) + 0x24u), &a);
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = 0xdu;
            (void)tc_call(0x800b31a0u, &a);
        }
    }
    return;
}
