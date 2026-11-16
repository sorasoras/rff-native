#include "tc_rt.h"

s32 fn_800c2c48(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = (u32)param_2;
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    a.r[1] = rd32(param_1 + 0x5c0u);
    r3 = tc_call(0x8006bf70u, &a);
    f1 = tc_lastf();
    r30 = r3;
    if (r3 != 0x21u) {
        a.r[0] = param_1;
        a.r[1] = r3;
        f1 = tc_callf(0x800c00f8u, &a);
        r4 = 0u;
        if (r30 == 5u) {
            r31 = 7u;
            a.r[0] = param_1;
            a.r[1] = 0u;
            f1 = tc_callf(0x801465c4u, &a);
            wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) | 0x4000000u);
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
            f1 = tc_callf(0x8006d6d8u, &a);
            r4 = 1u;
        } else {
            if (r30 == 7u && rd32(0x80499178u) == 0u) {
                a.r[0] = param_1;
                (void)tc_call(0x800bfe00u, &a);
                a.r[0] = param_1;
                f1 = tc_callf(0x8006d6bcu, &a);
                wr32(param_1 + 0xa08u, 0x21u);
                r31 = 0u;
                r4 = 1u;
                wr32(param_1 + 0xa0cu, 0x21u);
                wr32(param_1 + 0xa10u, 0x21u);
                wr32(param_1 + 0xa14u, 0u);
            }
        }
        if (r4 == 0u) {
            if ((r30 == 1u || r30 == 7u) || r30 == 3u) {
                a.r[0] = param_1;
                a.r[1] = rd32(param_1 + 0x5c0u);
                f1 = tc_callf(0x8006cee8u, &a);
            }
            r31 = 0x16u;
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
            f1 = tc_callf(0x8006d6d8u, &a);
        }
    }
    if ((r31 != 0u && r30 != 0x1fu) && r30 != 0x20u) {
        f0 = (f64)rdf32(0x80572eacu);
        wrf32d(0x817fdfe0u, f0);
        wrf32d(0x817fdfdcu, f0);
        wrf32d(0x817fdfd8u, f0);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 9u;
        a.r[3] = 0x804890c8u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x34u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 == 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            f0 = (f64)rdf32(0x80572ef8u);
            wrf32d(0x817fdfd8u, (f64)rdf32(r3));
            f2 = (f64)rdf32(r3 + 4u);
            wrf32d(0x817fdfdcu, f2);
            wrf32d(0x817fdfe0u, (f64)rdf32(r3 + 8u));
            f0 = ppc_fmadds(f0, (f64)rdf32(param_1 + 0xb4u), f2);
            wrf32d(0x817fdfdcu, f0);
        }
        a.r[0] = param_1;
        a.r[1] = 0x50u;
        a.r[2] = 0x817fdfd8u;
        a.r[3] = 0x804890c8u;
        (void)tc_call(0x8019fc4cu, &a);
    }
    return (s32)r31;
}
