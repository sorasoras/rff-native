#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80156460(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0, f31 = 0.0, t4 = 0.0, t6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    r5 = rd32((u32)param_2 + 0x4cu);
    if ((s32)rd32((u32)param_2 + ((r5 << 2u) & 0xfffffffcu) + 0x28u) >= 0) {
        a.r[0] = r5;
        a.r[1] = (u32)param_2 + 0x44u;
        r3 = tc_call(0x80155bf4u, &a);
        if (r3 != 0u) {
            a.r[0] = 0x817fdfdcu;
            a.r[1] = (u32)param_2 + 0x44u;
            f1 = tc_callf(0x80155e88u, &a);
            r4 = tc_lastr4();
            if (rd32((u32)param_2 + 0x54u) == 0u) {
                a.f[0] = (f64)rdf32(0x817fdfdcu);
                a.f[1] = (f64)rdf32(0x817fdfe0u);
                a.f[2] = (f64)rdf32(0x817fdfe4u);
                a.r[0] = (u32)param_2;
                f1 = tc_callf(0x80156140u, &a);
                r4 = tc_lastr4();
            }
            r3 = rd32((u32)param_2 + 0x54u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                wrf32d(0x817fdfc4u, (f64)rdf32(r3));
                wrf32d(0x817fdfc8u, (f64)rdf32(r3 + 4u));
                wrf32d(0x817fdfccu, (f64)rdf32(r3 + 8u));
                a.r[0] = 0x817fdfdcu;
                a.r[1] = 0x817fdfc4u;
                a.r[2] = 0x817fdfd0u;
                (void)tc_call(0x802343a4u, &a);
                a.r[0] = 0x817fdfd0u;
                f1 = tc_callf(0x80234440u, &a);
                f31 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80574908u));
                a.r[0] = rd32((u32)param_2 + 0x54u);
                (void)tc_call(0x800b2bccu, &a);
                t4 = (f64)rdf32(0x817fdfe0u);
                t6 = (f64)rdf32(0x817fdfe4u);
                wrf32d(0x817fdfb8u, (f64)rdf32(0x817fdfdcu));
                wrf32d(0x817fdfbcu, t4);
                wrf32d(0x817fdfc0u, t6);
                a.f[0] = (f64)(f32)((f64)rdf32(0x80574904u) + f31);
                a.r[0] = rd32((u32)param_2 + 0x54u);
                a.r[1] = 0x817fdfb8u;
                a.r[2] = 1u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                (void)tc_call(0x800b2cdcu, &a);
            }
            wr32((u32)param_1 + 4u, 0x5au);
            wr32((u32)param_1 + 8u, 0u);
            return;
        }
    }
    r3 = rd32((u32)param_2 + 0x54u);
    wr32((u32)param_2 + 0x20u, 0u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0xcu;
        (void)tc_call(0x800b31a0u, &a);
        wr32((u32)param_2 + 0x54u, 0u);
    }
    return;
}
