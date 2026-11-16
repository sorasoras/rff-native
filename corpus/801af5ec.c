#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801af5ec(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    if (param_2 > 40) {
        r3 = 0u;
    } else {
        r0 = (u32)((s32)ppc_mulhw(1717986919, param_2) >> 2);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0xau;
        r0 = (u32)param_2 - r0;
        if (r0 == 0u) {
            wr32(0x817fdfbcu, rd32(param_1 + 0x150u));
            wr32(0x817fdfb8u, 0xau);
            a.r[0] = 0x817fdfb8u;
            a.r[1] = 2u;
            f1 = tc_callf(0x8014a130u, &a);
            f31 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575b24u));
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            a.f[0] = f1;
            a.r[0] = 0xa2u;
            a.r[1] = 5u;
            r3 = tc_call(0x8017748cu, &a);
            f0 = (f64)rdf32(0x80575af4u);
            r29 = r3;
            wrf32d(0x817fdfd4u, f0);
            wrf32d(0x817fdfd0u, f0);
            wrf32d(0x817fdfccu, f0);
            wrf32d(0x817fdfc8u, f0);
            wrf32d(0x817fdfc4u, f0);
            wrf32d(0x817fdfc0u, f0);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfccu;
            f1 = tc_callf(0x801c3208u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x817fdfccu;
            a.r[1] = r3;
            a.r[2] = 0x817fdfccu;
            (void)tc_call(0x80234380u, &a);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfc0u;
            f1 = tc_callf(0x801c2ab8u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x817fdfc0u;
            a.r[1] = r3;
            a.r[2] = 0x817fdfc0u;
            (void)tc_call(0x802343a4u, &a);
            f1 = (f64)rdf32(0x80575af4u);
            r0 = 0u;
            if ((f1 == (f64)rdf32(0x817fdfc0u) && f1 == (f64)rdf32(0x817fdfc4u)) && f1 == (f64)rdf32(0x817fdfc8u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = 0x817fdfc0u;
                a.r[1] = 0x817fdfc0u;
                (void)tc_call(0x802343e4u, &a);
            }
            wr32(0x817fdfd8u, 0x43300000u);
            f2 = rdf64(0x80575ae8u);
            f0 = (f64)rdf32(0x80575b58u);
            r0 = (u32)((s32)ppc_mulhw(1717986919, param_2) >> 2);
            r0 = r0 + ((r0 >> 0x1fu) & 1u) + 1u;
            r0 = r0 ^ 0x80000000u;
            wr32(0x817fdfdcu, r0);
            a.f[0] = (f64)(f32)(f0 * (f64)(f32)(rdf64(0x817fdfd8u) - f2));
            a.r[0] = 0x817fdfc0u;
            a.r[1] = 0x817fdfc0u;
            (void)tc_call(0x802343c8u, &a);
            a.r[0] = 0x817fdfccu;
            a.r[1] = 0x817fdfc0u;
            a.r[2] = 0x817fdfccu;
            (void)tc_call(0x80234380u, &a);
            if (r29 != 0u) {
                a.r[0] = r29;
                (void)tc_call(0x801af464u, &a);
                f2 = (f64)rdf32(0x817fdfccu);
                wrf32d(r29 + 0x100u, f2);
                f1 = (f64)rdf32(0x817fdfd0u);
                wrf32d(r29 + 0x104u, f1);
                f0 = (f64)rdf32(0x817fdfd4u);
                wrf32d(r29 + 0x108u, f0);
                wrf32d(r29 + 8u, f2);
                wrf32d(r29 + 0xcu, f1);
                wrf32d(r29 + 0x10u, f0);
                wr32(r29 + 0x124u, 0x208047u);
                a.r[0] = r29;
                a.r[1] = param_1;
                (void)tc_call(0x80177d54u, &a);
                a.r[0] = 0x817fdfbcu;
                r3 = tc_call(0x80149604u, &a);
                wr32(0x817fdfd8u, 0x43300000u);
                f1 = rdf64(0x80575ae8u);
                wr32(0x817fdfdcu, r3 ^ 0x80000000u);
                f0 = (f64)(f32)(f31 * (f64)(f32)(rdf64(0x817fdfd8u) - f1));
                wrf32d(r29 + 0x130u, f0);
                wrf32d(r29 + 0x24u, f0);
            }
        }
        r3 = 1u;
    }
    return r3;
}
