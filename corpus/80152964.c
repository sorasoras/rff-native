#include "tc_rt.h"

void fn_80152964(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r8 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 4u, param_2);
    wr32((u32)param_1 + 8u, param_3);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_2) + 0x140u), &a);
    r4 = tc_lastr4();
    if (rd32((u32)param_1 + 4u) != 0u) {
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x140u), &a);
        r8 = 5u;
        if (r3 != 0u) {
            r8 = 0xau;
        }
        a.f[0] = (f64)rdf32((u32)param_1 + 0x1e8u);
        a.f[1] = (f64)rdf32(0x8057483cu);
        a.r[0] = (u32)param_1 + 0xf8u;
        a.r[1] = 0u;
        a.r[2] = (u32)param_1 + 0x10u;
        a.r[3] = rd32((u32)param_1 + 4u);
        a.r[4] = 6u;
        a.r[5] = r8;
        (void)tc_call(0x8006e674u, &a);
    }
    return;
}
