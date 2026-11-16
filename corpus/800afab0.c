#include "tc_rt.h"

void fn_800afab0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = (u32)param_5;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x140u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if ((r3 != 0u && (u32)param_5 == 1u) && rd32(param_3 + 0xb8u) == 2u) {
        a.r[0] = param_3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_3) + 0xecu), &a);
        r3 = r3 & 0xffu;
        a.r[0] = r3;
        r3 = tc_call(0x800817f4u, &a);
        r3 = r3 & 0xffffu;
        a.r[0] = r3;
        a.r[1] = 1u;
        (void)tc_call(0x800818ccu, &a);
    }
    return;
}
