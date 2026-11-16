#include "tc_rt.h"

void fn_800d431c(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wr32(0x817fdfacu, 0u);
    if ((u32)((s32)((rd32((u32)param_1 + 0x72cu) << 5u) & 0xc0000000u) >> 31) == 0u) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d50b8u, &a);
        if (r3 != 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdfa4u;
            a.r[2] = 0x817fdfa0u;
            (void)tc_call(0x800d3dccu, &a);
            a.f[0] = (f64)rdf32(0x817fdfa4u);
            a.f[1] = (f64)rdf32(0x817fdfa0u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdf9cu;
            a.r[2] = 0x817fdf98u;
            (void)tc_call(0x800d3f68u, &a);
            f31 = (f64)(f32)((f64)rdf32(0x817fdf9cu) - (f64)rdf32((u32)param_1 + 0x4f0u));
            f30 = (f64)(f32)((f64)rdf32(0x817fdf98u) - (f64)rdf32((u32)param_1 + 0x4f4u));
            if ((f64)(f32)ppc_fabs(f31) < (f64)rdf32(0x80573110u)) {
                f31 = (f64)rdf32(0x80573124u);
            }
            if ((f64)(f32)ppc_fabs(f30) < (f64)rdf32(0x80573110u)) {
                f30 = (f64)rdf32(0x80573124u);
            }
            f2 = (f64)rdf32(0x8057317cu);
            f1 = ppc_fmadds(f2, f31, (f64)rdf32((u32)param_1 + 0x4f0u));
            wrf32d(0x817fdf9cu, f1);
            wrf32d(0x817fdf98u, ppc_fmadds(f2, f30, (f64)rdf32((u32)param_1 + 0x4f4u)));
            wrf32d((u32)param_1 + 0x4f0u, f1);
            wrf32d((u32)param_1 + 0x4f4u, (f64)rdf32(0x817fdf98u));
            a.f[0] = (f64)rdf32(0x817fdf9cu);
            a.f[1] = (f64)rdf32(0x817fdf98u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdf94u;
            a.r[2] = 0x817fdf90u;
            (void)tc_call(0x800d4194u, &a);
            if (rd32((u32)param_1 + 0x51cu) == 1u) {
                a.f[0] = (f64)rdf32(0x817fdf9cu);
                f1 = tc_callf(0x800d5a48u, &a);
                wrf32d(0x817fdf94u, (f64)(f32)((f64)rdf32(0x817fdf94u) - f1));
            }
            f29 = (f64)rdf32(0x817fdf94u);
            f28 = (f64)rdf32(0x817fdf90u);
            a.r[0] = (u32)param_1;
            a.r[1] = 0x817fdf8cu;
            a.r[2] = 0x817fdf88u;
            (void)tc_call(0x800d3b78u, &a);
            f29 = (f64)(f32)(f29 + (f64)rdf32(0x817fdf8cu));
            f27 = (f64)rdf32(0x817fdfa4u);
            f28 = (f64)(f32)(f28 + (f64)rdf32(0x817fdf88u));
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800d5790u, &a);
            if (r3 == 0u) {
                a.r[0] = (u32)param_1;
                r3 = tc_call(0x800d5c1cu, &a);
                if (r3 == 0u) {
                    f1 = tc_callf(0x800d5a90u, &a);
                    f27 = (f64)(f32)(f27 + f1);
                }
            }
            f2 = (f64)rdf32(0x80573180u);
            f29 = ppc_fmadds((f64)(f32)((f64)rdf32(0x817fdf9cu) - f27), f2, f29);
            f28 = ppc_fmadds((f64)(f32)((f64)rdf32(0x817fdf98u) - (f64)rdf32(0x817fdfa0u)), f2, f28);
            wrf32d((u32)param_1 + 0x500u, f29);
            wrf32d((u32)param_1 + 0x504u, f28);
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x800d595cu, &a);
            if (r3 == 2u) {
                if ((f64)rdf32(0x80573124u) != (f64)(f32)(f31 + f30)) {
                    return;
                }
                a.f[0] = f29;
                a.f[1] = f28;
                a.r[0] = (u32)param_1 + 0x4bcu;
                (void)tc_call(0x800d316cu, &a);
                a.f[0] = (f64)rdf32(0x817fdfa4u);
                a.f[1] = (f64)rdf32(0x817fdfa0u);
                a.r[0] = (u32)param_1 + 0x4bcu;
                (void)tc_call(0x800d3178u, &a);
                a.r[0] = 1u;
                (void)tc_call(0x8004ca7cu, &a);
                a.r[0] = 0u;
                a.r[1] = 0u;
                (void)tc_call(0x8004cb58u, &a);
                a.r[0] = 0u;
                a.r[1] = 0u;
                a.r[2] = 7u;
                f1 = tc_callf(0x80044e3cu, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                (void)tc_call(rd32(rd32((u32)param_1 + 0x738u) + 0x14u), &a);
                a.f[0] = (f64)rdf32(0x817fdf9cu);
                f1 = tc_callf(0x800d5a48u, &a);
                f3 = (f64)rdf32(0x817fdf98u);
                f4 = (f64)(f32)(f3 - (f64)rdf32(0x817fdfa0u));
                f3 = (f64)(f32)((f64)rdf32(0x817fdf90u) + f3);
                f2 = (f64)rdf32(0x80573184u);
                f1 = (f64)(f32)((f64)(f32)((f64)(f32)((f64)rdf32(0x817fdf94u) + f1) - (f64)rdf32(0x817fdf8cu)) - f2);
                f2 = (f64)(f32)((f64)(f32)(ppc_fnmsubs(f4, (f64)rdf32(0x80573180u), f3) - (f64)rdf32(0x817fdf88u)) - f2);
                a.f[0] = f1;
                a.f[1] = f2;
                a.r[0] = (u32)param_1;
                f1 = tc_callf(0x800d5224u, &a);
                a.r[0] = (u32)param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                (void)tc_call(rd32(rd32((u32)param_1 + 0x738u) + 0x18u), &a);
                a.r[0] = 0u;
                (void)tc_call(0x8004ca7cu, &a);
                a.r[0] = 1u;
                a.r[1] = 1u;
                a.r[2] = 3u;
                (void)tc_call(0x80044e3cu, &a);
            }
        }
    }
    return;
}
