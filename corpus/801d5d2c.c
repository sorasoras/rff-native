#include "tc_rt.h"

u32 fn_801d5d2c(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r30 = 0u;
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801d55f8u, &a);
    r31 = rd32(r3 + 0x40u);
    if ((s32)rd32((u32)param_1 + 0x78u) > (s32)rd32((u32)param_1 + 0x7cu)) {
        r3 = tc_call(0x80040b64u, &a);
        f1 = tc_lastf();
        r30 = 1u;
        if ((s32)r31 < (s32)(r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u))) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = (u32)param_1;
            a.r[1] = 1u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x801d5524u, &a);
        } else {
            a.r[0] = (u32)param_1;
            f1 = tc_callf(0x801d55d4u, &a);
            if (f1 > (f64)rdf32(0x8057604cu)) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = (u32)param_1;
                a.r[1] = 2u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x801d5524u, &a);
            } else {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = (u32)param_1;
                a.r[1] = 4u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x801d5524u, &a);
            }
        }
    }
    return r30;
}
