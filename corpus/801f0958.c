#include "tc_rt.h"

u32 fn_801f0958(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = (u32)param_2 + 0xbcu;
    r3 = tc_call(0x801f083cu, &a);
    f1 = tc_lastf();
    if (r3 != 0xffffu) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.f[0] = f1;
        r3 = tc_call(rd32(((r3 << 2u) & 0xfffffffcu) - 0x7fc89afcu), &a);
        r31 = r3;
    }
    return r31;
}
