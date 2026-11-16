#include "tc_rt.h"

void fn_8028e468(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x110u;
    r3 = tc_call(0x8028a0d4u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        wr16(r3, 0x207u);
        a.r[0] = r3;
        f1 = tc_callf(0x8028d750u, &a);
    }
    wr32((u32)param_1 + 0x108u, 0u);
    a.r[0] = 2u;
    a.r[1] = (u32)param_1 + 8u;
    a.r[2] = 0x80540000u;
    a.f[0] = f1;
    (void)tc_call(rd32(0x8053d578u), &a);
    return;
}
