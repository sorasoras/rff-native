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

void fn_802110ac(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, s32 param_6)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdf70u, 0x817fe000u);
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
    f31 = (f64)rdf32(param_4);
    f30 = (f64)rdf32(param_5);
    f0 = (f64)rdf32(0x80576880u);
    wrf32d(0x817fdf8cu, f0);
    wrf32d(0x817fdf88u, f0);
    wrf32d(0x817fdf84u, f0);
    r0 = rd32(param_3 + 4u);
    wr32(0x817fdf78u, rd32(param_3));
    wr32(0x817fdf7cu, r0);
    wr32(0x817fdf80u, rd32(param_3 + 8u));
    a.r[0] = 0x817fdf78u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdf78u;
    (void)tc_call(0x802343a4u, &a);
    f2 = (f64)rdf32(0x817fdf78u);
    f1 = (f64)rdf32(0x817fdf7cu);
    f0 = (f64)rdf32(0x817fdf80u);
    wrf32d(0x817fdf84u, f2);
    wrf32d(0x817fdf88u, f1);
    wrf32d(0x817fdf8cu, f0);
    if ((u32)param_6 != 0u) {
        f4 = (f64)rdf32(0x80576884u);
        wr32(0x817fdf98u, 0x43300000u);
        f2 = (f64)(f32)(f4 + f2);
        f1 = (f64)(f32)(f4 + f1);
        wr32(0x817fdfa8u, 0x43300000u);
        f0 = (f64)(f32)(f4 + f0);
        f3 = rdf64(0x80576888u);
        f2 = px_ctiw(f2, ppc_fctiwz(f2));
        wr32(0x817fdfb8u, 0x43300000u);
        f1 = px_ctiw(f1, ppc_fctiwz(f1));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdf90u, f2);
        r9 = rd32(0x817fdf94u);
        wrf64(0x817fdfa0u, f1);
        wrf64(0x817fdfb0u, f0);
        r7 = rd32(0x817fdfa4u);
        r4 = rd32(0x817fdfb4u);
        r5 = (u32)((s32)(ppc_mulhw(-1240768329, (s32)r9) + r9) >> 8);
        r8 = r5 + ((r5 >> 0x1fu) & 1u);
        r5 = (u32)((s32)(ppc_mulhw(-1240768329, (s32)r7) + r7) >> 8);
        r0 = (u32)((s32)(ppc_mulhw(-1240768329, (s32)r4) + r4) >> 8);
        r5 = r5 + ((r5 >> 0x1fu) & 1u);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0x168u;
        wr32(0x817fdfacu, (r7 - (r5 * 0x168u)) ^ 0x80000000u);
        f1 = rdf64(0x817fdfa8u);
        wr32(0x817fdf9cu, (r9 - (r8 * 0x168u)) ^ 0x80000000u);
        r0 = r4 - r0;
        r0 = r0 ^ 0x80000000u;
        f1 = (f64)(f32)(f1 - f3);
        f0 = rdf64(0x817fdf98u);
        wr32(0x817fdfbcu, r0);
        f2 = (f64)(f32)(f0 - f3);
        f1 = (f64)(f32)(f1 - f4);
        f0 = (f64)(f32)(rdf64(0x817fdfb8u) - f3);
        f2 = (f64)(f32)(f2 - f4);
        wrf32d(0x817fdf88u, f1);
        f0 = (f64)(f32)(f0 - f4);
        wrf32d(0x817fdf84u, f2);
        wrf32d(0x817fdf8cu, f0);
    }
    r0 = 0u;
    if ((f64)rdf32(param_2) != (f64)rdf32(param_3) || (f64)rdf32(param_2 + 4u) != (f64)rdf32(param_3 + 4u) || (f64)rdf32(param_2 + 8u) != (f64)rdf32(param_3 + 8u)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        f31 = (f64)(f32)(f31 + f30);
        f0 = (f64)rdf32(0x80576880u);
        if (f31 < f0) {
            f31 = f0;
        }
        f0 = (f64)rdf32(0x805768b8u);
        if (f31 > f0) {
            f31 = f0;
        }
    } else {
        a.r[0] = 0x817fdf84u;
        f1 = tc_callf(0x80234428u, &a);
        if (!(f1 > (f64)rdf32(0x8057689cu))) {
            f30 = (f64)rdf32(0x80576880u);
            f31 = (f64)rdf32(0x805768b4u);
        } else {
            a.f[0] = f1;
            f1 = tc_callf(0x80262ec0u, &a);
            f5 = (f64)(f32)f1;
            f31 = (f64)(f32)((f64)rdf32(0x805768a0u) * (f64)(f32)(f5 * (f64)rdf32(0x805768a4u)));
            f30 = (f64)(f32)((f64)(f32)((f64)rdf32(0x805768acu) * ppc_fnmsubs((f64)rdf32(0x805768a8u), f31, f5)) * (f64)rdf32(0x805768b0u));
        }
    }
    a.r[0] = 0x817fdf84u;
    f1 = tc_callf(0x80234428u, &a);
    if (!(f1 > (f64)(f32)(f31 * f31))) {
        wrf32d(param_2, (f64)rdf32(param_3));
        wrf32d(param_2 + 4u, (f64)rdf32(param_3 + 4u));
        wrf32d(param_2 + 8u, (f64)rdf32(param_3 + 8u));
    } else {
        f1 = (f64)rdf32(0x80576880u);
        r0 = 0u;
        if (f1 == (f64)rdf32(0x817fdf84u) && f1 == (f64)rdf32(0x817fdf88u) && f1 == (f64)rdf32(0x817fdf8cu)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdf84u;
            a.r[1] = 0x817fdf84u;
            (void)tc_call(0x802343e4u, &a);
        }
        a.f[0] = f31;
        a.r[0] = 0x817fdf84u;
        a.r[1] = 0x817fdf84u;
        (void)tc_call(0x802343c8u, &a);
        a.r[0] = param_2;
        a.r[1] = 0x817fdf84u;
        a.r[2] = param_2;
        (void)tc_call(0x80234380u, &a);
    }
    wrf32d(param_4, f31);
    wrf32d(param_5, f30);
    return;
}
