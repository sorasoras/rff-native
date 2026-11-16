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

void fn_8016f7f0(u32 param_r3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdc60u, 0x817fe000u);
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
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    r0 = (u32)rd8(param_r3 + 0x16f0u);
    wr32(0x817fdf90u, 0x43300000u);
    wr32(0x817fdf98u, 0x43300000u);
    if (r0 != 8u) {
        a.r[0] = param_r3;
        (void)tc_call(0x801712a4u, &a);
        if ((u32)rd8(param_r3 + 0x16f0u) == 1u) {
            f3 = (f64)rdf32(0x80574cd8u);
            wr32(0x817fdf94u, rd32(param_r3 + 0xd50u));
            f1 = (f64)rdf32(0x80574d70u);
            f2 = (f64)(f32)(rdf64(0x817fdf90u) - rdf64(0x80574de0u));
            f0 = (f64)rdf32(0x80574d80u);
            wrf32d(0x817fdc88u, f3);
            f1 = (f64)(f32)px_fdiv(f2, f1);
            wrf32d(0x817fdc84u, f3);
            wrf32d(0x817fdc80u, f3);
            wrf32d(0x817fdc7cu, f3);
            wrf32d(0x817fdc78u, f3);
            wrf32d(0x817fdc74u, f3);
            f1 = (f64)(f32)(f0 * f1);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            f7 = (f64)rdf32(param_r3 + 0xc24u);
            f8 = (f64)(f32)f1;
            f0 = rdf64(0x80574d88u);
            f5 = (f64)rdf32(param_r3 + 0xc28u);
            f6 = f0 * f7;
            f3 = (f64)rdf32(0x80574d08u);
            f4 = f0 * f5;
            f1 = (f64)rdf32(0x80574d0cu);
            f0 = (f64)rdf32(param_r3 + 0xc2cu);
            f6 = (f6 * f8) + f7;
            f4 = (f4 * f8) + f5;
            f5 = (f64)(f32)f6;
            f4 = (f64)(f32)f4;
            f2 = ppc_fnmsubs(f5, f3, (f64)rdf32(0x80574d04u));
            wrf32d(0x817fdc80u, f5);
            f1 = ppc_fnmsubs(f4, f3, f1);
            wrf32d(0x817fdc84u, f4);
            f0 = (f64)(f32)(f2 + f0);
            wrf32d(param_r3 + 0xbb4u, f5);
            wrf32d(param_r3 + 0xbb0u, f4);
            wrf32d(0x817fdc74u, f2);
            wrf32d(0x817fdc78u, f1);
            wrf32d(param_r3 + 0xba4u, f0);
            wrf32d(param_r3 + 0xba8u, f1);
            a.r[0] = param_r3 + 0xba0u;
            (void)tc_call(0x8005250cu, &a);
            f3 = rdf64(0x80574de0u);
            wr32(0x817fdf9cu, rd32(param_r3 + 0xd50u));
            f1 = rdf64(0x80574d90u);
            f5 = rdf64(0x817fdf98u) - f3;
            f4 = rdf64(0x80574da0u);
            f3 = rdf64(0x80574de8u);
            f0 = rdf64(0x80574da8u);
            f2 = px_fdiv(f5, rdf64(0x80574d98u));
            wr32(param_r3 + 0xbc8u, 1u);
            f1 = f1 * f2;
            f1 = (f64)(f32)f1;
            f2 = px_fdiv(f1, f4);
            f2 = px_ctiw(f2, ppc_fctiwz(f2));
            wrf64(0x817fdfa0u, f2);
            wr32(0x817fdf94u, rd32(0x817fdfa4u) ^ 0x80000000u);
            f2 = -((f4 * (rdf64(0x817fdf90u) - f3)) - f1);
            if (!((f2 > f0) || (f2 == f0))) {
                a.f[0] = f1;
                f1 = tc_callf(0x80262704u, &a);
                f31 = -(f64)(f32)f1;
            } else {
                a.f[0] = f1;
                f1 = tc_callf(0x80262704u, &a);
                f31 = (f64)(f32)f1;
            }
            f1 = (f64)rdf32(param_r3 + 0xcb4u);
            f5 = rdf64(0x80574d60u);
            f3 = rdf64(0x80574d58u);
            f0 = (f64)rdf32(param_r3 + 0xcb8u);
            f4 = f5 * f1;
            f2 = (f5 * f1) + f3;
            f1 = (f64)rdf32(0x80574db0u);
            wr32(0x817fdc70u, rd32(0x817fdc88u));
            f0 = (f5 * f0) + f3;
            f2 = (f4 * f31) + f2;
            f0 = (f4 * f31) + f0;
            f2 = (f64)(f32)f2;
            f0 = (f64)(f32)f0;
            wrf32d(0x817fdc80u, f2);
            wrf32d(0x817fdc84u, f0);
            r0 = rd32(0x817fdc84u);
            wr32(0x817fdc68u, rd32(0x817fdc80u));
            wr32(0x817fdc6cu, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdc68u;
            a.r[1] = 0x817fdc68u;
            (void)tc_call(0x802343c8u, &a);
            f6 = (f64)rdf32(0x817fdc68u);
            f3 = (f64)rdf32(0x80574d08u);
            f5 = (f64)rdf32(0x817fdc6cu);
            f2 = ppc_fnmsubs(f6, f3, (f64)rdf32(0x80574d04u));
            f4 = (f64)rdf32(0x817fdc70u);
            f1 = ppc_fnmsubs(f5, f3, (f64)rdf32(0x80574d0cu));
            f3 = (f64)(f32)(f2 + (f64)rdf32(param_r3 + 0xcbcu));
            f0 = (f64)rdf32(0x80574cd8u);
            wrf32d(0x817fdc80u, f6);
            wrf32d(0x817fdc84u, f5);
            wrf32d(0x817fdc88u, f4);
            wrf32d(param_r3 + 0xc44u, f6);
            wrf32d(param_r3 + 0xc40u, f5);
            wrf32d(0x817fdc74u, f2);
            wrf32d(0x817fdc78u, f1);
            wrf32d(param_r3 + 0xc34u, f3);
            wrf32d(param_r3 + 0xc38u, f1);
            if (!(f31 > f0)) {
                f31 = -f31;
            }
            f0 = (f64)rdf32(0x80574ce4u);
            f1 = (f64)(f32)((f64)rdf32(0x80574ce0u) - f31);
            wr8(param_r3 + 0xc7cu, 0xffu);
            wr8(param_r3 + 0xc7du, 0xffu);
            f0 = (f64)(f32)(f0 * f1);
            wr8(param_r3 + 0xc7eu, 0xc8u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wr8(param_r3 + 0xc80u, 0xffu);
            wr8(param_r3 + 0xc81u, 0xffu);
            wrf64(0x817fdfa0u, f0);
            r5 = rd32(0x817fdfa4u);
            wr8(param_r3 + 0xc82u, 0xc8u);
            wr8(param_r3 + 0xc7fu, (u8)r5);
            wr8(param_r3 + 0xc83u, (u8)r5);
            wr8(param_r3 + 0xc84u, 0xffu);
            wr8(param_r3 + 0xc85u, 0xffu);
            wr8(param_r3 + 0xc86u, 0xc8u);
            wr8(param_r3 + 0xc87u, (u8)r5);
            wr8(param_r3 + 0xc88u, 0xffu);
            wr8(param_r3 + 0xc89u, 0xffu);
            wr8(param_r3 + 0xc8au, 0xc8u);
            wr8(param_r3 + 0xc8bu, (u8)r5);
            a.r[0] = param_r3 + 0xc30u;
            (void)tc_call(0x8005250cu, &a);
            wr32(param_r3 + 0xc58u, 1u);
            a.r[0] = param_r3 + 0x1024u;
            (void)tc_call(0x8005250cu, &a);
            wr32(param_r3 + 0x104cu, 1u);
            a.r[0] = param_r3 + 0x1384u;
            (void)tc_call(0x8005250cu, &a);
            wr32(param_r3 + 0x13acu, 1u);
            a.r[0] = param_r3 + 0x10b4u;
            (void)tc_call(0x8005250cu, &a);
            wr32(param_r3 + 0x10dcu, 1u);
            a.r[0] = param_r3 + 0x1414u;
            (void)tc_call(0x8005250cu, &a);
            wr32(param_r3 + 0x143cu, 1u);
            a.r[0] = param_r3 + 0x1144u;
            (void)tc_call(0x8005250cu, &a);
            wr32(param_r3 + 0x116cu, 1u);
            a.r[0] = param_r3 + 0x14a4u;
            (void)tc_call(0x8005250cu, &a);
            r4 = rd32(param_r3 + 0x16f8u);
            wr32(param_r3 + 0x14ccu, 1u);
            if (rd32(param_r3 + ((r4 << 2u) & 0xfffffffcu) + 0x1804u) > 8u && r4 != 3u) {
                a.r[0] = param_r3 + 0x11d4u;
                (void)tc_call(0x8005250cu, &a);
                wr32(param_r3 + 0x11fcu, 1u);
                a.r[0] = param_r3 + 0x1534u;
                (void)tc_call(0x8005250cu, &a);
                wr32(param_r3 + 0x155cu, 1u);
                a.r[0] = param_r3 + 0x1264u;
                (void)tc_call(0x8005250cu, &a);
                wr32(param_r3 + 0x128cu, 1u);
                a.r[0] = param_r3 + 0x15c4u;
                (void)tc_call(0x8005250cu, &a);
                wr32(param_r3 + 0x15ecu, 1u);
                a.r[0] = param_r3 + 0x12f4u;
                (void)tc_call(0x8005250cu, &a);
                wr32(param_r3 + 0x131cu, 1u);
                a.r[0] = param_r3 + 0x1654u;
                (void)tc_call(0x8005250cu, &a);
                wr32(param_r3 + 0x167cu, 1u);
            }
        }
        f29 = (f64)rdf32(0x80574d20u);
        r27 = param_r3;
        f30 = (f64)rdf32(0x80574db4u);
        r26 = 0u;
        f31 = (f64)rdf32(0x80574cfcu);
        do {
            a.r[0] = r27;
            (void)tc_call(0x8005250cu, &a);
            wr32(r27 + 0x28u, 1u);
            if ((u32)rd8(param_r3 + 0x16f0u) == 1u) {
                a.r[0] = param_r3;
                a.r[1] = r26;
                r3 = tc_call(0x80171bf4u, &a);
                if (r3 != 0u) {
                    a.r[0] = param_r3;
                    a.r[1] = r26;
                    (void)tc_call(0x80171c4cu, &a);
                    a.r[0] = param_r3;
                    a.r[1] = r26;
                    r3 = tc_call(0x80171bf4u, &a);
                    a.r[0] = 0x803cb934u;
                    a.r[1] = r3;
                    (void)tc_call(0x8007b03cu, &a);
                    a.r[0] = param_r3;
                    a.r[1] = r26;
                    r3 = tc_call(0x80171b5cu, &a);
                    a.r[0] = 0x8049f1b0u;
                    a.r[1] = (u32)rd16(r3);
                    r3 = tc_call(0x8015f2b0u, &a);
                    r0 = r3 & 0xffu;
                    r3 = 0u;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r0 & 0x1ffe0u;
                    if (r0 != 0u) {
                        r3 = 1u;
                    }
                    if (r3 == 0u && rd32(param_r3 + 0x16f8u) != 3u) {
                        a.r[0] = param_r3;
                        a.r[1] = r26;
                        r3 = tc_call(0x80171b5cu, &a);
                        if ((u32)rd8(r3 + 2u) < 0xau) {
                            f1 = (f64)rdf32(param_r3 + 0x1810u);
                            f2 = (f64)(f32)(f29 + (f64)rdf32(r27 + 0x7cu));
                            wrf32d(r27 + 0x90u, ppc_fnmsubs(f31, f1, ppc_fmadds(f30, f1, (f64)rdf32(r27 + 0x78u))));
                            wrf32d(r27 + 0x94u, f2);
                            a.r[0] = param_r3;
                            a.r[1] = r26;
                            r3 = tc_call(0x80171b5cu, &a);
                            r6 = (u32)rd8(r3 + 2u);
                            r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r6) >> 2);
                            r0 = r0 + ((r0 >> 0x1fu) & 1u);
                            r0 = r0 * 0xau;
                            r0 = r6 - r0;
                            a.r[0] = param_r3;
                            a.r[1] = r27 + 0x8cu;
                            a.r[2] = (u32)(s8)r0;
                            (void)tc_call(0x801726f8u, &a);
                            a.r[0] = r27 + 0x8cu;
                            (void)tc_call(0x8005250cu, &a);
                            wr32(r27 + 0xb4u, 1u);
                        } else {
                            f1 = (f64)(f32)(f29 + (f64)rdf32(r27 + 0x7cu));
                            wrf32d(r27 + 0x90u, ppc_fmadds(f30, (f64)rdf32(param_r3 + 0x1810u), (f64)rdf32(r27 + 0x78u)));
                            wrf32d(r27 + 0x94u, f1);
                            a.r[0] = param_r3;
                            a.r[1] = r26;
                            r3 = tc_call(0x80171b5cu, &a);
                            r6 = (u32)rd8(r3 + 2u);
                            r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r6) >> 2);
                            r0 = r0 + ((r0 >> 0x1fu) & 1u);
                            r0 = r0 * 0xau;
                            r0 = r6 - r0;
                            a.r[0] = param_r3;
                            a.r[1] = r27 + 0x8cu;
                            a.r[2] = (u32)(s8)r0;
                            (void)tc_call(0x801726f8u, &a);
                            a.r[0] = r27 + 0x8cu;
                            (void)tc_call(0x8005250cu, &a);
                            wr32(r27 + 0xb4u, 1u);
                            f1 = (f64)rdf32(param_r3 + 0x1810u);
                            f2 = (f64)(f32)(f29 + (f64)rdf32(r27 + 0x7cu));
                            wrf32d(r27 + 0x104u, ppc_fnmsubs(f31, f1, ppc_fmadds(f30, f1, (f64)rdf32(r27 + 0x78u))));
                            wrf32d(r27 + 0x108u, f2);
                            a.r[0] = r27 + 0x100u;
                            (void)tc_call(0x8005250cu, &a);
                            a.r[0] = param_r3;
                            a.r[1] = r26;
                            r3 = tc_call(0x80171b5cu, &a);
                            r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)rd8(r3 + 2u)) >> 2);
                            r0 = r0 + ((r0 >> 0x1fu) & 1u);
                            a.r[0] = param_r3;
                            a.r[1] = r27 + 0x100u;
                            a.r[2] = (u32)(s8)r0;
                            (void)tc_call(0x801726f8u, &a);
                            wr32(r27 + 0x128u, 1u);
                        }
                    }
                }
            }
            r26 = r26 + 1u;
            r27 = r27 + 0x174u;
        } while ((s32)r26 < 8);
        if ((u32)rd8(param_r3 + 0x16f0u) == 1u) {
            r3 = tc_call(0x80059e38u, &a);
            if (r3 != 0u) {
                wr32(param_r3 + 0xd50u, rd32(param_r3 + 0xd50u) + 0x14u);
            }
            r0 = (u32)rd8(param_r3 + 0x16e4u);
            if (r0 == 8u) {
                f0 = (f64)rdf32(0x80574cd8u);
                wr32(param_r3 + 0xce8u, 0u);
                wrf32d(param_r3 + 0xcc4u, f0);
                wrf32d(param_r3 + 0xcc8u, f0);
            } else {
                r0 = r0 * 0x174u;
                r4 = param_r3 + r0;
                f29 = (f64)rdf32(r4 + 4u);
                f30 = (f64)rdf32(r4 + 8u);
                a.r[0] = param_r3 + 0xcc0u;
                (void)tc_call(0x8005250cu, &a);
                f3 = (f64)rdf32(0x80574ce4u);
                wr32(0x817fdf9cu, rd32(param_r3 + 0xd50u));
                f4 = (f64)(f32)(f3 * (f64)rdf32(param_r3 + 0x1810u));
                f0 = (f64)rdf32(0x80574d80u);
                f1 = (f64)(f32)(rdf64(0x817fdf98u) - rdf64(0x80574de0u));
                wr32(param_r3 + 0xce8u, 1u);
                wrf32d(param_r3 + 0xcd4u, f4);
                f1 = (f64)(f32)(f0 * f1);
                wrf32d(param_r3 + 0xcd0u, f3);
                wrf32d(param_r3 + 0xcc4u, f29);
                wrf32d(param_r3 + 0xcc8u, f30);
                a.f[0] = f1;
                f1 = tc_callf(0x80262704u, &a);
                r4 = (u32)rd8(param_r3 + 0x1794u);
                r3 = (u32)rd8(param_r3 + 0x1795u);
                f0 = ppc_fnmsubs((f64)rdf32(0x80574dbcu), (f64)(f32)f1, (f64)rdf32(0x80574db8u));
                r0 = (u32)rd8(param_r3 + 0x1796u);
                wr8(param_r3 + 0xd0cu, (u8)r4);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wr8(param_r3 + 0xd0du, (u8)r3);
                wr8(param_r3 + 0xd0eu, (u8)r0);
                wrf64(0x817fdfa0u, f0);
                r5 = rd32(0x817fdfa4u);
                wr8(param_r3 + 0xd10u, (u8)r4);
                wr8(param_r3 + 0x1797u, (u8)r5);
                wr8(param_r3 + 0xd0fu, (u8)r5);
                wr8(param_r3 + 0xd11u, (u8)r3);
                wr8(param_r3 + 0xd12u, (u8)r0);
                wr8(param_r3 + 0xd13u, (u8)r5);
                wr8(param_r3 + 0xd14u, (u8)r4);
                wr8(param_r3 + 0xd15u, (u8)r3);
                wr8(param_r3 + 0xd16u, (u8)r0);
                wr8(param_r3 + 0xd17u, (u8)r5);
                wr8(param_r3 + 0xd18u, (u8)r4);
                wr8(param_r3 + 0xd19u, (u8)r3);
                wr8(param_r3 + 0xd1au, (u8)r0);
                wr8(param_r3 + 0xd1bu, (u8)r5);
            }
            a.r[0] = param_r3;
            (void)tc_call(0x80172df0u, &a);
        }
    }
    a.r[0] = param_r3;
    a.r[1] = (u32)rd8(param_r3 + 0x16e4u);
    r3 = tc_call(0x80171b5cu, &a);
    if (r3 != 0u) {
        r3 = (u32)rd8(param_r3 + 0x16e4u);
        if (r3 != 8u && (u32)rd8(param_r3 + 0x16f0u) == 1u) {
            c0eq = r3 == 4u;
            r3 = param_r3 + (r3 * 0x174u);
            wrf32d(param_r3 + 0x177cu, ppc_fnmsubs(ppc_fnmsubs((f64)rdf32(0x80574ce4u), (f64)rdf32(param_r3 + 0x1810u), (f64)rdf32(param_r3 + 0x1788u)), (f64)rdf32(0x80574d08u), (f64)rdf32(r3 + 0x78u)));
            if (!c0eq) {
                f5 = (f64)(f32)((f64)rdf32(0x80574dc0u) + (f64)rdf32(r3 + 0x7cu));
            } else {
                f5 = (f64)(f32)((f64)rdf32(r3 + 0x7cu) - (f64)rdf32(0x80574cf4u));
            }
            f2 = (f64)(f32)((f64)rdf32(param_r3 + 0x1788u) * (f64)rdf32(param_r3 + 0x1810u));
            f3 = (f64)rdf32(param_r3 + 0x178cu);
            f0 = (f64)(f32)((f64)rdf32(param_r3 + 0x177cu) + (f64)rdf32(param_r3 + 0x1790u));
            wrf32d(param_r3 + 0x1780u, f5);
            wrf32d(param_r3 + 0x1718u, f2);
            wrf32d(param_r3 + 0x1714u, f3);
            wrf32d(param_r3 + 0x1708u, f0);
            wrf32d(param_r3 + 0x170cu, (f64)(f32)f5);
            a.r[0] = param_r3 + 0x1704u;
            (void)tc_call(0x8005250cu, &a);
            r4 = (u32)rd8(param_r3 + 0x16e4u);
            wr32(param_r3 + 0x172cu, 1u);
            a.r[0] = param_r3;
            a.r[1] = r4;
            r3 = tc_call(0x80171b5cu, &a);
            r3 = (u32)rd16(r3);
            a.r[0] = r3;
            r3 = tc_call(0x800cd694u, &a);
            a.r[0] = 0x817fdd10u;
            a.r[1] = r3;
            (void)tc_call(0x8025e7c0u, &a);
            r3 = tc_call(0x80052c30u, &a);
            a.r[0] = r3;
            a.r[1] = 0x817fdd10u;
            f1 = tc_callf(0x80079bf8u, &a);
            a.f[0] = f1;
            r3 = tc_call(0x802558e4u, &a);
            r0 = (u32)rd8(param_r3 + 0x16e4u);
            if (r0 != 4u) {
                r0 = r0 * 0x174u;
                f2 = (f64)(f32)((f64)rdf32(0x80574dc8u) + (f64)rdf32(param_r3 + r0 + 0x7cu));
            } else {
                r0 = r0 * 0x174u;
                f2 = (f64)(f32)((f64)rdf32(param_r3 + r0 + 0x7cu) - (f64)rdf32(0x80574dc4u));
            }
            wr32(0x817fdf94u, r3);
            f5 = (f64)rdf32(0x80574d08u);
            a.f[0] = ppc_fmadds((f64)(f32)((f64)rdf32(0x80574ce4u) * (f64)rdf32(param_r3 + 0x1810u)), f5, ppc_fnmsubs((f64)rdf32(0x80574dccu), (f64)(f32)((f64)(f32)(rdf64(0x817fdf90u) - rdf64(0x80574de0u)) * f5), (f64)rdf32(param_r3 + r0 + 0x78u)));
            a.f[1] = f2;
            a.f[2] = (f64)rdf32(0x80574cf8u);
            a.f[3] = (f64)rdf32(0x80574dd0u);
            a.r[0] = 0x817fdd10u;
            a.r[1] = 0u;
            (void)tc_call(0x80052a08u, &a);
        }
    }
    if ((u32)rd8(param_r3 + 0x16f0u) == 1u) {
        a.r[0] = 0x15u;
        a.r[1] = 1u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = 0x817fdd90u;
        a.r[1] = r3;
        (void)tc_call(0x8025e7c0u, &a);
        a.r[0] = 0x15u;
        a.r[1] = 2u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = 0x817fde10u;
        a.r[1] = r3;
        (void)tc_call(0x8025e7c0u, &a);
        a.r[0] = 0x15u;
        a.r[1] = 3u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = 0x817fde90u;
        a.r[1] = r3;
        (void)tc_call(0x8025e7c0u, &a);
        a.r[0] = 0x15u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = 0x817fdf10u;
        a.r[1] = r3;
        (void)tc_call(0x8025e7c0u, &a);
        a.r[0] = 0x817fdc90u;
        a.r[1] = ((rd32(param_r3 + 0x16f8u) << 7u) & 0xffffff80u) - 0x7e802270u;
        (void)tc_call(0x8025e7c0u, &a);
        r3 = tc_call(0x80052c30u, &a);
        a.r[0] = r3;
        a.r[1] = 0x817fdc90u;
        f1 = tc_callf(0x80079bf8u, &a);
        a.f[0] = f1;
        r3 = tc_call(0x802558e4u, &a);
        r27 = r3;
        r29 = param_r3;
        r28 = param_r3 + 0xd54u;
        r30 = 0u;
        do {
            a.r[0] = r28;
            (void)tc_call(0x8005250cu, &a);
            r30 = r30 + 1u;
            wr32(r29 + 0xd7cu, 1u);
            r28 = r28 + 0x90u;
            r29 = r29 + 0x90u;
        } while ((s32)r30 < 5);
        wr32(0x817fdf9cu, r27);
        a.f[0] = ppc_fnmsubs((f64)(f32)(rdf64(0x817fdf98u) - rdf64(0x80574de0u)), (f64)rdf32(0x80574d08u), (f64)rdf32(0x80574d04u));
        a.f[1] = (f64)rdf32(0x80574dd4u);
        a.f[2] = (f64)rdf32(0x80574dd8u);
        a.f[3] = (f64)rdf32(0x80574ddcu);
        a.r[0] = 0x817fdc90u;
        a.r[1] = 0u;
        (void)tc_call(0x80052a08u, &a);
        a.r[0] = param_r3;
        a.r[1] = 4u;
        r3 = tc_call(0x80172094u, &a);
        if (r3 != 0u) {
            a.r[0] = param_r3;
            a.r[1] = 4u;
            r3 = tc_call(0x80172094u, &a);
            if (r3 != 1u) {
                a.r[0] = param_r3;
                a.r[1] = 4u;
                r3 = tc_call(0x80172094u, &a);
                if (r3 != 2u) {
                    r3 = rd32(param_r3 + 0x115cu);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x8004c630u, &a);
                        if ((s32)r3 > 1) {
                            wr32(param_r3 + 0x1160u, 1u);
                        }
                    }
                } else {
                    r3 = rd32(param_r3 + 0x115cu);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x8004c630u, &a);
                        if ((s32)r3 > 4) {
                            wr32(param_r3 + 0x1160u, 4u);
                        }
                    }
                }
            } else {
                r3 = rd32(param_r3 + 0x115cu);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x8004c630u, &a);
                    if ((s32)r3 > 2) {
                        wr32(param_r3 + 0x1160u, 2u);
                    }
                }
            }
        } else {
            r3 = rd32(param_r3 + 0x115cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x8004c630u, &a);
                if ((s32)r3 > 3) {
                    wr32(param_r3 + 0x1160u, 3u);
                }
            }
        }
        a.r[0] = param_r3;
        a.r[1] = 5u;
        r3 = tc_call(0x80172094u, &a);
        if (r3 != 0u) {
            a.r[0] = param_r3;
            a.r[1] = 5u;
            r3 = tc_call(0x80172094u, &a);
            if (r3 != 1u) {
                a.r[0] = param_r3;
                a.r[1] = 5u;
                r3 = tc_call(0x80172094u, &a);
                if (r3 != 2u) {
                    r3 = rd32(param_r3 + 0x14bcu);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x8004c630u, &a);
                        if ((s32)r3 > 1) {
                            wr32(param_r3 + 0x14c0u, 1u);
                        }
                    }
                } else {
                    r3 = rd32(param_r3 + 0x14bcu);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x8004c630u, &a);
                        if ((s32)r3 > 4) {
                            wr32(param_r3 + 0x14c0u, 4u);
                        }
                    }
                }
            } else {
                r3 = rd32(param_r3 + 0x14bcu);
                if (r3 != 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x8004c630u, &a);
                    if ((s32)r3 > 2) {
                        wr32(param_r3 + 0x14c0u, 2u);
                    }
                }
            }
        } else {
            r3 = rd32(param_r3 + 0x14bcu);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x8004c630u, &a);
                if ((s32)r3 > 3) {
                    wr32(param_r3 + 0x14c0u, 3u);
                }
            }
        }
    }
    return;
}
