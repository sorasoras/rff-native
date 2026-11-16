#include "tc_rt.h"

void fn_80103018(void)
{
    u32 r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32(0x80571248u);
    while (r31 != 0u) {
        a.r[0] = r31;
        (void)tc_call(0x80100d00u, &a);
        a.r[0] = r31;
        f1 = tc_callf(0x80100f50u, &a);
        a.r[0] = r31;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r31 + 0x34u) + 0xcu), &a);
        r31 = rd32(r31 + 0x3cu);
    }
    return;
}
