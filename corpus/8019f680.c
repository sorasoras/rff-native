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

void fn_8019f680(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f30 = 0.0, f31 = 0.0;
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
    wr32(0x817fdfd8u, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f1 = tc_lastf();
    r5 = rd32(r3);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfb4u, r5);
    wr32(0x817fdfb8u, r0);
    r0 = rd32(r3 + 8u);
    r3 = rd32(0x804863d8u);
    wr32(0x817fdfbcu, r0);
    a.r[0] = r3;
    a.r[1] = 0x80480000u;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
    r4 = rd32(r3);
    wr32(0x817fdfacu, rd32(r3 + 4u));
    r0 = rd32(r3 + 8u);
    f0 = (f64)rdf32(0x805708d4u);
    f1 = (f64)(f32)((f64)rdf32(0x817fdfb8u) - (f64)rdf32(0x817fdfacu));
    wr32(0x817fdfa8u, r4);
    wr32(0x817fdfb0u, r0);
    f1 = ppc_fabs(f1);
    f1 = (f64)(f32)f1;
    if (!(f1 > f0)) {
        a.r[0] = rd32(param_1 + 0x78u);
        a.r[1] = 4u;
        r3 = tc_call(0x80031cf8u, &a);
        f1 = tc_lastf();
        if (r3 != 0u) {
            r3 = rd32(r3 + 0x50u);
            wrf32d(0x817fdfb4u, (f64)rdf32(r3 + 0xcu));
            wrf32d(0x817fdfb8u, (f64)rdf32(r3 + 0x1cu));
            wrf32d(0x817fdfbcu, (f64)rdf32(r3 + 0x2cu));
        }
        r5 = rd32(0x804890d4u);
        r4 = rd32(0x804890d8u);
        r0 = rd32(0x804890dcu);
        wr32(0x817fdf9cu, r5);
        wr32(0x817fdfa0u, r4);
        wr32(0x817fdfa4u, r0);
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0x804890d4u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
        f31 = f1;
        r3 = rd32(0x817fdfa0u);
        r0 = rd32(0x817fdfa4u);
        wr32(0x817fdf84u, rd32(0x817fdf9cu));
        wr32(0x817fdf88u, r3);
        wr32(0x817fdf8cu, r0);
        a.f[0] = f1;
        f1 = tc_callf(0x80262704u, &a);
        f30 = (f64)(f32)f1;
        a.f[0] = f31;
        f1 = tc_callf(0x80262b10u, &a);
        f5 = (f64)(f32)f1;
        f2 = (f64)rdf32(0x817fdf8cu);
        f4 = (f64)rdf32(0x817fdf84u);
        wr32(0x817fdf94u, rd32(0x817fdfa0u));
        f1 = (f64)rdf32(0x805708d8u);
        wrf32d(0x817fdf9cu, ppc_fmadds(f4, f30, (f64)(f32)(f2 * f5)));
        wrf32d(0x817fdfa4u, ppc_fmadds(f4, -f5, (f64)(f32)(f2 * f30)));
        r0 = rd32(0x817fdfa4u);
        wr32(0x817fdf90u, rd32(0x817fdf9cu));
        wr32(0x817fdf98u, r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdf90u;
        a.r[1] = 0x817fdf90u;
        (void)tc_call(0x802343c8u, &a);
        a.r[0] = 0x817fdfb4u;
        a.r[1] = 0x817fdf90u;
        a.r[2] = 0x817fdfb4u;
        (void)tc_call(0x80234380u, &a);
        f1 = (f64)rdf32(param_1 + 0x134u);
        f0 = (f64)rdf32(0x805757f0u);
        if ((f1 < f0) || (f1 == f0)) {
            wrf32d(param_1 + 0x134u, (f64)rdf32(0x80575800u));
        }
        f0 = (f64)rdf32(0x805708dcu);
        f31 = (f64)(f32)px_fdiv((f64)rdf32(param_1 + 0x124u), (f64)rdf32(param_1 + 0x134u));
        if (f31 < f0) {
            f31 = f0;
        }
        if ((f64)rdf32(0x805757f0u) == (f64)rdf32(param_1 + 0x130u)) {
            wrf32d(param_1 + 0x130u, (f64)rdf32(0x805708d0u));
        }
        a.f[0] = (f64)rdf32(0x805757f0u);
        a.r[0] = 0xffffffffu;
        a.r[1] = 1u;
        r3 = tc_call(0x8017748cu, &a);
        r30 = r3;
        if (r3 != 0u) {
            wr32(r3 + 0x124u, 0x2080a5u);
            r6 = rd32(0x805708e0u);
            f4 = (f64)rdf32(0x817fdfb4u);
            f1 = (f64)rdf32(0x80575804u);
            wrf32d(r3 + 0x100u, f4);
            f0 = (f64)rdf32(0x805757f0u);
            f3 = (f64)rdf32(0x817fdfb8u);
            wrf32d(r3 + 0x104u, f3);
            f2 = (f64)rdf32(0x817fdfbcu);
            wrf32d(r3 + 0x108u, f2);
            wrf32d(r3 + 8u, f4);
            wrf32d(r3 + 0xcu, f3);
            wrf32d(r3 + 0x10u, f2);
            wr32(r3 + 0x14cu, 0xc5u);
            r0 = (u32)rd8(r3 + 0x1a4u);
            wr32(r3 + 0x160u, 0x57u);
            r0 = r0 | 0x80u;
            r0 = r0 & 0xffffff9fu;
            wr32(r3 + 0x16cu, r6);
            wr32(r3 + 0x150u, 0x1093u);
            wr8(r3 + 0x1a4u, (u8)r0);
            wrf32d(r3 + 0x128u, (f64)rdf32(param_1 + 0x134u));
            wrf32d(r3 + 0x134u, f1);
            wrf32d(0x817fdf80u, f0);
            wrf32d(0x817fdf7cu, f0);
            wrf32d(0x817fdf78u, f0);
            a.r[0] = 0x817fdf9cu;
            a.r[1] = 0x817fdf78u;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdf78u);
            a.f[1] = (f64)rdf32(0x817fdf80u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if ((f64)rdf32(0x80575808u) < f1) {
                a.f[0] = (f64)rdf32(0x817fdf78u);
                a.f[1] = (f64)rdf32(0x817fdf80u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f2 = (f64)(f32)(f1 - (f64)rdf32(0x8057580cu));
            } else {
                a.f[0] = (f64)rdf32(0x817fdf78u);
                a.f[1] = (f64)rdf32(0x817fdf80u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x80575810u);
                if ((f0 > f1) || (f0 == f1)) {
                    a.f[0] = (f64)rdf32(0x817fdf78u);
                    a.f[1] = (f64)rdf32(0x817fdf80u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f2 = (f64)(f32)((f64)rdf32(0x8057580cu) + f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdf78u);
                    a.f[1] = (f64)rdf32(0x817fdf80u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f2 = (f64)(f32)f1;
                }
            }
            f1 = (f64)(f32)((f64)rdf32(0x80575814u) * f2);
            wrf64(0x817fdfc8u, px_ctiw(f31, ppc_fctiwz(f31)));
            r0 = rd32(0x817fdfccu);
            wrf64(0x817fdfc0u, px_ctiw(f1, ppc_fctiwz(f1)));
            wr16(r30 + 0x142u, (u16)rd32(0x817fdfc4u));
            wr32(r30 + 0xf0u, 2u);
            wr32(r30 + 0x148u, r0);
            a.r[0] = r30;
            a.r[1] = 0u;
            (void)tc_call(0x80177d54u, &a);
            f0 = (f64)rdf32(param_1 + 0x130u);
            wrf32d(r30 + 0x130u, f0);
            wrf32d(r30 + 0x24u, f0);
            wr32(r30 + 0x40u, 0u);
        }
    }
    return;
}
