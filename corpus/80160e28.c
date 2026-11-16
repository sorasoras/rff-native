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

void fn_80160e28(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    f1 = (f64)rdf32(0x80574a78u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    r3 = rd32((u32)param_1 + 0x78u);
    wrf32d(0x817fdfb4u, f1);
    wrf32d(0x817fdfd8u, f1);
    wrf32d(0x817fdfd4u, f1);
    wrf32d(0x817fdfd0u, f1);
    wrf32d(0x817fdfccu, f1);
    wrf32d(0x817fdfc8u, f1);
    wrf32d(0x817fdfc4u, f1);
    wrf32d(0x817fdfc0u, f1);
    wrf32d(0x817fdfbcu, f1);
    wrf32d(0x817fdfb8u, f1);
    wrf32d(0x817fdfa8u, f1);
    wrf32d(0x817fdfa4u, f1);
    wrf32d(0x817fdfa0u, f1);
    f0 = (f64)rdf32(r3 + 0xcu);
    wrf32d(0x817fdf5cu, f1);
    wrf32d(0x817fdfa0u, f0);
    f0 = (f64)rdf32(r3 + 0x1cu);
    wrf32d(0x817fdf64u, f1);
    wrf32d(0x817fdfa4u, f0);
    wrf32d(0x817fdfa8u, (f64)rdf32(r3 + 0x2cu));
    a.r[0] = r3;
    a.r[1] = 4u;
    r3 = tc_call(0x80031cf8u, &a);
    if (r3 != 0u) {
        r6 = rd32(r3 + 0x50u);
        wrf32d(0x817fdfd0u, (f64)rdf32(r6 + 0xcu));
        r7 = rd32(0x817fdfd0u);
        wrf32d(0x817fdfd4u, (f64)rdf32(r6 + 0x1cu));
        f0 = (f64)rdf32(r6 + 0x2cu);
        r6 = rd32(0x817fdfd4u);
        wrf32d(0x817fdfd8u, f0);
        r0 = rd32(0x817fdfd8u);
        wr32(0x817fdf94u, r7);
        wr32(0x817fdf98u, r6);
        wr32(0x817fdf9cu, r0);
        a.r[0] = 0x817fdf94u;
        a.r[1] = 0x817fdfa0u;
        a.r[2] = 0x817fdf94u;
        (void)tc_call(0x802343a4u, &a);
        f2 = (f64)rdf32(0x817fdf94u);
        r0 = 0u;
        f0 = (f64)rdf32(0x80574a78u);
        f1 = (f64)rdf32(0x817fdf9cu);
        wrf32d(0x817fdfc4u, f2);
        wrf32d(0x817fdfccu, f1);
        wrf32d(0x817fdfc8u, f0);
        if ((f0 == f2 && f0 == f0) && f0 == f1) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfc4u;
            a.r[1] = 0x817fdfc4u;
            (void)tc_call(0x802343e4u, &a);
        }
        r5 = rd32(0x817fdfc8u);
        r0 = rd32(0x817fdfccu);
        f1 = (f64)rdf32(0x80570880u);
        wr32(0x817fdf88u, rd32(0x817fdfc4u));
        wr32(0x817fdf8cu, r5);
        wr32(0x817fdf90u, r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdf88u;
        a.r[1] = 0x817fdf88u;
        (void)tc_call(0x802343c8u, &a);
        a.r[0] = 0x817fdfd0u;
        a.r[1] = 0x817fdf88u;
        a.r[2] = 0x817fdfd0u;
        (void)tc_call(0x80234380u, &a);
        f1 = (f64)rdf32((u32)param_1 + 0x15cu);
        r5 = rd32(0x817fdfc8u);
        r0 = rd32(0x817fdfccu);
        wr32(0x817fdf7cu, rd32(0x817fdfc4u));
        wr32(0x817fdf80u, r5);
        wr32(0x817fdf84u, r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdf7cu;
        a.r[1] = 0x817fdf7cu;
        (void)tc_call(0x802343c8u, &a);
        f1 = (f64)rdf32(0x817fdf80u);
        f0 = (f64)rdf32(0x817fdf84u);
        wrf32d(0x817fdfb8u, (f64)rdf32(0x817fdf7cu));
        wrf32d(0x817fdfbcu, f1);
        wrf32d(0x817fdfc0u, f0);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x1078u;
        a.r[2] = 0x817fdfd0u;
        (void)tc_call(0x8010a754u, &a);
        a.f[0] = (f64)rdf32(0x80574ab0u);
        a.r[0] = 0x19u;
        a.r[1] = 0x817fdfd0u;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0x804b15c0u;
        r3 = tc_call(0x800d782cu, &a);
        r29 = r3;
        if (r3 != 0u) {
            wr32(r3 + 0x20u, 0xffffffffu);
            wr32(r3 + 0x24u, 0u);
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x8010b43cu, &a);
            wr32(r29 + 0x20u, r3);
            wr32(r29 + 0x24u, 0u);
        }
        if (rd32((u32)param_1 + 0x130u) == 0u) {
            wr32((u32)param_1 + 0x130u, 0xc8u);
        }
        a.f[0] = (f64)rdf32(0x80574a78u);
        a.r[0] = 0xffffffffu;
        a.r[1] = 1u;
        r3 = tc_call(0x8017748cu, &a);
        r28 = r3;
        if (r3 != 0u) {
            wr32(r3 + 0x124u, 0x20008du);
            f0 = (f64)rdf32(0x80574a78u);
            f3 = (f64)rdf32(0x817fdfd0u);
            wrf32d(r3 + 0x100u, f3);
            f2 = (f64)rdf32(0x817fdfd4u);
            wrf32d(r3 + 0x104u, f2);
            f1 = (f64)rdf32(0x817fdfd8u);
            wrf32d(r3 + 0x108u, f1);
            wrf32d(r3 + 8u, f3);
            wrf32d(r3 + 0xcu, f2);
            wrf32d(r3 + 0x10u, f1);
            wr32(r3 + 0x14cu, 0xacu);
            wr32(r3 + 0x154u, 0x80u);
            wr32(r3 + 0x160u, 0x80u);
            wr8(r3 + 0x1a4u, (u8)((u32)rd8(r3 + 0x1a4u) | 0xe0u));
            wrf32d(r3 + 0x128u, f0);
            a.r[0] = 0x817fdfb8u;
            f1 = tc_callf(0x80234440u, &a);
            wrf32d(r28 + 0x12cu, f1);
            f0 = (f64)rdf32(0x80574a78u);
            wrf32d(r28 + 0x134u, (f64)rdf32((u32)param_1 + 0x158u));
            wr32(r28 + 0x148u, 0x64u);
            wrf32d(0x817fdf78u, f0);
            wrf32d(0x817fdf74u, f0);
            wrf32d(0x817fdf70u, f0);
            a.r[0] = 0x817fdfc4u;
            a.r[1] = 0x817fdf70u;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdf70u);
            a.f[1] = (f64)rdf32(0x817fdf78u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if ((f64)rdf32(0x80574a90u) < f1) {
                a.f[0] = (f64)rdf32(0x817fdf70u);
                a.f[1] = (f64)rdf32(0x817fdf78u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f2 = (f64)(f32)(f1 - (f64)rdf32(0x80574a94u));
            } else {
                a.f[0] = (f64)rdf32(0x817fdf70u);
                a.f[1] = (f64)rdf32(0x817fdf78u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x80574a98u);
                if ((f0 > f1) || (f0 == f1)) {
                    a.f[0] = (f64)rdf32(0x817fdf70u);
                    a.f[1] = (f64)rdf32(0x817fdf78u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f2 = (f64)(f32)((f64)rdf32(0x80574a94u) + f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdf70u);
                    a.f[1] = (f64)rdf32(0x817fdf78u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f2 = (f64)(f32)f1;
                }
            }
            f1 = (f64)rdf32(0x80570884u);
            f0 = (f64)(f32)((f64)rdf32(0x80574ab4u) * f2);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfe0u, f0);
            wr16(r28 + 0x142u, (u16)rd32(0x817fdfe4u));
            wrf32d(r28 + 0x174u, f1);
            a.r[0] = r28;
            a.r[1] = 0u;
            (void)tc_call(0x80177d54u, &a);
            r3 = rd32((u32)param_1 + 0x130u);
            wr32(0x817fdfe8u, 0x43300000u);
            f1 = rdf64(0x80574ab8u);
            wr32(0x817fdfecu, r3);
            f0 = (f64)(f32)(rdf64(0x817fdfe8u) - f1);
            wrf32d(r28 + 0x130u, f0);
            wrf32d(r28 + 0x24u, f0);
        }
    }
    return;
}
