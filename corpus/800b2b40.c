#include "tc_rt.h"

void fn_800b2b40(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r5 = (u32)param_1 + (((rd32(param_2 + 4u) - 0x24u) << 2u) & 0xfffffffcu);
    wr32(r5 + 0x32cu, param_2);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = r5;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x20u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_2) + 0x2cu), &a);
        r3 = (u32)param_1 + ((r3 << 2u) & 0xfffffffcu);
        wr32(r3 + 0x348u, param_2);
    }
    return;
}
