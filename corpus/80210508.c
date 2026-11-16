#include "tc_rt.h"

s32 fn_80210508(u32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1 + 0x29cu;
    (void)tc_call(0x801614ccu, &a);
    wr32(param_1 + 0x404u, (u32)param_2);
    if ((u32)param_2 == 0xb7u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = param_3;
        a.r[3] = param_4;
        r3 = tc_call(0x800f2b5cu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = param_1 + 0x254u;
            a.r[1] = rd32(param_1 + 0x70u);
            (void)tc_call(0x80051534u, &a);
            r0 = rd32(param_1 + 0x9cu);
            wr32(param_1 + 0x298u, 1u);
            r0 = r0 | 0x26c00000u;
            f1 = (f64)rdf32(0x80576880u);
            wr32(param_1 + 0x9cu, r0);
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = 1u;
            a.r[3] = 1u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
            r4 = tc_lastr4();
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0xcu), &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0xcu), &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        f1 = tc_callf(rd32(rd32(param_1) + 0xcu), &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0xcu), &a);
        r3 = r31;
    }
    return (s32)r3;
}
