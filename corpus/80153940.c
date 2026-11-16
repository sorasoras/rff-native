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

void fn_80153940(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f5 = 0.0, f6 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
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
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdf68u, 0x43300000u);
    wr32(0x817fdf70u, 0x43300000u);
    r3 = tc_call(0x8004d970u, &a);
    r0 = (u32)rd16(r3 + 0xf2u);
    wr32(0x817fdf6cu, (u32)rd16(r3 + 0xf0u));
    r6 = (u32)rd16(r3 + 0xf4u);
    wr32(0x817fdf74u, r0);
    f0 = rdf64(0x817fdf68u);
    r0 = (u32)rd16(r3 + 0xf6u);
    f1 = rdf64(0x817fdf70u);
    f3 = rdf64(0x805748b8u);
    wr32(0x817fdf6cu, r6);
    f31 = (f64)(f32)(f0 - f3);
    f0 = (f64)rdf32(0x805748a8u);
    f2 = rdf64(0x817fdf68u);
    f30 = (f64)(f32)(f1 - f3);
    wr32(0x817fdf74u, r0);
    f29 = (f64)(f32)(f2 - f3);
    f28 = (f64)(f32)(rdf64(0x817fdf70u) - f3);
    f27 = ppc_fmadds(f0, f29, f31);
    f26 = ppc_fmadds(f0, f28, f30);
    a.r[0] = 0x817fdf58u;
    a.r[1] = r3;
    a.r[2] = param_3;
    (void)tc_call(0x8004d9bcu, &a);
    f2 = (f64)rdf32(0x817fdf58u);
    if (!(f2 < f31)) {
        f1 = (f64)rdf32(0x817fdf5cu);
        if ((!(f1 < f30) && !(f2 > (f64)(f32)(f31 + f29))) && !(f1 > (f64)(f32)(f30 + f28))) {
            f1 = (f64)rdf32(0x817fdf60u);
            if (!(f1 > (f64)rdf32(0x805748a4u)) && !(f1 < (f64)rdf32(0x805748a0u))) {
                f0 = (f64)(f32)(f30 - f26);
                f1 = (f64)(f32)(f31 - f27);
                f0 = (f64)(f32)(f0 * f0);
                f1 = ppc_fmadds(f1, f1, f0);
                a.f[0] = f1;
                f1 = tc_callf(0x80262ec0u, &a);
                f31 = (f64)(f32)f1;
                f28 = (f64)(f32)(f26 - (f64)rdf32(0x817fdf5cu));
                f26 = (f64)(f32)(f27 - (f64)rdf32(0x817fdf58u));
                a.f[0] = ppc_fmadds(f26, f26, (f64)(f32)(f28 * f28));
                f1 = tc_callf(0x80262ec0u, &a);
                r4 = (u32)rd8(param_4 + 3u);
                wr32(0x817fdf74u, rd32(param_1 + 8u));
                f5 = rdf64(0x805748b8u);
                f3 = rdf64(0x817fdf70u);
                f6 = (f64)(f32)px_fdiv((f64)(f32)(f31 - (f64)(f32)f1), f31);
                wr32(0x817fdf6cu, r4);
                f0 = (f64)rdf32(0x805748acu);
                f3 = (f64)(f32)(f3 - f5);
                f1 = (f64)(f32)(f0 * f26);
                f3 = (f64)(f32)px_fdiv((f64)rdf32(0x805748a4u), f3);
                f0 = (f64)(f32)(f0 * f28);
                f2 = (f64)(f32)((f64)(f32)(rdf64(0x817fdf68u) - f5) * f6);
                f26 = (f64)(f32)(f1 * f3);
                f27 = (f64)(f32)(f0 * f3);
                wrf64(0x817fdf78u, px_ctiw(f2, ppc_fctiwz(f2)));
                wr8(param_4 + 3u, (u8)rd32(0x817fdf7cu));
                a.r[0] = 1u;
                (void)tc_call(0x8004ca7cu, &a);
                a.r[0] = 2u;
                (void)tc_call(0x80044da4u, &a);
                a.r[0] = 0u;
                a.r[1] = 0u;
                a.r[2] = 7u;
                (void)tc_call(0x80044e3cu, &a);
                f31 = (f64)rdf32(0x805748a0u);
                r27 = 0u;
                r28 = 0u;
                while (r27 < rd32(param_1 + 8u)) {
                    r0 = rd32(param_1 + 0xcu);
                    r3 = r0 + r28;
                    r0 = (u32)rd8(r28 + r0);
                    r0 = (u32)(s8)r0;
                    if (r0 == 0u) {
                        f0 = (f64)rdf32(0x817fdf5cu);
                        r9 = (u32)rd8(param_4);
                        r8 = (u32)rd8(param_4 + 1u);
                        r7 = (u32)rd8(param_4 + 2u);
                        wrf32d(0x817fdf4cu, ppc_fmadds(f26, (f64)rdf32(r3 + 0xcu), (f64)rdf32(0x817fdf58u)));
                        r0 = (u32)rd8(param_4 + 3u);
                        f0 = ppc_fmadds(f27, (f64)rdf32(r3 + 0xcu), f0);
                        wrf32d(0x817fdf54u, f31);
                        wr8(0x817fdf48u, (u8)r9);
                        wrf32d(0x817fdf50u, f0);
                        wr8(0x817fdf49u, (u8)r8);
                        wr8(0x817fdf4au, (u8)r7);
                        wr8(0x817fdf4bu, (u8)r0);
                        a.r[0] = r3;
                        a.r[1] = param_2;
                        a.r[2] = 0x817fdf4cu;
                        a.r[3] = 0x817fdf48u;
                        (void)tc_call(0x80153524u, &a);
                    }
                    r28 = r28 + 0x14u;
                    r27 = r27 + 1u;
                }
                a.r[0] = 1u;
                a.r[1] = 1u;
                a.r[2] = 3u;
                (void)tc_call(0x80044e3cu, &a);
                a.r[0] = 1u;
                (void)tc_call(0x80044da4u, &a);
                a.r[0] = 0u;
                (void)tc_call(0x8004ca7cu, &a);
            }
        }
    }
    return;
}
