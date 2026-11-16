#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801ae004(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    if (rd32(param_2 + 0x110u) != 0u) {
        a.r[0] = param_2;
        a.r[1] = param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x208u), &a);
        a.r[0] = param_2;
        a.r[1] = r3;
        a.r[2] = 1u;
        a.r[3] = 1u;
        a.f[0] = (f64)rdf32(0x80575af8u);
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
        r3 = 0u;
    } else {
        r4 = rd32(param_2 + 0x70u);
        f0 = (f64)rdf32(0x80570934u);
        f1 = (f64)rdf32(r4 + 0x54u);
        if ((f1 > f0) || (f1 == f0)) {
            if (rd32((u32)param_1 + 8u) == 0u) {
                a.r[0] = param_2;
                a.r[1] = 1u;
                f1 = tc_callf(0x801c353cu, &a);
                r4 = tc_lastr4();
                wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + 1u);
            }
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
            r4 = tc_lastr4();
            f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x28u) - f1);
            f2 = (f64)(f32)ppc_fabs(f3);
            if (f2 > (f64)rdf32(0x80575afcu)) {
                if (f3 < (f64)rdf32(0x80575af4u)) {
                    f3 = (f64)(f32)((f64)rdf32(0x80575b00u) + f3);
                } else {
                    f3 = -(f64)(f32)((f64)rdf32(0x80575b00u) - f3);
                }
            }
            f1 = ppc_fmadds((f64)rdf32(0x80575af0u), f3, f1);
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            f1 = tc_callf(rd32(rd32(param_2) + 0x24u), &a);
            a.r[0] = param_2;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
            r0 = rd32((u32)param_1 + 0x20u);
            wr32(0x817fdfd4u, rd32((u32)param_1 + 0x1cu));
            wr32(0x817fdfd8u, r0);
            wr32(0x817fdfdcu, rd32((u32)param_1 + 0x24u));
            a.r[0] = 0x817fdfd4u;
            a.r[1] = r3;
            a.r[2] = 0x817fdfd4u;
            (void)tc_call(0x802343a4u, &a);
            a.f[0] = (f64)rdf32(0x80575af0u);
            a.r[0] = 0x817fdfd4u;
            a.r[1] = 0x817fdfd4u;
            f1 = tc_callf(0x802343c8u, &a);
            a.r[0] = param_2;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
            a.r[0] = 0x817fdfd4u;
            a.r[1] = r3;
            a.r[2] = 0x817fdfd4u;
            f1 = tc_callf(0x80234380u, &a);
            a.r[0] = param_2;
            a.r[1] = 0x817fdfd4u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            (void)tc_call(rd32(rd32(param_2) + 0x1cu), &a);
        } else {
            f0 = (f64)rdf32(0x80570930u);
            if ((f1 > f0) || (f1 == f0)) {
                f1 = (f64)(f32)(f1 - f0);
                r0 = rd32((u32)param_1 + 0x14u);
                f1 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80571374u));
                f0 = (f64)rdf32(0x80575b04u);
                wr32(0x817fdfc8u, rd32((u32)param_1 + 0x10u));
                wr32(0x817fdfccu, r0);
                wr32(0x817fdfd0u, rd32((u32)param_1 + 0x18u));
                a.r[0] = 0x817fdfc8u;
                a.r[1] = (u32)param_1 + 0x1cu;
                a.r[2] = 0x817fdfc8u;
                (void)tc_call(0x802343a4u, &a);
                a.f[0] = (f64)(f32)(f0 - f1);
                a.r[0] = 0x817fdfc8u;
                a.r[1] = 0x817fdfc8u;
                (void)tc_call(0x802343c8u, &a);
                a.r[0] = 0x817fdfc8u;
                a.r[1] = (u32)param_1 + 0x1cu;
                a.r[2] = 0x817fdfc8u;
                f1 = tc_callf(0x80234380u, &a);
                a.r[0] = param_2;
                a.r[1] = 0x817fdfc8u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                f1 = tc_callf(rd32(rd32(param_2) + 0x1cu), &a);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
                r4 = tc_lastr4();
                f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x28u) - f1);
                f2 = (f64)(f32)ppc_fabs(f3);
                if (f2 > (f64)rdf32(0x80575afcu)) {
                    if (f3 < (f64)rdf32(0x80575af4u)) {
                        f3 = (f64)(f32)((f64)rdf32(0x80575b00u) + f3);
                    } else {
                        f3 = -(f64)(f32)((f64)rdf32(0x80575b00u) - f3);
                    }
                }
                f1 = ppc_fmadds(f3, (f64)rdf32(0x80570938u), f1);
                a.r[0] = param_2;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = f3;
                (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
            }
        }
        r3 = 1u;
    }
    return r3;
}
