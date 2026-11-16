#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_80115ce8(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdfe8u, 0x43300000u);
    wr32(0x817fdff0u, 0x43300000u);
    if ((u32)param_2 != 5u) {
        r3 = 0u;
    } else {
        a.r[0] = rd32(param_3);
        r3 = tc_call(0x800a7a44u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        wr32((u32)param_1 + 0x58u, r3);
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
            r4 = tc_lastr4();
            f2 = 0.0;
            f3 = 0.0;
            f0 = (f64)rdf32(0x80574124u);
            wrf32d((u32)param_1 + 0x34u, (f64)rdf32(r3));
            wrf32d((u32)param_1 + 0x38u, (f64)rdf32(r3 + 4u));
            wrf32d((u32)param_1 + 0x3cu, (f64)rdf32(r3 + 8u));
            wrf32d((u32)param_1 + 0x38u, f0);
            r3 = rd32(param_3 + 4u);
            if ((r3 - 0x7fff0000u) != 0xffffu) {
                f1 = rdf64(0x80574130u);
                wr32(0x817fdfecu, r3 ^ 0x80000000u);
                wrf32d((u32)param_1 + 0x40u, (f64)(f32)(rdf64(0x817fdfe8u) - f1));
            } else {
                f1 = (f64)rdf32(rd32((u32)param_1 + 0x58u) + 0xa8u);
                wrf32d((u32)param_1 + 0x40u, (f64)(f32)((f64)rdf32(0x8057414cu) * f1));
            }
            if ((rd32(param_3 + 8u) - 0x7fff0000u) == 0xffffu) {
                f0 = (f64)rdf32(0x80574124u);
                wr32((u32)param_1 + 0x44u, 0u);
                wrf32d((u32)param_1 + 0x48u, f0);
                wrf32d((u32)param_1 + 0x54u, f0);
                wrf32d((u32)param_1 + 0x50u, f0);
                wrf32d((u32)param_1 + 0x4cu, f0);
            } else {
                f3 = rdf64(0x80574130u);
                wr32((u32)param_1 + 0x44u, 1u);
                f1 = (f64)rdf32(0x8057412cu);
                f0 = (f64)rdf32(0x80574148u);
                wr32(0x817fdff4u, rd32(param_3 + 8u) ^ 0x80000000u);
                f2 = (f64)(f32)(rdf64(0x817fdff0u) - f3);
                f1 = (f64)(f32)(f1 * f2);
                f0 = (f64)(f32)px_fdiv(f1, f0);
                wrf32d((u32)param_1 + 0x48u, f0);
                r3 = rd32(param_3 + 0xcu);
                if ((r3 - 0x7fff0000u) == 0xffffu) {
                    f0 = (f64)rdf32(0x80574124u);
                    wrf32d((u32)param_1 + 0x54u, f0);
                    wrf32d((u32)param_1 + 0x50u, f0);
                    wrf32d((u32)param_1 + 0x4cu, f0);
                } else {
                    f0 = (f64)rdf32(0x80574124u);
                    wr32(0x817fdfecu, r3 ^ 0x80000000u);
                    f1 = (f64)(f32)(rdf64(0x817fdfe8u) - f3);
                    wrf32d((u32)param_1 + 0x4cu, f1);
                    r0 = rd32(param_3 + 0x10u) ^ 0x80000000u;
                    wrf32d((u32)param_1 + 0x50u, f0);
                    wr32(0x817fdff4u, r0);
                    wrf32d((u32)param_1 + 0x54u, (f64)(f32)(rdf64(0x817fdff0u) - f3));
                }
            }
            r3 = rd32((u32)param_1 + 0x58u);
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
            a.r[1] = (u32)param_1;
            a.r[2] = (u32)param_1;
            (void)tc_call(0x802337a0u, &a);
            r3 = 1u;
        }
    }
    return r3;
}
