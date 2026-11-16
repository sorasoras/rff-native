#include "tc_rt.h"

void fn_8019b214(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x800545e4u, &a);
    f1 = tc_lastf();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[1] = 0x577u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0xffffffffu;
    r3 = tc_call(0x80050dd4u, &a);
    r31 = r3;
    a.r[0] = r3;
    r3 = tc_call(0x80045be0u, &a);
    wr32((u32)param_1 + 0x4dcu, 0xffffffffu);
    a.r[0] = r3;
    a.r[1] = 0u;
    r3 = tc_call(0x8004bf2cu, &a);
    wr32((u32)param_1 + 0x4dcu, r3);
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
        r4 = tc_lastr4();
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r31;
            (void)tc_call(0x80094ec0u, &a);
            r4 = tc_lastr4();
        } else {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r31;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
            r4 = tc_lastr4();
        }
    }
    f4 = (f64)rdf32(0x805756fcu);
    f6 = (f64)rdf32(0x805756f4u);
    f1 = rdf64(0x80575690u) * f4;
    f5 = (f64)rdf32(0x805756f8u);
    f3 = (f64)rdf32(0x80575700u);
    f0 = (f64)rdf32(0x80575698u);
    wrf32d((u32)param_1 + 0x4e0u, f6);
    f2 = (f64)(f32)f1;
    wrf32d((u32)param_1 + 0x4e4u, f5);
    f1 = (f64)(f32)(f4 - f2);
    wrf32d((u32)param_1 + 0x4ecu, f4);
    wrf32d((u32)param_1 + 0x4f0u, f3);
    f0 = ppc_fmadds(f1, f0, f6);
    wrf32d((u32)param_1 + 0x4f8u, f2);
    wrf32d((u32)param_1 + 0x4f4u, f0);
    a.r[0] = (u32)param_1 + 0x468u;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x468u) + 0xcu), &a);
    a.r[0] = (u32)param_1 + 0x468u;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = (f64)rdf32((u32)param_1 + 0x4e0u);
    a.f[1] = (f64)rdf32((u32)param_1 + 0x4e4u);
    a.f[2] = (f64)rdf32((u32)param_1 + 0x4ecu);
    a.f[3] = (f64)rdf32((u32)param_1 + 0x4f0u);
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    (void)tc_call(rd32(rd32((u32)param_1 + 0x468u) + 0x1cu), &a);
    r3 = rd32((u32)param_1 + 0x4dcu);
    wr32((u32)param_1 + 0x480u, r3);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004c630u, &a);
        if ((s32)r3 > 2) {
            wr32((u32)param_1 + 0x484u, 2u);
        }
    }
    f2 = (f64)rdf32(0x80575704u);
    f1 = (f64)rdf32(0x80575708u);
    f0 = (f64)rdf32(0x80575678u);
    wr8((u32)param_1 + 0x494u, 0xffu);
    wr32((u32)param_1 + 0x500u, 0u);
    wrf32d((u32)param_1 + 0x504u, f2);
    wrf32d((u32)param_1 + 0x508u, f1);
    wrf32d((u32)param_1 + 0x510u, f0);
    wr8((u32)param_1 + 0x4fcu, 0u);
    return;
}
