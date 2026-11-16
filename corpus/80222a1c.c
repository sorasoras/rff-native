#include "tc_rt.h"

void fn_80222a1c(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0xb20u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            r3 = rd32(param_1 + 0xb20u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            f1 = tc_lastf();
            a.r[0] = param_1;
            a.r[1] = r3;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_1) + 0x1cu), &a);
            r3 = rd32(param_1 + 0xb20u);
            a.r[0] = r3;
            a.r[1] = tc_lastr4();
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
        }
    }
    a.r[0] = param_1;
    (void)tc_call(0x800938dcu, &a);
    return;
}
