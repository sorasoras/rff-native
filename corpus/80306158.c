#include "tc_rt.h"

void fn_80306158(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    f1 = tc_callf(0x8022d56cu, &a);
    r4 = tc_lastr4();
    r0 = rd32(param_1 + 0x28u);
    if ((s32)param_2 <= (s32)r0) {
        r0 = param_2 & ~(u32)((s32)param_2 >> 31);
    }
    wr32(param_1 + 0x24u, r0);
    while ((s32)rd32(param_1) > (s32)rd32(param_1 + 0x24u)) {
        r3 = rd32(param_1 + 0x10u) - 0xf0u;
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
        r4 = tc_lastr4();
    }
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
