#include "tc_rt.h"

void fn_801f49fc(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = 0u;
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.f[2] = param_f3;
    a.f[3] = param_f4;
    a.f[4] = param_f5;
    a.f[5] = param_f6;
    a.f[6] = param_f7;
    a.f[7] = param_f8;
    a.r[0] = param_1;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x801f4780u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        r3 = tc_call(0x801f4780u, &a);
        r31 = r3 + 8u;
    }
    if (r31 != 0u) {
        if (rd32(r31) == 3u) {
            a.r[0] = rd32(r31 + 0x10u);
            r3 = tc_call(0x8013ff20u, &a);
            if (r3 == 0u) {
                r0 = (u32)rd16(0x8049b1fau) + 1u;
                if (r0 > 0xffu) {
                    r0 = 0xffu;
                }
                wr16(0x8049b1fau, (u16)r0);
            }
        }
        wr32(r31 + 8u, 1u);
        a.r[0] = rd32(r31 + 0x10u);
        (void)tc_call(0x8013fd24u, &a);
    }
    return;
}
