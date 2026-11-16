#include "tc_rt.h"

u32 fn_801a18b8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r31 = rd32(param_1 + 0x2a0u);
    wr32(0x817fdfd8u, 0x43300000u);
    wr32(0x817fdfe0u, 0x43300000u);
    if (r31 == 0u) {
        f2 = rdf64(0x805758a0u);
        wr32(0x817fdfdcu, rd32(param_2));
        a.f[0] = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd8u) - f2) * (f64)rdf32(0x80575890u));
        r3 = tc_call(0x802558e4u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        wr32(param_2, r3);
    } else {
        if (r31 == 3u) {
            f2 = rdf64(0x805758a0u);
            wr32(0x817fdfe4u, rd32(param_2));
            a.f[0] = (f64)(f32)((f64)(f32)(rdf64(0x817fdfe0u) - f2) * (f64)rdf32(0x80575894u));
            r3 = tc_call(0x802558e4u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            wr32(param_2, r3);
        }
    }
    if ((r31 == 1u || r31 == 2u) || (r31 - 4u) <= 1u) {
        f0 = (f64)rdf32(0x80575868u);
        wrf32d(0x817fdfd0u, f0);
        wrf32d(0x817fdfccu, f0);
        wrf32d(0x817fdfc8u, f0);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = r31;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x184u), &a);
        a.f[0] = (f64)rdf32(0x8057586cu);
        a.r[0] = 0xceu;
        a.r[1] = 0x817fdfc8u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        f1 = tc_callf(0x800d783cu, &a);
        r4 = tc_lastr4();
    }
    if (rd32(param_1 + 0xdf8u) == 0u) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0xccu), &a);
        f1 = tc_lastf();
        r31 = r3;
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0xd0u), &a);
        r0 = rd32(param_2);
        wr32(0x817fdfe4u, r3);
        r0 = r31 - r0;
        f1 = rdf64(0x805758a0u);
        r0 = r0 ^ 0x80000000u;
        f0 = rdf64(0x817fdfe0u);
        wr32(0x817fdfdcu, r0);
        f1 = (f64)(f32)(f0 - f1);
        if ((f64)(f32)(rdf64(0x817fdfd8u) - rdf64(0x805758a8u)) < (f64)(f32)((f64)rdf32(0x80575898u) * f1) && rd32(param_1 + 0xdf8u) == 0u) {
            wr32(param_1 + 0xdf8u, 1u);
            a.r[0] = param_1;
            (void)tc_call(0x801a2754u, &a);
            a.r[0] = param_1;
            (void)tc_call(0x801a2a44u, &a);
        }
    }
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0xf99u;
    (void)tc_call(0x8010a74cu, &a);
    return 1u;
}
