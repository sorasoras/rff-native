#include "tc_rt.h"

void fn_80124380(s32 param_1)
{
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 8u, 0u);
    a.r[0] = rd32((u32)param_1 + 0x10u);
    a.r[1] = 0x80339ceeu;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = rd32((u32)param_1 + 0x10u);
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    r30 = (u32)param_1;
    r31 = (u32)param_1 + 0x80u;
    r29 = 0u;
    do {
        a.r[0] = r31;
        f1 = tc_callf(0x801f10e4u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = rd32(r30 + 0x78u);
        a.r[1] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x800fef2cu, &a);
        r29 = r29 + 1u;
        r30 = r30 + 0x58u;
        r31 = r31 + 0x58u;
    } while ((s32)r29 < 10);
    wr32((u32)param_1 + 0x6cu, 0u);
    return;
}
