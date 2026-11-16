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

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_800694f8(u32 param_1)
{
    u32 c0gt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    r0 = rd32(param_1 + 0x9f4u);
    wr32(0x817fdfb8u, 0x43300000u);
    wr32(0x817fdfc0u, 0x43300000u);
    if (r0 == 0u) {
        a.r[0] = param_1;
        a.r[1] = 0x43300000u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        f1 = (f64)rdf32(0x80572648u);
        wrf32d(param_1 + 0x990u, (f64)rdf32(r3));
        wrf32d(param_1 + 0x994u, (f64)rdf32(r3 + 4u));
        wrf32d(param_1 + 0x998u, (f64)rdf32(r3 + 8u));
        r5 = rd32(0x804890d8u);
        r0 = rd32(0x804890dcu);
        wr32(0x817fdfa8u, rd32(0x804890d4u));
        wr32(0x817fdfacu, r5);
        wr32(0x817fdfb0u, r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdfa8u;
        a.r[1] = 0x817fdfa8u;
        f1 = tc_callf(0x802343c8u, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
        f31 = f1;
        r3 = rd32(0x817fdfacu);
        r0 = rd32(0x817fdfb0u);
        wr32(0x817fdf84u, rd32(0x817fdfa8u));
        wr32(0x817fdf88u, r3);
        wr32(0x817fdf8cu, r0);
        a.f[0] = f1;
        f1 = tc_callf(0x80262704u, &a);
        f30 = (f64)(f32)f1;
        a.f[0] = f31;
        f1 = tc_callf(0x80262b10u, &a);
        f2 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x805725d8u);
        f1 = (f64)rdf32(0x817fdf8cu);
        f4 = (f64)rdf32(0x817fdf84u);
        f3 = (f64)(f32)(f1 * f2);
        wrf32d(0x817fdf80u, f0);
        f2 = -f2;
        f1 = (f64)(f32)(f1 * f30);
        wrf32d(0x817fdf7cu, f0);
        f3 = ppc_fmadds(f4, f30, f3);
        wrf32d(0x817fdf78u, f0);
        wrf32d(0x817fdfa8u, f3);
        wrf32d(0x817fdfb0u, ppc_fmadds(f4, f2, f1));
        a.r[0] = 0x817fdfa8u;
        a.r[1] = 0x817fdf78u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdf78u);
        a.f[1] = (f64)rdf32(0x817fdf80u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if (!((f64)rdf32(0x805725e4u) < f1)) {
            a.f[0] = (f64)rdf32(0x817fdf78u);
            a.f[1] = (f64)rdf32(0x817fdf80u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805725ecu);
            if (!((f0 > f1) || (f0 == f1))) {
                a.f[0] = (f64)rdf32(0x817fdf78u);
                a.f[1] = (f64)rdf32(0x817fdf80u);
                f1 = tc_callf(0x80262c68u, &a);
                f2 = (f64)(f32)f1;
            } else {
                a.f[0] = (f64)rdf32(0x817fdf78u);
                a.f[1] = (f64)rdf32(0x817fdf80u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f2 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
            }
        } else {
            a.f[0] = (f64)rdf32(0x817fdf78u);
            a.f[1] = (f64)rdf32(0x817fdf80u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f2 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        f1 = (f64)rdf32(0x805725d8u);
        c0gt = f2 > (f64)rdf32(0x8057264cu);
        wrf32d(0x817fdfa4u, f1);
        wrf32d(0x817fdfa0u, f1);
        wrf32d(0x817fdf9cu, f1);
        do {
            if (c0gt) {
                f0 = (f64)rdf32(0x80572650u);
                if ((f2 < f0) || (f2 == f0)) {
                    f0 = (f64)rdf32(0x80572648u);
                    wr32(param_1 + 0x9a8u, 0u);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdfa4u) + f0);
                    wrf32d(0x817fdfa4u, f0);
                    break;
                }
            }
            if (f2 > (f64)rdf32(0x80572650u)) {
                f0 = (f64)rdf32(0x80572654u);
                if ((f2 < f0) || (f2 == f0)) {
                    f2 = (f64)rdf32(0x80572648u);
                    wr32(param_1 + 0x9a8u, 7u);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdfa4u) + f2);
                    wrf32d(0x817fdf9cu, (f64)(f32)((f64)rdf32(0x817fdf9cu) + f2));
                    wrf32d(0x817fdfa4u, f0);
                    break;
                }
            }
            if (f2 > (f64)rdf32(0x80572654u)) {
                f0 = (f64)rdf32(0x80572658u);
                if ((f2 < f0) || (f2 == f0)) {
                    f0 = (f64)rdf32(0x80572648u);
                    wr32(param_1 + 0x9a8u, 6u);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdf9cu) + f0);
                    wrf32d(0x817fdf9cu, f0);
                    break;
                }
            }
            if (f2 > (f64)rdf32(0x80572658u)) {
                f0 = (f64)rdf32(0x8057265cu);
                if ((f2 < f0) || (f2 == f0)) {
                    f2 = (f64)rdf32(0x80572648u);
                    wr32(param_1 + 0x9a8u, 5u);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdfa4u) - f2);
                    wrf32d(0x817fdf9cu, (f64)(f32)((f64)rdf32(0x817fdf9cu) + f2));
                    wrf32d(0x817fdfa4u, f0);
                    break;
                }
            }
            if (f2 < (f64)rdf32(0x8057264cu)) {
                f0 = (f64)rdf32(0x80572660u);
                if ((f2 > f0) || (f2 == f0)) {
                    f2 = (f64)rdf32(0x80572648u);
                    wr32(param_1 + 0x9a8u, 1u);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdfa4u) + f2);
                    wrf32d(0x817fdf9cu, (f64)(f32)((f64)rdf32(0x817fdf9cu) - f2));
                    wrf32d(0x817fdfa4u, f0);
                    break;
                }
            }
            if (f2 < (f64)rdf32(0x80572660u)) {
                f0 = (f64)rdf32(0x80572664u);
                if ((f2 > f0) || (f2 == f0)) {
                    f0 = (f64)rdf32(0x80572648u);
                    wr32(param_1 + 0x9a8u, 2u);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdf9cu) - f0);
                    wrf32d(0x817fdf9cu, f0);
                    break;
                }
            }
            if (f2 < (f64)rdf32(0x80572664u)) {
                f0 = (f64)rdf32(0x80572668u);
                if ((f2 > f0) || (f2 == f0)) {
                    f2 = (f64)rdf32(0x80572648u);
                    wr32(param_1 + 0x9a8u, 1u);
                    f0 = (f64)(f32)((f64)rdf32(0x817fdfa4u) - f2);
                    wrf32d(0x817fdf9cu, (f64)(f32)((f64)rdf32(0x817fdf9cu) - f2));
                    wrf32d(0x817fdfa4u, f0);
                    break;
                }
            }
            f0 = (f64)rdf32(0x80572648u);
            wr32(param_1 + 0x9a8u, 4u);
            f0 = (f64)(f32)((f64)rdf32(0x817fdfa4u) - f0);
            wrf32d(0x817fdfa4u, f0);
        } while (0);
        r3 = param_1 + 0x990u;
        a.r[0] = r3;
        a.r[1] = 0x817fdfa8u;
        a.r[2] = r3;
        (void)tc_call(0x80234380u, &a);
        r4 = tc_lastr4();
        f3 = (f64)rdf32(param_1 + 0x990u);
        f0 = (f64)rdf32(0x805725d8u);
        if (!((f3 > f0) || (f3 == f0))) {
            f2 = (f64)rdf32(0x80572648u);
            f1 = rdf64(0x80572670u);
            f0 = (f64)(f32)px_fdiv((f64)(f32)(f3 - f2), f2);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfc8u, f0);
            wr32(0x817fdfc4u, rd32(0x817fdfccu) ^ 0x80000000u);
            wrf32d(param_1 + 0x990u, (f64)(f32)(f2 * (f64)(f32)(rdf64(0x817fdfc0u) - f1)));
        } else {
            f2 = (f64)rdf32(0x80572648u);
            f1 = rdf64(0x80572670u);
            f0 = (f64)(f32)px_fdiv(f3, f2);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfc8u, f0);
            wr32(0x817fdfbcu, rd32(0x817fdfccu) ^ 0x80000000u);
            wrf32d(param_1 + 0x990u, (f64)(f32)(f2 * (f64)(f32)(rdf64(0x817fdfb8u) - f1)));
        }
        f3 = (f64)rdf32(param_1 + 0x998u);
        f0 = (f64)rdf32(0x805725d8u);
        if (!((f3 > f0) || (f3 == f0))) {
            f2 = (f64)rdf32(0x80572648u);
            f1 = rdf64(0x80572670u);
            f0 = (f64)(f32)px_fdiv((f64)(f32)(f3 - f2), f2);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfc8u, f0);
            wr32(0x817fdfc4u, rd32(0x817fdfccu) ^ 0x80000000u);
            wrf32d(param_1 + 0x998u, (f64)(f32)(f2 * (f64)(f32)(rdf64(0x817fdfc0u) - f1)));
        } else {
            f2 = (f64)rdf32(0x80572648u);
            f1 = rdf64(0x80572670u);
            f0 = (f64)(f32)px_fdiv(f3, f2);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfc8u, f0);
            wr32(0x817fdfbcu, rd32(0x817fdfccu) ^ 0x80000000u);
            wrf32d(param_1 + 0x998u, (f64)(f32)(f2 * (f64)(f32)(rdf64(0x817fdfb8u) - f1)));
        }
        f1 = (f64)rdf32(param_1 + 0x994u);
        wrf32d(param_1 + 0x994u, (f64)(f32)(f1 + (f64)rdf32(0x805725f4u)));
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r4 = tc_lastr4();
        f1 = (f64)rdf32(r3);
        if (!(f1 > (f64)rdf32(0x805725d8u))) {
            f30 = (f64)rdf32(0x80572600u);
        } else {
            f30 = (f64)rdf32(0x805725e0u);
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        f1 = rdf64(0x80572670u);
        f0 = (f64)(f32)ppc_fabs((f64)rdf32(r3));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfc8u, f0);
        r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(rd32(0x817fdfccu) + 0x63u)) >> 5);
        r4 = (r0 >> 0x1fu) & 1u;
        r0 = r0 + r4;
        r0 = r0 * 0x64u;
        r0 = r0 ^ 0x80000000u;
        wr32(0x817fdfbcu, r0);
        wrf32d(param_1 + 0x990u, (f64)(f32)((f64)(f32)(rdf64(0x817fdfb8u) - f1) * f30));
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0x51eb851fu;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r4 = tc_lastr4();
        f1 = (f64)rdf32(r3 + 8u);
        if (!(f1 > (f64)rdf32(0x805725d8u))) {
            f30 = (f64)rdf32(0x80572600u);
        } else {
            f30 = (f64)rdf32(0x805725e0u);
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        f2 = rdf64(0x80572670u);
        c0gt = (f64)rdf32(param_1 + 0x990u) > (f64)rdf32(0x805725d8u);
        f3 = (f64)(f32)ppc_fabs((f64)rdf32(r3 + 8u));
        wrf64(0x817fdfd0u, px_ctiw(f3, ppc_fctiwz(f3)));
        r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(rd32(0x817fdfd4u) + 0x63u)) >> 5);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0x64u;
        r0 = r0 ^ 0x80000000u;
        wr32(0x817fdfc4u, r0);
        wrf32d(param_1 + 0x998u, (f64)(f32)((f64)(f32)(rdf64(0x817fdfc0u) - f2) * f30));
        if (!c0gt) {
            f2 = (f64)rdf32(0x805725dcu);
        } else {
            f2 = (f64)rdf32(0x8057266cu);
        }
        f2 = (f64)(f32)((f64)rdf32(param_1 + 0x990u) + f2);
        c0gt = (f64)rdf32(param_1 + 0x998u) > (f64)rdf32(0x805725d8u);
        wrf32d(param_1 + 0x990u, f2);
        if (!c0gt) {
            f1 = (f64)rdf32(0x805725dcu);
        } else {
            f1 = (f64)rdf32(0x8057266cu);
        }
        r6 = rd32(param_1 + 0x990u);
        r0 = rd32(param_1 + 0x994u);
        wrf32d(param_1 + 0x998u, (f64)(f32)((f64)rdf32(param_1 + 0x998u) + f1));
        wr32(0x817fdf90u, r6);
        wr32(0x817fdf94u, r0);
        wr32(0x817fdf98u, rd32(param_1 + 0x998u));
        a.r[0] = 0x817fdf90u;
        a.r[1] = 0x817fdf9cu;
        a.r[2] = 0x817fdf90u;
        (void)tc_call(0x80234380u, &a);
        wrf32d(param_1 + 0x99cu, (f64)rdf32(0x817fdf90u));
        wrf32d(param_1 + 0x9a0u, (f64)rdf32(0x817fdf94u));
        wrf32d(param_1 + 0x9a4u, (f64)rdf32(0x817fdf98u));
        wrf32d(param_1 + 0x9b0u, (f64)rdf32(0x817fdf9cu));
        wrf32d(param_1 + 0x9b4u, (f64)rdf32(0x817fdfa0u));
        wrf32d(param_1 + 0x9b8u, (f64)rdf32(0x817fdfa4u));
        a.r[0] = param_1;
        (void)tc_call(0x80069bb8u, &a);
        a.r[0] = 0x80471ed0u;
        a.r[1] = param_1 + 0x99cu;
        r3 = tc_call(0x80091990u, &a);
        if (r3 == 0u) {
            wr32(param_1 + 0xa1cu, 0u);
        } else {
            wr32(param_1 + 0xa1cu, 1u);
        }
    }
    return;
}
