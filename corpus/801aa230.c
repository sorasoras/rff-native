#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_801aa230(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    r30 = rd32((u32)param_2 + 0x60u);
    a.r[0] = rd32((u32)param_2 + 0x30u);
    a.r[1] = rd32((u32)param_2 + 0x4cu);
    a.r[2] = rd32((u32)param_2 + 0x50u);
    (void)tc_call(0x802337a0u, &a);
    if (rd32(r30 + 0xd34u) != 0u) {
        a.r[0] = r30;
        a.r[1] = 0x817fdf90u;
        f1 = tc_callf(0x801c3208u, &a);
        a.r[0] = r30;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
        f1 = tc_lastf();
        r31 = r3;
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = 0x80480000u;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        a.r[0] = r3;
        a.r[1] = r31;
        a.r[2] = 0x817fdf84u;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdf84u;
        a.r[1] = 0x817fdf84u;
        (void)tc_call(0x802343e4u, &a);
        f0 = (f64)rdf32(0x80575a48u);
        f31 = (f64)(f32)(f0 - ppc_fmadds((f64)rdf32(0x817fdf98u), (f64)rdf32(0x817fdf8cu), ppc_fmadds((f64)rdf32(0x817fdf90u), (f64)rdf32(0x817fdf84u), (f64)(f32)((f64)rdf32(0x817fdf94u) * (f64)rdf32(0x817fdf88u)))));
        if (f31 > f0) {
            f31 = f0;
        }
        f31 = (f64)(f32)(f31 * (f64)rdf32(0x80575a4cu));
        a.r[0] = r30;
        a.r[1] = 0x817fdf90u;
        (void)tc_call(0x801c3228u, &a);
        if (ppc_fmadds((f64)rdf32(0x817fdf98u), (f64)rdf32(0x817fdf8cu), ppc_fmadds((f64)rdf32(0x817fdf90u), (f64)rdf32(0x817fdf84u), (f64)(f32)((f64)rdf32(0x817fdf94u) * (f64)rdf32(0x817fdf88u)))) < (f64)rdf32(0x80575a50u)) {
            f31 = (f64)(f32)(f31 * (f64)rdf32(0x80575a54u));
        }
        f31 = (f64)(f32)(f31 - (f64)rdf32(r30 + 0xf14u));
        if ((f64)rdf32(0x80575a58u) < f31) {
            f31 = (f64)(f32)(f31 - (f64)rdf32(0x80575a5cu));
        } else {
            f0 = (f64)rdf32(0x80575a60u);
            if ((f0 > f31) || (f0 == f31)) {
                f31 = (f64)(f32)((f64)rdf32(0x80575a5cu) + f31);
            }
        }
        f1 = (f64)(f32)((f64)rdf32(r30 + 0xf14u) + (f64)(f32)(f31 * (f64)rdf32(0x80575a64u)));
        f0 = (f64)(f32)((f64)rdf32(0x80575a68u) * f1);
        wrf32d(r30 + 0xf14u, f1);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfd0u, f0);
        a.r[0] = 0x817fdfa0u;
        a.r[1] = (u32)(s16)rd32(0x817fdfd4u);
        (void)tc_call(0x80041a00u, &a);
    } else {
        f1 = (f64)(f32)((f64)rdf32(r30 + 0xf14u) * (f64)rdf32(0x80575a6cu));
        f0 = (f64)(f32)((f64)rdf32(0x80575a68u) * f1);
        wrf32d(r30 + 0xf14u, f1);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfd0u, f0);
        a.r[0] = 0x817fdfa0u;
        a.r[1] = (u32)(s16)rd32(0x817fdfd4u);
        (void)tc_call(0x80041a00u, &a);
    }
    r4 = rd32((u32)param_2 + 0x50u);
    f0 = (f64)rdf32(0x80575a50u);
    f2 = (f64)rdf32(r4 + 0x1cu);
    f1 = (f64)rdf32(r4 + 0x2cu);
    wrf32d(0x817fdf78u, (f64)rdf32(r4 + 0xcu));
    wrf32d(r4 + 0xcu, f0);
    r4 = rd32((u32)param_2 + 0x50u);
    wrf32d(0x817fdf7cu, f2);
    wrf32d(r4 + 0x1cu, f0);
    r4 = rd32((u32)param_2 + 0x50u);
    wrf32d(0x817fdf80u, f1);
    wrf32d(r4 + 0x2cu, f0);
    r4 = rd32((u32)param_2 + 0x50u);
    a.r[0] = 0x817fdfa0u;
    a.r[1] = r4;
    a.r[2] = r4;
    (void)tc_call(0x802337a0u, &a);
    f1 = (f64)rdf32(0x817fdf7cu);
    wrf32d(rd32((u32)param_2 + 0x50u) + 0xcu, (f64)rdf32(0x817fdf78u));
    f0 = (f64)rdf32(0x817fdf80u);
    wrf32d(rd32((u32)param_2 + 0x50u) + 0x1cu, f1);
    wrf32d(rd32((u32)param_2 + 0x50u) + 0x2cu, f0);
    return;
}
