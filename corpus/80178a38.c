#include "tc_rt.h"

void fn_80178a38(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80179664u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        r4 = rd32((u32)param_1 + 0x10cu);
        r0 = rd32((u32)param_1 + 0x110u);
        wr32(0x817fdfbcu, r4);
        wr32(0x817fdfc0u, r0);
        wr32(0x817fdfc4u, rd32((u32)param_1 + 0x114u));
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfb0u, rd32(r3));
        wr32(0x817fdfb4u, r0);
        wr32(0x817fdfb8u, rd32(r3 + 8u));
        a.r[0] = 0x817fdfb0u;
        a.r[1] = (u32)param_1 + 0x100u;
        a.r[2] = 0x817fdfb0u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdfb0u;
        f1 = tc_callf(0x80234440u, &a);
        if (f1 > (f64)rdf32(0x80574fbcu)) {
            a.r[0] = 0x817fdfbcu;
            f1 = tc_callf(0x80234440u, &a);
            if (f1 > (f64)rdf32(0x80574fbcu)) {
                f1 = (f64)rdf32(0x80574fa4u);
                r0 = 0u;
                if ((f1 == (f64)rdf32(0x817fdfbcu) && f1 == (f64)rdf32(0x817fdfc0u)) && f1 == (f64)rdf32(0x817fdfc4u)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    a.r[0] = 0x817fdfbcu;
                    a.r[1] = 0x817fdfbcu;
                    (void)tc_call(0x802343e4u, &a);
                }
                f1 = (f64)rdf32(0x80574fa4u);
                r0 = 0u;
                if ((f1 == (f64)rdf32(0x817fdfb0u) && f1 == (f64)rdf32(0x817fdfb4u)) && f1 == (f64)rdf32(0x817fdfb8u)) {
                    r0 = 1u;
                }
                if (r0 == 0u) {
                    a.r[0] = 0x817fdfb0u;
                    a.r[1] = 0x817fdfb0u;
                    (void)tc_call(0x802343e4u, &a);
                }
                f3 = (f64)rdf32(0x80574fa4u);
                r3 = rd32((u32)param_1 + 0x178u) ^ 0x80000000u;
                wr32(0x817fdfc8u, 0x43300000u);
                f2 = rdf64(0x80574f98u);
                wr32(0x817fdfccu, r3);
                f0 = (f64)rdf32(0x80574fb4u);
                f1 = rdf64(0x817fdfc8u);
                wrf32d(0x817fdfacu, f3);
                f1 = (f64)(f32)(f1 - f2);
                wrf32d(0x817fdfa8u, f3);
                f31 = (f64)(f32)(f0 * f1);
                wrf32d(0x817fdfa4u, f3);
                a.f[0] = f31;
                f1 = tc_callf(0x80262b10u, &a);
                f30 = (f64)(f32)f1;
                a.f[0] = f31;
                f1 = tc_callf(0x80262704u, &a);
                wrf32d(0x817fdfa4u, ppc_fmsubs((f64)rdf32(0x817fdfbcu), (f64)(f32)f1, (f64)(f32)((f64)rdf32(0x817fdfc4u) * f30)));
                a.f[0] = f31;
                f1 = tc_callf(0x80262704u, &a);
                f30 = (f64)(f32)f1;
                a.f[0] = f31;
                f1 = tc_callf(0x80262b10u, &a);
                f6 = (f64)rdf32(0x817fdfc4u);
                f5 = (f64)rdf32(0x817fdfbcu);
                f3 = (f64)rdf32(0x817fdfb0u);
                f0 = (f64)rdf32(0x817fdfa4u);
                f4 = ppc_fmadds(f5, (f64)(f32)f1, (f64)(f32)(f6 * f30));
                f2 = ppc_fmadds(f5, f3, (f64)(f32)(f6 * (f64)rdf32(0x817fdfb8u)));
                wrf32d(0x817fdfacu, f4);
                f0 = ppc_fmadds(f5, f0, (f64)(f32)(f6 * f4));
                if ((f2 > f0) || (f2 == f0)) {
                    f1 = (f64)rdf32((u32)param_1 + 0x12cu);
                    wrf32d((u32)param_1 + 0x118u, (f64)(f32)(f3 * f1));
                    wrf32d((u32)param_1 + 0x120u, (f64)(f32)((f64)rdf32(0x817fdfb8u) * f1));
                } else {
                    f0 = (f64)rdf32(0x80574fa4u);
                    wrf32d(0x817fdfa0u, f0);
                    wrf32d(0x817fdf9cu, f0);
                    wrf32d(0x817fdf98u, f0);
                    a.f[0] = f31;
                    f1 = tc_callf(0x80262b10u, &a);
                    f30 = (f64)(f32)f1;
                    a.f[0] = f31;
                    f1 = tc_callf(0x80262704u, &a);
                    wrf32d(0x817fdf98u, ppc_fmadds((f64)rdf32(0x817fdfbcu), (f64)(f32)f1, (f64)(f32)((f64)rdf32(0x817fdfc4u) * f30)));
                    a.f[0] = f31;
                    f1 = tc_callf(0x80262704u, &a);
                    f30 = (f64)(f32)f1;
                    a.f[0] = f31;
                    f1 = tc_callf(0x80262b10u, &a);
                    f5 = (f64)rdf32(0x817fdfb8u);
                    f2 = (f64)rdf32(0x817fdfacu);
                    f3 = (f64)rdf32(0x817fdfb0u);
                    f6 = ppc_fmadds((f64)rdf32(0x817fdfbcu), -(f64)(f32)f1, (f64)(f32)((f64)rdf32(0x817fdfc4u) * f30));
                    f4 = (f64)rdf32(0x817fdf98u);
                    f0 = (f64)(f32)(f5 * f2);
                    f1 = (f64)rdf32(0x817fdfa4u);
                    f5 = (f64)(f32)(f5 * f6);
                    wrf32d(0x817fdfa0u, f6);
                    f0 = ppc_fmadds(f3, f1, f0);
                    f3 = ppc_fmadds(f3, f4, f5);
                    if ((f3 > f0) || (f3 == f0)) {
                        f0 = (f64)rdf32((u32)param_1 + 0x12cu);
                        f1 = (f64)(f32)(f4 * f0);
                        f0 = (f64)(f32)(f6 * f0);
                        wrf32d((u32)param_1 + 0x118u, f1);
                        wrf32d((u32)param_1 + 0x120u, f0);
                    } else {
                        f0 = (f64)rdf32((u32)param_1 + 0x12cu);
                        f1 = (f64)(f32)(f1 * f0);
                        f0 = (f64)(f32)(f2 * f0);
                        wrf32d((u32)param_1 + 0x118u, f1);
                        wrf32d((u32)param_1 + 0x120u, f0);
                    }
                }
            }
        }
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801792bcu, &a);
    return;
}
