#include "tc_rt.h"

void fn_802bf8f4(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    while (r31 < (u32)rd16((u32)param_1 + 0x10u)) {
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = r31 & 0xffffu;
        r3 = tc_call(0x802d7bccu, &a);
        f1 = tc_lastf();
        r3 = rd32(r3 + 4u);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(r3) + 0x18u), &a);
        r31 = r31 + 1u;
    }
    return;
}
