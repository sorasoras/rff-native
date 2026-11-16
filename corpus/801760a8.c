#include "tc_rt.h"

void fn_801760a8(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = rd32(param_1 + 0x120u);
    r3 = tc_call(0x800da8b8u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (r3 != 0u) {
        r3 = rd32((u32)param_2 + 0x2cu);
        if ((r3 == 0u || ((ppc_cntlzw(rd32(r3 + 0xb8u)) >> 5u) & 0x7ffffffu) == 0u) || (s32)rd32(0x80499178u) > 0) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0xc0u), &a);
        }
    }
    return;
}
