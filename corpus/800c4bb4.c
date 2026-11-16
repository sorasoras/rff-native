#include "tc_rt.h"

u32 fn_800c4bb4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f0 = (f64)rdf32(0x80572eacu);
    wr32(0x817fdfdcu, 0u);
    f1 = (f64)rdf32(0x80572f10u);
    wr32(0x817fdfd8u, 0u);
    r6 = rd32(0x804890d4u);
    r0 = rd32(0x804890dcu);
    wr32(0x817fdfccu, rd32(0x804890d8u));
    wr32(0x817fdfc8u, r6);
    wr32(0x817fdfd0u, r0);
    wrf32d(0x817fdfccu, f0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0x817fdfc8u;
    f1 = tc_callf(0x802343c8u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    f31 = f1;
    r3 = rd32(0x817fdfccu);
    r0 = rd32(0x817fdfd0u);
    wr32(0x817fdfbcu, rd32(0x817fdfc8u));
    wr32(0x817fdfc0u, r3);
    wr32(0x817fdfc4u, r0);
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = f31;
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)rdf32(0x817fdfc4u);
    f3 = (f64)rdf32(0x817fdfbcu);
    f0 = (f64)(f32)(f1 * f30);
    f2 = (f64)(f32)(f1 * f4);
    f1 = -f4;
    f2 = ppc_fmadds(f3, f30, f2);
    f0 = ppc_fmadds(f3, f1, f0);
    wrf32d(0x817fdfc8u, f2);
    wrf32d(0x817fdfd0u, f0);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = r3;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x80234380u, &a);
    r31 = 0u;
    wr16(0x817fdfb8u, 0u);
    r0 = rd32(0x80471a18u);
    wr8(0x817fdfbau, 0u);
    r0 = r0 * 0x4150u;
    f2 = (f64)rdf32(0x817fdfd0u);
    wr8(0x817fdfbbu, 0u);
    a.f[0] = (f64)rdf32(0x817fdfc8u);
    a.f[1] = f2;
    a.r[0] = r0 - 0x7fb92738u;
    a.r[1] = 0x817fdfb8u;
    a.r[2] = rd32(param_1 + 0xbcu);
    r3 = tc_call(0x8008b9e0u, &a);
    if (r3 != 0u) {
        if ((u32)rd8(0x817fdfbau) == 8u && (u32)(s8)rd8(0x817fdfbbu) != 0u) {
            r31 = 1u;
        }
        if (r31 != 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
