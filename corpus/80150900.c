#include "tc_rt.h"

void fn_80150900(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    r0 = rd32((u32)param_1 + 8u) - 1u;
    wr32((u32)param_1 + 8u, r0);
    if ((s32)r0 <= 0) {
        r3 = tc_call(0x80040b64u, &a);
        f0 = (f64)rdf32(0x805747e8u);
        r4 = ppc_mulhwu(0x6c16c16du, r3);
        r3 = r3 - (((((((r3 - r4) >> 1u) & 0x7fffffffu) + r4) >> 6u) & 0x3ffffffu) * 0x5au);
        wr32((u32)param_1 + 8u, r3 + 0x3cu);
        wrf32d(0x817fdfd4u, f0);
        wrf32d(0x817fdfd0u, f0);
        wrf32d(0x817fdfccu, f0);
        f1 = tc_callf(0x80040a00u, &a);
        f1 = (f64)(f32)((f64)rdf32(0x805747ecu) + f1);
        f31 = (f64)(f32)((f64)rdf32(0x805747f0u) * f1);
        f1 = tc_callf(0x80040a00u, &a);
        f30 = (f64)(f32)((f64)rdf32(0x805747f4u) * f1);
        a.f[0] = f30;
        f1 = tc_callf(0x80262b10u, &a);
        wrf32d(0x817fdfd0u, (f64)rdf32(0x805747e8u));
        wrf32d(0x817fdfccu, (f64)(f32)(f31 * (f64)(f32)f1));
        a.f[0] = f30;
        f1 = tc_callf(0x80262704u, &a);
        wrf32d(0x817fdfd4u, (f64)(f32)(f31 * (f64)(f32)f1));
        a.r[0] = 0x817fdfccu;
        a.r[1] = (u32)param_1 + 0xcu;
        a.r[2] = 0x817fdfccu;
        f1 = tc_callf(0x80234380u, &a);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
        wr32(0x817fdfc8u, r3);
        a.r[0] = 0x817fdfc8u;
        f1 = tc_callf(0x80149944u, &a);
        a.f[0] = f1;
        a.r[0] = param_2;
        a.r[1] = 0x817fdfccu;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x800b2cdcu, &a);
    }
    return;
}
