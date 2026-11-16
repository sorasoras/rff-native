#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801562a4(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0, t5 = 0.0, t7 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    a.r[0] = rd32(param_r4 + 0x4cu);
    a.r[1] = param_r4 + 0x44u;
    r3 = tc_call(0x80155bf4u, &a);
    if (r3 == 0u) {
        r3 = rd32(param_r4 + 0x54u);
        wr32(param_r4 + 0x20u, 0u);
        if (r3 == 0u) {
            return;
        }
        a.r[0] = r3;
        a.r[1] = 0xcu;
        (void)tc_call(0x800b31a0u, &a);
        wr32(param_r4 + 0x54u, 0u);
    } else {
        a.f[0] = (f64)rdf32(0x8033a5e8u);
        a.f[1] = (f64)rdf32(0x8033a5ecu);
        a.f[2] = (f64)rdf32(0x8033a5f0u);
        a.r[0] = param_r4;
        r3 = tc_call(0x80156140u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            r3 = rd32(param_r4 + 0x20u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = param_r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                (void)tc_call(rd32(rd32(r3) + 0x10u), &a);
            }
            wr32(param_r4 + 0x20u, 0u);
        } else {
            f30 = (f64)rdf32(0x805748fcu);
            wr32(param_r3 + 4u, 0x96u);
            r30 = 0x8033a5e8u;
            r29 = 0u;
            do {
                a.r[0] = ((r29 + 1u) * 0xcu) - 0x7fcc5a18u;
                a.r[1] = r30;
                f1 = tc_callf(0x802344e8u, &a);
                r29 = r29 + 1u;
                f30 = (f64)(f32)(f30 + f1);
                r30 = r30 + 0xcu;
            } while ((s32)r29 < 3);
            f31 = (f64)rdf32(0x80574904u);
            r31 = 0x8033a5e8u;
            r29 = 0u;
            wrf32d(param_r3 + 8u, (f64)(f32)px_fdiv(f30, (f64)rdf32(0x80574900u)));
            do {
                t5 = (f64)rdf32(r31 + 4u);
                t7 = (f64)rdf32(r31 + 8u);
                wrf32d(0x817fdfb8u, (f64)rdf32(r31));
                wrf32d(0x817fdfbcu, t5);
                wrf32d(0x817fdfc0u, t7);
                a.f[0] = (f64)(f32)(f31 + (f64)rdf32(param_r3 + 8u));
                a.r[0] = rd32(param_r4 + 0x54u);
                a.r[1] = 0x817fdfb8u;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                (void)tc_call(0x800b2cdcu, &a);
                r29 = r29 + 1u;
                r31 = r31 + 0xcu;
            } while ((s32)r29 < 4);
        }
    }
    return;
}
