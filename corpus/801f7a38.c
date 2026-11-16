#include "tc_rt.h"

u32 fn_801f7a38(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x804df11cu) != rd32(0x804df120u)) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0xc0u);
        a.r[3] = param_r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x801fa1a0u, &a);
        a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0xc0u);
        r3 = tc_call(0x801fa254u, &a);
        if (r3 == 0u) {
            a.r[0] = rd32(rd32((u32)param_1 + 0x20u) + 0xc0u);
            r3 = tc_call(0x801fa268u, &a);
            if (r3 == 0u) {
                return 1u;
            }
        }
        a.r[0] = 0x804de14cu;
        a.r[1] = 6u;
        f1 = tc_callf(0x801f33e0u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x804de14cu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x801f42a4u, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 3u;
        (void)tc_call(0x8010a75cu, &a);
        r3 = tc_call(0x8012aafcu, &a);
        r31 = r3;
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = rd32(r3 + 0x3e8u);
        (void)tc_call(0x80119fb0u, &a);
        wr32(r31 + 0x3ecu, 0u);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x80u;
        a.r[1] = 4u;
        (void)tc_call(0x800f8544u, &a);
    } else {
        a.r[0] = 0x804de14cu;
        a.r[1] = 6u;
        f1 = tc_callf(0x801f33e0u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x804de14cu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x801f42a4u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x80u;
        a.r[1] = 4u;
        (void)tc_call(0x800f8544u, &a);
    }
    return 1u;
}
