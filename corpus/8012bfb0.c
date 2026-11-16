#include "tc_rt.h"

void fn_8012bfb0(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x80574320u);
    a.f[1] = (f64)rdf32(0x80574324u);
    (void)tc_call(0x80059c9cu, &a);
    r3 = rd32((u32)param_1 + 0x44u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fe9bcu, &a);
    }
    if ((s32)rd32((u32)param_1 + 0x7ecu) > 0) {
        a.r[0] = rd32((u32)param_1 + 0x54u);
        (void)tc_call(0x8012c614u, &a);
        a.r[0] = rd32((u32)param_1 + 0x58u);
        (void)tc_call(0x8012d0c8u, &a);
        a.r[0] = (u32)param_1 + 0x98u;
        (void)tc_call(0x80119c70u, &a);
    }
    a.r[0] = (u32)param_1 + 0x4a0u;
    (void)tc_call(0x8014b42cu, &a);
    a.r[0] = (u32)param_1 + 0x61cu;
    f1 = tc_callf(0x8019124cu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x7f4u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x8020f08cu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x82cu;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    f1 = tc_callf(0x8020f08cu, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = (u32)param_1 + 0x864u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x8020f08cu, &a);
    return;
}
