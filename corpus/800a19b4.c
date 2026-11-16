#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800a19b4(f64 param_1, f64 param_2, f64 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7, u32 param_8, u32 param_9)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    f0 = (f64)rdf32(param_7 + 4u);
    wrf32d(param_4 + 0x108u, (f64)rdf32(param_7));
    f5 = (f64)rdf32(param_6);
    wrf32d(param_4 + 0x10cu, f0);
    f4 = (f64)rdf32(param_6 + 4u);
    f1 = (f64)rdf32(param_6 + 8u);
    f0 = (f64)rdf32(param_7 + 8u);
    wrf32d(param_4 + 0xfcu, f5);
    r5 = rd32(param_4 + 0x108u);
    wrf32d(param_4 + 0x100u, f4);
    r0 = rd32(param_4 + 0x10cu);
    wrf32d(param_4 + 0x104u, f1);
    wrf32d(param_4 + 0x110u, f0);
    wrf32d(param_4 + 0x118u, param_2);
    wrf32d(param_4 + 0x11cu, param_2);
    wrf32d(param_4 + 0x114u, param_3);
    wr32(0x817fdfc4u, r5);
    wr32(0x817fdfc8u, r0);
    wr32(0x817fdfccu, rd32(param_4 + 0x110u));
    a.r[0] = 0x817fdfc4u;
    a.r[1] = param_4 + 0xfcu;
    a.r[2] = 0x817fdfc4u;
    (void)tc_call(0x802343a4u, &a);
    r4 = rd32(param_6 + 4u);
    r0 = rd32(param_6 + 8u);
    wr32(0x817fdfb8u, rd32(param_6));
    wr32(0x817fdfbcu, r4);
    wr32(0x817fdfc0u, r0);
    a.r[0] = 0x817fdfc4u;
    f1 = tc_callf(0x80234440u, &a);
    if (f1 < (f64)rdf32(0x80572ab0u)) {
        a.r[0] = 0x817fdfb8u;
        a.r[1] = 0x804890d4u;
        a.r[2] = 0x817fdfb8u;
        (void)tc_call(0x80234380u, &a);
    } else {
        f1 = (f64)(f32)px_fdiv((f64)rdf32(param_4 + 0x118u), f1);
        a.f[0] = f1;
        a.r[0] = 0x817fdfc4u;
        a.r[1] = 0x817fdfc4u;
        (void)tc_call(0x802343c8u, &a);
        a.r[0] = 0x817fdfb8u;
        a.r[1] = 0x817fdfc4u;
        a.r[2] = 0x817fdfb8u;
        (void)tc_call(0x80234380u, &a);
    }
    a.f[0] = param_1;
    a.r[0] = param_4;
    a.r[1] = 2u;
    a.r[2] = param_6;
    a.r[3] = 0x817fdfb8u;
    a.r[4] = param_5;
    a.r[5] = param_9 | 0x20u;
    a.r[6] = param_8;
    (void)tc_call(0x80096704u, &a);
    wr32(param_4 + 0x64u, rd32(param_4 + 0x64u) | 0x80000000u);
    a.r[0] = param_4;
    (void)tc_call(0x8006ff58u, &a);
    r6 = rd32(param_7 + 4u);
    r0 = rd32(param_7 + 8u);
    wr32(0x817fdfacu, rd32(param_7));
    wr32(0x817fdfb0u, r6);
    wr32(0x817fdfb4u, r0);
    a.r[0] = 0x817fdfacu;
    a.r[1] = param_6;
    a.r[2] = 0x817fdfacu;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x80572ab0u);
    r0 = 0u;
    f0 = (f64)rdf32(0x817fdfacu);
    wrf32d(0x817fdfb0u, f1);
    if ((f1 == f0 && f1 == f1) && f1 == (f64)rdf32(0x817fdfb4u)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fdfacu;
        a.r[1] = 0x817fdfacu;
        (void)tc_call(0x802343e4u, &a);
    }
    f0 = (f64)rdf32(0x80572ab0u);
    wrf32d(0x817fdf90u, f0);
    wrf32d(0x817fdf8cu, f0);
    wrf32d(0x817fdf88u, f0);
    a.r[0] = 0x817fdfacu;
    a.r[1] = 0x817fdf88u;
    (void)tc_call(0x802343e4u, &a);
    a.f[0] = (f64)rdf32(0x817fdf88u);
    a.f[1] = (f64)rdf32(0x817fdf90u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if ((f64)rdf32(0x80572ab8u) < f1) {
        a.f[0] = (f64)rdf32(0x817fdf88u);
        a.f[1] = (f64)rdf32(0x817fdf90u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572abcu));
    } else {
        a.f[0] = (f64)rdf32(0x817fdf88u);
        a.f[1] = (f64)rdf32(0x817fdf90u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x80572ac0u);
        if ((f0 > f1) || (f0 == f1)) {
            a.f[0] = (f64)rdf32(0x817fdf88u);
            a.f[1] = (f64)rdf32(0x817fdf90u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f1 = (f64)(f32)((f64)rdf32(0x80572abcu) + f1);
        } else {
            a.f[0] = (f64)rdf32(0x817fdf88u);
            a.f[1] = (f64)rdf32(0x817fdf90u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
        }
    }
    f0 = (f64)rdf32(0x80572ab0u);
    c0eq = rd32(param_4 + 0x34u) == 3u;
    wrf32d(0x817fdfa4u, f1);
    wrf32d(0x817fdfa0u, f0);
    wrf32d(0x817fdfa8u, f0);
    if (c0eq) {
        a.f[0] = (f64)rdf32(0x80572ab4u);
        a.r[0] = 0x101u;
        a.r[1] = param_6;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        r0 = rd32(param_4 + 0x130u);
        wr32(param_4 + 0x3cu, r3);
        if (r0 == 0u) {
            a.f[0] = (f64)rdf32(0x80572ab4u);
            a.r[0] = 0x102u;
            a.r[1] = param_6;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            wr32(param_4 + 0x130u, r3);
        }
        if (rd32(param_4 + 0x134u) == 0u) {
            a.f[0] = (f64)rdf32(0x80572ab4u);
            a.r[0] = 0x102u;
            a.r[1] = param_6;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            wr32(param_4 + 0x134u, r3);
        }
    }
    if (rd32(param_4 + 0x3cu) != 0u) {
        r3 = rd32(0x817fdfa4u);
        r0 = rd32(0x817fdfa8u);
        wr32(0x817fdf94u, rd32(0x817fdfa0u));
        wr32(0x817fdf98u, r3);
        wr32(0x817fdf9cu, r0);
        a.r[0] = rd32(param_4 + 0x3cu);
        a.r[1] = 0x817fdf94u;
        (void)tc_call(0x801582b4u, &a);
    }
    wr32(param_4 + 0x12cu, 0u);
    wrf32d(param_4 + 0x120u, (f64)rdf32(0x804890c8u));
    wrf32d(param_4 + 0x124u, (f64)rdf32(0x804890ccu));
    wrf32d(param_4 + 0x128u, (f64)rdf32(0x804890d0u));
    return;
}
