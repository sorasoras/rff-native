#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_8005b4a0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    f2 = (f64)rdf32(param_2 + 8u);
    wr32(0x817fdffcu, 0u);
    f1 = (f64)rdf32(param_2);
    r0 = rd32(0x80471a18u);
    wr32(0x817fdfe0u, 0x43300000u);
    r0 = r0 * 0x4150u;
    wr32(0x817fdfe8u, 0x43300000u);
    a.f[0] = f1;
    a.f[1] = f2;
    a.r[0] = r0 - 0x7fb92738u;
    a.r[1] = 0x817fdfd8u;
    a.r[2] = param_3;
    a.r[3] = 1u;
    r3 = tc_call(0x8008b524u, &a);
    if (r3 != 0u) {
        f3 = rdf64(0x805723c8u);
        f5 = (f64)rdf32(0x8057241cu);
        wrf32d(param_4, (f64)rdf32(0x803d2790u));
        wrf32d(param_4 + 4u, (f64)rdf32(0x803d2794u));
        wrf32d(param_4 + 8u, (f64)rdf32(0x803d2798u));
        wrf32d(param_4 + 0xcu, (f64)rdf32(0x803d279cu));
        r0 = (u32)rd8(0x817fdfdau);
        wr32(0x817fdfe4u, (u32)rd8(0x817fdfdbu));
        r3 = (u32)rd8(0x817fdfd9u);
        wr32(0x817fdfecu, r0);
        f2 = rdf64(0x817fdfe8u);
        r0 = (u32)rd8(0x817fdfd8u);
        f0 = (f64)(f32)(rdf64(0x817fdfe0u) - f3);
        wr32(0x817fdfe4u, r3);
        f2 = (f64)(f32)(f2 - f3);
        f4 = (f64)(f32)px_fdiv(f0, f5);
        wr32(0x817fdfecu, r0);
        f0 = rdf64(0x817fdfe8u);
        f1 = (f64)(f32)(rdf64(0x817fdfe0u) - f3);
        wrf32d(0x803d279cu, f4);
        f0 = (f64)(f32)(f0 - f3);
        f3 = (f64)(f32)px_fdiv(f2, f5);
        f2 = (f64)(f32)px_fdiv(f1, f5);
        wrf32d(0x803d2798u, f3);
        f1 = (f64)(f32)px_fdiv(f0, f5);
        wrf32d(0x803d2794u, f2);
        wrf32d(0x803d2790u, f1);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        (void)tc_call(0x8003d818u, &a);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
