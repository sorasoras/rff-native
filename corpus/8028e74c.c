#include "tc_rt.h"

void fn_8028e74c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    a.r[1] = (u32)param_1 + 8u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(0x8053d578u), &a);
    a.r[0] = 0x110u;
    r3 = tc_call(0x8028a0d4u, &a);
    if (r3 != 0u) {
        wr16(r3, 0x207u);
        a.r[0] = r3;
        (void)tc_call(0x8028d750u, &a);
    }
    return;
}
