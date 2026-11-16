#include "tc_rt.h"

void fn_801fb41c(s32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    r0 = rd32((u32)param_1 + 0x70u);
    if (r0 != 0u) {
        a.r[0] = r0;
        f1 = tc_callf(0x800fec80u, &a);
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
    }
    r31 = (u32)param_1;
    r30 = 0u;
    do {
        r3 = rd32(r31 + 0x14u);
        if (r3 != 0u) {
            a.r[0] = r3;
            f1 = tc_callf(0x800fec80u, &a);
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 5);
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    a.r[0] = 0x804de14cu;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    r3 = tc_call(0x801f4324u, &a);
    f1 = tc_lastf();
    if (r3 != 0u && (r3 + 8u) != 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x801f49fcu, &a);
    }
    if (rd32(rd32(0x805711ccu) + 0xfcu) != 2u) {
        a.r[0] = (u32)param_1 + 0x120u;
        a.r[1] = 0u;
        (void)tc_call(0x801e6354u, &a);
    } else {
        a.r[0] = (u32)param_1 + 0x120u;
        a.r[1] = 8u;
        (void)tc_call(0x801e6354u, &a);
    }
    a.r[0] = (u32)param_1 + 0x120u;
    (void)tc_call(0x801e6364u, &a);
    a.r[0] = (u32)param_1 + 0x19cu;
    r3 = tc_call(0x801f1144u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x194u;
        (void)tc_call(0x801e6438u, &a);
    }
    a.r[0] = (u32)param_1 + 0x210u;
    r3 = tc_call(0x801f1144u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + 0x208u;
        (void)tc_call(0x801e6438u, &a);
    }
    a.r[0] = (u32)param_1 + 0x194u;
    (void)tc_call(0x801e6364u, &a);
    a.r[0] = (u32)param_1 + 0x208u;
    (void)tc_call(0x801e6364u, &a);
    a.r[0] = (u32)param_1 + 0xd8u;
    a.r[1] = 1u;
    (void)tc_call(0x800f857cu, &a);
    a.r[0] = (u32)param_1 + 0x27cu;
    a.r[1] = 1u;
    (void)tc_call(0x800f857cu, &a);
    a.r[0] = (u32)param_1 + 0x78u;
    a.r[1] = 1u;
    (void)tc_call(0x801f0fa0u, &a);
    return;
}
