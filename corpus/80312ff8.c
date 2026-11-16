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

void fn_80312ff8(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r11 = 0, r12 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0;
    u32 r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f6 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf30u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r6 = (u32)rd16(param_1 + 0xe0u);
    wr32(0x817fdfa0u, 0x43300000u);
    wr32(0x817fdfa8u, 0x43300000u);
    if (r6 != 0u) {
        wr16(param_1 + 0xe0u, (u16)(r6 - 1u));
    } else {
        f4 = (f64)rdf32(param_1 + 0x34u);
        r6 = (u32)rd16(param_1 + 0x30u);
        c0eq = (f64)rdf32(0x8057787cu) == f4;
        wr16(param_1 + 0xe0u, (u16)r6);
        if (!c0eq) {
            r5 = rd32(param_1 + 0xecu);
            wr32(0x817fdfacu, r6);
            f3 = rdf64(0x80577880u);
            f2 = (f64)rdf32(0x80577898u);
            f0 = (f64)rdf32(0x80577894u);
            f1 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfa8u) - f3) * f4);
            r4 = (r5 * 0x343fdu) + 0x269ec3u;
            wr32(param_1 + 0xecu, r4);
            f0 = (f64)(f32)(f1 - f0);
            wr32(0x817fdfa4u, (r4 >> 0x10u) & 0xffffu);
            a.f[0] = (f64)(f32)(f0 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfa0u) - f3), f2));
            f1 = tc_callf(0x80262598u, &a);
            f0 = (f64)(f32)f1;
            r3 = (u32)rd16(param_1 + 0xe0u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfb0u, f0);
            wr16(param_1 + 0xe0u, (u16)(r3 + rd32(0x817fdfb4u)));
        }
        if ((rd32(param_1 + 0x24u) & 0x20000u) != 0u) {
            f1 = rdf64(0x80577880u);
            wr32(0x817fdfa4u, (u32)rd16(param_1 + 0x32u));
            wrf32d(param_1 + 0x38u, (f64)(f32)(rdf64(0x817fdfa0u) - f1));
        } else {
            f0 = (f64)rdf32(param_1 + 0x2cu);
            if ((f64)rdf32(0x8057787cu) == f0) {
                f31 = (f64)rdf32(param_1 + 0x28u);
            } else {
                f3 = (f64)rdf32(param_1 + 0x28u);
                f6 = rdf64(0x80577880u);
                f2 = (f64)(f32)(f3 * f0);
                f4 = (f64)rdf32(0x80577898u);
                f1 = (f64)rdf32(0x8057789cu);
                f0 = (f64)rdf32(0x80577894u);
                r3 = (rd32(param_1 + 0xecu) * 0x343fdu) + 0x269ec3u;
                wr32(param_1 + 0xecu, r3);
                wr32(0x817fdfacu, (r3 >> 0x10u) & 0xffffu);
                f4 = (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdfa8u) - f6), f4);
                f1 = (f64)(f32)(f1 * f4);
                f0 = (f64)(f32)(f1 - f0);
                f0 = (f64)(f32)(f2 * f0);
                f31 = (f64)(f32)(f3 + f0);
            }
            if ((rd32(param_1 + 0x24u) & 0x100u) != 0u) {
                r19 = rd32(rd32(param_1 + 0xbcu) + 0x20u);
                a.r[0] = param_1;
                a.r[1] = 0u;
                r3 = tc_call(0x80313b9cu, &a);
                a.r[0] = r3;
                a.r[1] = param_1 + 0x90u;
                a.r[2] = 0x817fdf48u;
                (void)tc_call(0x8023411cu, &a);
                r4 = r19 + 0x10000u;
                f1 = (f64)rdf32(r4 - 0x3fa4u);
                f2 = (f64)rdf32(r4 - 0x3fa0u);
                r4 = r4 - 0x3fe0u;
                a.f[0] = f1;
                a.f[1] = f2;
                a.f[2] = (f64)rdf32(param_1 + 0x44u);
                a.f[3] = (f64)rdf32(param_1 + 0x40u);
                a.r[0] = 0x817fdf48u;
                a.r[1] = r4;
                f1 = tc_callf(0x80312efcu, &a);
                f2 = (f64)rdf32(param_1 + 0x48u);
                f31 = (f64)(f32)(f31 * (f64)(f32)(f2 + (f64)(f32)((f64)(f32)((f64)rdf32(0x80577894u) - f2) * f1)));
            }
            f2 = (f64)(f32)((f64)rdf32(param_1 + 0x38u) + f31);
            c0eq = (u32)rd8(param_1 + 0xdcu) == 0u;
            wrf32d(param_1 + 0x38u, f2);
            if (!c0eq && (f64)rdf32(0x8057787cu) != (f64)rdf32(param_1 + 0x28u)) {
                f0 = (f64)rdf32(0x80577894u);
                if (f2 < f0) {
                    wrf32d(param_1 + 0x38u, f0);
                }
            }
        }
        f1 = (f64)rdf32(param_1 + 0x38u);
        f0 = (f64)rdf32(0x80577894u);
        if ((f1 > f0) || (f1 == f0)) {
            (void)tc_call(0x8031f650u, &a);
            r3 = rd32(param_1 + 0xf0u);
            r11 = rd32(param_1 + 0xb8u);
            if (r3 != 0u) {
                if (rd32(rd32(param_1 + 0xbcu) + 0x44u) != 0u) {
                    f0 = (f64)rdf32(param_1 + 0x38u);
                    r19 = rd32(param_3);
                    r20 = rd32(param_3 + 4u);
                    r21 = rd32(param_3 + 8u);
                    r22 = rd32(param_3 + 0xcu);
                    wrf64(0x817fdfb0u, px_ctiw(f0, ppc_fctiwz(f0)));
                    r23 = rd32(param_3 + 0x10u);
                    r24 = rd32(param_3 + 0x14u);
                    wr32(0x817fdf44u, rd32(0x817fdfb4u));
                    r25 = rd32(param_3 + 0x18u);
                    r26 = rd32(param_3 + 0x1cu);
                    wr32(0x817fdf40u, rd32(param_1 + 0x24u));
                    r27 = rd32(param_3 + 0x20u);
                    r28 = rd32(param_3 + 0x24u);
                    wrf32d(0x817fdf58u, (f64)rdf32(param_1 + 0x4cu));
                    r12 = rd32(param_3 + 0x28u);
                    r0 = rd32(param_3 + 0x2cu);
                    wrf32d(0x817fdf5cu, (f64)rdf32(param_1 + 0x50u));
                    f2 = rdf64(0x80577888u);
                    f0 = (f64)rdf32(0x80577878u);
                    wrf32d(0x817fdf60u, (f64)rdf32(param_1 + 0x54u));
                    wrf32d(0x817fdf64u, (f64)rdf32(param_1 + 0x58u));
                    wrf32d(0x817fdf68u, (f64)rdf32(param_1 + 0x5cu));
                    wrf32d(0x817fdf6cu, (f64)rdf32(param_1 + 0x60u));
                    wr16(0x817fdf38u, rd16(r11 + 0x12u));
                    r11 = (u32)rd8(r11 + 0x14u);
                    r11 = (u32)(s8)r11;
                    wr32(0x817fdf70u, r19);
                    r11 = r11 ^ 0x80000000u;
                    wr32(0x817fdfa4u, r11);
                    f1 = rdf64(0x817fdfa0u);
                    wr32(0x817fdf74u, r20);
                    f1 = (f64)(f32)(f1 - f2);
                    wr32(0x817fdf78u, r21);
                    f0 = (f64)(f32)px_fdiv(f1, f0);
                    wr32(0x817fdf7cu, r22);
                    wr32(0x817fdf80u, r23);
                    wr32(0x817fdf84u, r24);
                    wr32(0x817fdf88u, r25);
                    wr32(0x817fdf8cu, r26);
                    wrf32d(0x817fdf3cu, f0);
                    wr32(0x817fdf90u, r27);
                    wr32(0x817fdf94u, r28);
                    wr32(0x817fdf98u, r12);
                    wr32(0x817fdf9cu, r0);
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 0x817fdf44u;
                    a.r[3] = 0x817fdf40u;
                    a.r[4] = 0x817fdf58u;
                    a.r[5] = 0x817fdf38u;
                    a.r[6] = 0x817fdf3cu;
                    a.r[7] = 0x817fdf70u;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    (void)tc_call(rd32(rd32(param_1 + 0xbcu) + 0x44u), &a);
                    r3 = rd32(param_1 + 0xf0u);
                    a.r[0] = r3;
                    a.r[1] = param_1;
                    a.r[2] = param_2;
                    a.r[3] = rd32(0x817fdf44u);
                    a.r[4] = rd32(0x817fdf40u);
                    a.r[5] = 0x817fdf58u;
                    a.r[6] = (u32)rd16(0x817fdf38u);
                    a.r[7] = 0x817fdf70u;
                    a.f[0] = (f64)rdf32(0x817fdf3cu);
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    (void)tc_call(rd32(rd32(r3) + 8u), &a);
                } else {
                    f0 = (f64)rdf32(param_1 + 0x38u);
                    r12 = rd32(r3);
                    f2 = px_ctiw(f0, ppc_fctiwz(f0));
                    wr32(0x817fdfacu, (u32)(s8)rd8(r11 + 0x14u) ^ 0x80000000u);
                    f1 = rdf64(0x80577888u);
                    f0 = rdf64(0x817fdfa8u);
                    wrf64(0x817fdfb0u, f2);
                    f1 = (f64)(f32)(f0 - f1);
                    r12 = rd32(r12 + 8u);
                    f1 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80577878u));
                    a.r[0] = r3;
                    a.r[1] = param_1;
                    a.r[2] = param_2;
                    a.r[3] = rd32(0x817fdfb4u);
                    a.r[4] = rd32(param_1 + 0x24u);
                    a.r[5] = param_1 + 0x4cu;
                    a.r[6] = (u32)rd16(r11 + 0x12u);
                    a.r[7] = param_3;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    (void)tc_call(r12, &a);
                }
            }
            f2 = (f64)rdf32(param_1 + 0x38u);
            f1 = rdf64(0x80577888u);
            wrf64(0x817fdfb0u, px_ctiw(f2, ppc_fctiwz(f2)));
            wr32(0x817fdfa4u, rd32(0x817fdfb4u) ^ 0x80000000u);
            wrf32d(param_1 + 0x38u, (f64)(f32)(f2 - (f64)(f32)(rdf64(0x817fdfa0u) - f1)));
        }
        if ((u32)rd8(param_1 + 0xdcu) != 0u) {
            wr8(param_1 + 0xdcu, 0u);
        }
    }
    return;
}
