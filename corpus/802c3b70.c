#include "tc_rt.h"

void fn_802c3b70(s32 param_1)
{
    u32 r3 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r12 = rd32(rd32((u32)param_1 + 4u) + 0x14u);
    if (r12 != 0u) {
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(r12, &a);
    }
    r3 = tc_call(0x802449bcu, &a);
    wr16((u32)param_1 + 0x624u, (u16)r3);
    r3 = tc_call(0x802449c4u, &a);
    wr16((u32)param_1 + 0x626u, (u16)r3);
    r3 = tc_call(0x802449ccu, &a);
    wr16((u32)param_1 + 0x628u, (u16)r3);
    a.r[0] = (u32)param_1 + 0x62cu;
    a.r[1] = (u32)param_1 + 0x630u;
    (void)tc_call(0x80249740u, &a);
    a.r[0] = (u32)param_1 + 0x794u;
    a.r[1] = (u32)param_1 + 0x798u;
    (void)tc_call(0x80243f40u, &a);
    a.r[0] = 0x802c2510u;
    a.r[1] = 0x802c2520u;
    (void)tc_call(0x80249734u, &a);
    f3 = (f64)rdf32(0x80348960u);
    f2 = (f64)rdf32(0x80348998u);
    f1 = (f64)rdf32(0x8034899cu);
    f0 = (f64)rdf32(0x80348964u);
    wrf32d((u32)param_1 + 0x78cu, f3);
    wrf32d((u32)param_1 + 0x784u, f2);
    wrf32d((u32)param_1 + 0x77cu, f1);
    wrf32d((u32)param_1 + 0x788u, f3);
    wrf32d((u32)param_1 + 0x790u, f3);
    wrf32d((u32)param_1 + 0x780u, f0);
    a.r[0] = (u32)param_1 + 0x634u;
    (void)tc_call(0x80246608u, &a);
    a.r[0] = 0x80246690u;
    a.r[1] = (u32)param_1 + 0x634u;
    (void)tc_call(0x80243e14u, &a);
    a.r[0] = 0x8000u;
    (void)tc_call(0x802449ecu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x802449f4u, &a);
    a.r[0] = 0u;
    f1 = tc_callf(0x802449fcu, &a);
    r12 = rd32(rd32((u32)param_1 + 4u) + 0x14u);
    if (r12 != 0u) {
        a.r[0] = 1u;
        a.r[1] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(r12, &a);
    }
    r3 = tc_call(0x802751e0u, &a);
    r3 = r3 & 0xffu;
    a.r[0] = r3;
    (void)tc_call(0x802c250cu, &a);
    wr8((u32)param_1 + 0x97u, 1u);
    return;
}
