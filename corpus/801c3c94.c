#include "tc_rt.h"

u32 fn_801c3c94(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f30 = 0.0, f31 = 0.0;
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
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
    f1 = tc_lastf();
    r31 = r3;
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = 0x80480000u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfbcu, rd32(r3));
    wr32(0x817fdfc0u, r0);
    wr32(0x817fdfc4u, rd32(r3 + 8u));
    a.r[0] = 0x817fdfbcu;
    a.r[1] = r31;
    a.r[2] = 0x817fdfbcu;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x80575cfcu);
    r0 = 0u;
    if ((f1 == (f64)rdf32(0x817fdfbcu) && f1 == (f64)rdf32(0x817fdfc0u)) && f1 == (f64)rdf32(0x817fdfc4u)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fdfbcu;
        a.r[1] = 0x817fdfbcu;
        (void)tc_call(0x802343e4u, &a);
    }
    f0 = (f64)rdf32(0x80575cfcu);
    wrf32d(0x817fdfb8u, f0);
    wrf32d(0x817fdfb4u, f0);
    wrf32d(0x817fdfb0u, f0);
    wrf32d(0x817fdfacu, f0);
    wrf32d(0x817fdfa8u, f0);
    wrf32d(0x817fdfa4u, f0);
    a.r[0] = param_2;
    a.r[1] = 0x817fdfb0u;
    (void)tc_call(0x801c3208u, &a);
    a.r[0] = param_2;
    a.r[1] = 0x817fdfa4u;
    (void)tc_call(0x801c3228u, &a);
    r4 = tc_lastr4();
    f2 = (f64)rdf32(0x817fdfc0u);
    f3 = (f64)rdf32(0x817fdfbcu);
    f5 = (f64)(f32)((f64)rdf32(0x817fdfb4u) * f2);
    f1 = ppc_fmadds((f64)rdf32(0x817fdfa4u), f3, (f64)(f32)((f64)rdf32(0x817fdfa8u) * f2));
    f2 = (f64)rdf32(0x817fdfc4u);
    f4 = ppc_fmadds((f64)rdf32(0x817fdfb0u), f3, f5);
    f3 = (f64)rdf32(0x817fdfb8u);
    f1 = ppc_fmadds((f64)rdf32(0x817fdfacu), f2, f1);
    f31 = ppc_fmadds(f3, f2, f4);
    if (f1 < (f64)rdf32(0x80575cfcu)) {
        f30 = (f64)rdf32(0x80575cd8u);
    } else {
        f30 = (f64)rdf32(0x80575d44u);
    }
    a.r[0] = param_2;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    f1 = tc_callf(rd32(rd32(param_2) + 0x2cu), &a);
    r4 = tc_lastr4();
    if (f31 > (f64)rdf32(0x8057094cu)) {
        f1 = ppc_fmadds((f64)rdf32(0x80570948u), f30, f1);
        a.r[0] = param_2;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
    } else {
        if (f31 < (f64)rdf32(0x80575d18u)) {
            f2 = -f30;
            f1 = ppc_fmadds((f64)rdf32(0x80570948u), f2, f1);
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
        }
    }
    f0 = (f64)rdf32(0x80575cfcu);
    wrf32d(0x817fdfa0u, f0);
    wrf32d(0x817fdf9cu, f0);
    wrf32d(0x817fdf98u, f0);
    a.r[0] = param_2;
    a.r[1] = 0x817fdf98u;
    (void)tc_call(0x801c3208u, &a);
    a.f[0] = (f64)(f32)((f64)(f32)((f64)rdf32(0x80570944u) * (f64)rdf32(param_2 + 0xd38u)) * (f64)rdf32(param_2 + 0x1cu));
    a.r[0] = 0x817fdf98u;
    a.r[1] = 0x817fdf98u;
    f1 = tc_callf(0x802343c8u, &a);
    r4 = tc_lastr4();
    r0 = rd32(param_2 + 0x110u);
    wrf32d(param_2 + 0x17cu, (f64)rdf32(0x817fdf98u));
    wrf32d(param_2 + 0x180u, (f64)rdf32(0x817fdf9cu));
    wrf32d(param_2 + 0x184u, (f64)rdf32(0x817fdfa0u));
    if (r0 != 0u) {
        r0 = rd32((u32)param_1 + 8u) - 1u;
        wr32((u32)param_1 + 8u, r0);
        if ((s32)r0 > 0) {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_2) + 0x20cu), &a);
            a.r[0] = param_2;
            a.r[1] = r3;
            a.r[2] = 0u;
            a.r[3] = 1u;
            a.f[0] = (f64)rdf32(0x80575cfcu);
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            (void)tc_call(rd32(rd32(param_2) + 0x54u), &a);
        } else {
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
