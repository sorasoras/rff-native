#include "tc_rt.h"

void fn_801329fc(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x80574368u);
    a.f[1] = (f64)rdf32(0x8057436cu);
    (void)tc_call(0x80059c9cu, &a);
    r3 = rd32((u32)param_1 + 0x450u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x800fe9bcu, &a);
    }
    a.r[0] = (u32)param_1 + 0x47cu;
    (void)tc_call(0x8019124cu, &a);
    r3 = rd32((u32)param_1 + 0x454u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80136fc8u, &a);
    }
    r3 = rd32((u32)param_1 + 0x458u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80137910u, &a);
    }
    r3 = rd32((u32)param_1 + 0x45cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x801383e0u, &a);
    }
    a.r[0] = (u32)param_1 + 0x64cu;
    (void)tc_call(0x8014b42cu, &a);
    a.r[0] = (u32)param_1 + 0x464u;
    f1 = tc_callf(0x80221b50u, &a);
    r31 = (u32)param_1 + 0x7c8u;
    r30 = 0u;
    do {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r31;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x8020f08cu, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x38u;
    } while ((s32)r30 < 5);
    a.r[0] = (u32)param_1 + 0x48u;
    (void)tc_call(0x80119c70u, &a);
    return;
}
