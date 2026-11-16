#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_80115660(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((u32)param_2 != 6u) {
        r3 = 0u;
    } else {
        a.r[0] = rd32(param_3);
        r3 = tc_call(0x800a7a44u, &a);
        wr32(param_1 + 0x78u, r3);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = param_1 + 0x40u;
            a.r[1] = r3;
            a.r[2] = param_3 + 4u;
            (void)tc_call(0x801100fcu, &a);
            r4 = tc_lastr4();
            f2 = 0.0;
            f3 = 0.0;
            if ((rd32(param_3 + 0x14u) - 0x7fff0000u) != 0xffffu) {
                wr32(param_1 + 0x70u, 1u);
                f3 = rdf64(0x80574130u);
                r3 = rd32(param_3 + 0x14u);
                wr32(0x817fdfe8u, 0x43300000u);
                f1 = (f64)rdf32(0x8057412cu);
                wr32(0x817fdfecu, r3 ^ 0x80000000u);
                f2 = (f64)(f32)(rdf64(0x817fdfe8u) - f3);
                f1 = (f64)(f32)(f1 * f2);
                wrf32d(param_1 + 0x74u, (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80574148u)));
            } else {
                f0 = (f64)rdf32(0x80574124u);
                wr32(param_1 + 0x70u, 0u);
                wrf32d(param_1 + 0x74u, f0);
            }
            f0 = (f64)rdf32(0x80574124u);
            f1 = (f64)rdf32(0x80574144u);
            wrf32d(param_1 + 0x10u, f0);
            r3 = rd32(param_1 + 0x78u);
            wrf32d(param_1, f1);
            wrf32d(param_1 + 0x20u, f0);
            wrf32d(param_1 + 4u, f0);
            wrf32d(param_1 + 0x14u, f1);
            wrf32d(param_1 + 0x24u, f0);
            wrf32d(param_1 + 8u, f0);
            wrf32d(param_1 + 0x18u, f0);
            wrf32d(param_1 + 0x28u, f1);
            wrf32d(param_1 + 0xcu, f0);
            wrf32d(param_1 + 0x1cu, f0);
            wrf32d(param_1 + 0x2cu, f0);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            f1 = tc_callf(rd32(rd32(r3) + 0x2cu), &a);
            f0 = (f64)rdf32(0x80574124u);
            f2 = (f64)rdf32(0x80574144u);
            wrf32d(0x817fdfc8u, f0);
            wrf32d(0x817fdfb8u, f2);
            wrf32d(0x817fdfd8u, f0);
            wrf32d(0x817fdfbcu, f0);
            wrf32d(0x817fdfccu, f2);
            wrf32d(0x817fdfdcu, f0);
            wrf32d(0x817fdfc0u, f0);
            wrf32d(0x817fdfd0u, f0);
            wrf32d(0x817fdfe0u, f2);
            wrf32d(0x817fdfc4u, f0);
            wrf32d(0x817fdfd4u, f0);
            wrf32d(0x817fdfe4u, f0);
            a.f[0] = f1;
            a.r[0] = 0x817fdfb8u;
            a.r[1] = 0x79u;
            (void)tc_call(0x80233a2cu, &a);
            a.r[0] = 0x817fdfb8u;
            a.r[1] = param_1;
            a.r[2] = param_1;
            (void)tc_call(0x802337a0u, &a);
            r3 = 1u;
        }
    }
    return r3;
}
