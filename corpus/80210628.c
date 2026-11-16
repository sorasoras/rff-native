#include "tc_rt.h"

void fn_80210628(s32 param_1)
{
    u32 r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x800f2c58u, &a);
    a.r[0] = (u32)param_1 + 0x1028u;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x1028u) + 0x10u), &a);
    r4 = tc_lastr4();
    f8 = (f64)rdf32((u32)param_1 + 0x258u);
    r30 = (u32)param_1 + 0x488u;
    f7 = (f64)rdf32((u32)param_1 + 0x25cu);
    r31 = r30;
    f6 = (f64)rdf32((u32)param_1 + 0x260u);
    r29 = 0u;
    f5 = (f64)rdf32((u32)param_1 + 0x264u);
    f4 = (f64)rdf32((u32)param_1 + 0x268u);
    f3 = (f64)rdf32((u32)param_1 + 0x26cu);
    f2 = (f64)rdf32((u32)param_1 + 0x270u);
    f1 = (f64)rdf32((u32)param_1 + 0x274u);
    f0 = (f64)rdf32((u32)param_1 + 0x278u);
    wrf32d((u32)param_1 + 0x11ccu, f8);
    wrf32d((u32)param_1 + 0x11d0u, f7);
    wrf32d((u32)param_1 + 0x11d4u, f6);
    wrf32d((u32)param_1 + 0x11d8u, f5);
    wrf32d((u32)param_1 + 0x11dcu, f4);
    wrf32d((u32)param_1 + 0x11e0u, f3);
    wrf32d((u32)param_1 + 0x11e4u, f2);
    wrf32d((u32)param_1 + 0x11e8u, f1);
    wrf32d((u32)param_1 + 0x11ecu, f0);
    do {
        a.r[0] = r31;
        a.r[1] = r4;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        f1 = tc_callf(rd32(rd32(r31) + 0x10u), &a);
        r4 = tc_lastr4();
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
        r29 = r29 + 1u;
        r31 = r31 + 0xf8u;
    } while ((s32)r29 < 12);
    a.r[0] = (u32)param_1 + 0x254u;
    (void)tc_call(0x800515dcu, &a);
    a.r[0] = (u32)param_1 + 0x11c8u;
    (void)tc_call(0x800515dcu, &a);
    r29 = 0u;
    do {
        a.r[0] = r30 + 0xacu;
        (void)tc_call(0x800515dcu, &a);
        r29 = r29 + 1u;
        r30 = r30 + 0xf8u;
    } while ((s32)r29 < 12);
    return;
}
