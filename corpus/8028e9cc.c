#include "tc_rt.h"

void fn_8028e9cc(void)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x8053d58cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        f1 = tc_callf(0x8028a35cu, &a);
        wr32(0x8053d58cu, 0u);
    }
    a.r[0] = 4u;
    a.r[1] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(0x8053d578u), &a);
    return;
}
