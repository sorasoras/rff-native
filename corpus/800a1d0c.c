#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800a1d0c(s32 param_1)
{
    u32 c0gt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf30u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r5 = rd32((u32)param_1 + 0x108u);
    r0 = rd32((u32)param_1 + 0x10cu);
    wrf32d((u32)param_1 + 0x118u, (f64)(f32)((f64)rdf32((u32)param_1 + 0x118u) + (f64)rdf32((u32)param_1 + 0x11cu)));
    wr32(0x817fdf80u, r5);
    wr32(0x817fdf84u, r0);
    wr32(0x817fdf88u, rd32((u32)param_1 + 0x110u));
    a.r[0] = 0x817fdf80u;
    a.r[1] = (u32)param_1 + 0xfcu;
    a.r[2] = 0x817fdf80u;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x80572ab0u);
    r0 = 0u;
    if (f1 == (f64)rdf32(0x817fdf80u) && f1 == (f64)rdf32(0x817fdf84u) && f1 == (f64)rdf32(0x817fdf88u)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fdf80u;
        a.r[1] = 0x817fdf80u;
        (void)tc_call(0x802343e4u, &a);
    }
    a.f[0] = (f64)rdf32((u32)param_1 + 0x118u);
    a.r[0] = 0x817fdf80u;
    a.r[1] = 0x817fdf80u;
    (void)tc_call(0x802343c8u, &a);
    f1 = (f64)rdf32((u32)param_1 + 0x100u);
    f0 = (f64)rdf32((u32)param_1 + 0x104u);
    wrf32d((u32)param_1 + 0xe4u, (f64)rdf32((u32)param_1 + 0xfcu));
    r6 = rd32((u32)param_1 + 0xfcu);
    wrf32d((u32)param_1 + 0xe8u, f1);
    r0 = rd32((u32)param_1 + 0x100u);
    wrf32d((u32)param_1 + 0xecu, f0);
    wr32(0x817fdf5cu, r6);
    wr32(0x817fdf60u, r0);
    wr32(0x817fdf64u, rd32((u32)param_1 + 0x104u));
    a.r[0] = 0x817fdf5cu;
    a.r[1] = 0x817fdf80u;
    a.r[2] = 0x817fdf5cu;
    (void)tc_call(0x80234380u, &a);
    f2 = (f64)rdf32(0x817fdf5cu);
    wrf32d((u32)param_1 + 0xf0u, f2);
    f1 = (f64)rdf32(0x817fdf60u);
    wrf32d((u32)param_1 + 0xf4u, f1);
    f0 = (f64)rdf32(0x817fdf64u);
    wrf32d((u32)param_1 + 0xf8u, f0);
    wrf32d((u32)param_1 + 8u, f2);
    wrf32d((u32)param_1 + 0xcu, f1);
    wrf32d((u32)param_1 + 0x10u, f0);
    f0 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fdf88u));
    f1 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fdf80u));
    if (!(f1 > f0)) {
        f1 = f0;
    }
    f2 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fdf84u));
    if (!(f2 > f1)) {
        f0 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fdf88u));
        f2 = (f64)(f32)ppc_fabs((f64)rdf32(0x817fdf80u));
        if (!(f2 > f0)) {
            f2 = f0;
        }
    }
    f1 = (f64)rdf32((u32)param_1 + 0x118u);
    f0 = (f64)rdf32((u32)param_1 + 0x114u);
    wrf32d((u32)param_1 + 0x20u, f2);
    if (!(f1 > f0)) {
        if (rd32((u32)param_1 + 0x12cu) != 0u) {
            r4 = rd32((u32)param_1 + 0x44u);
            if ((r4 - (((ppc_mulhwu(0xcccccccdu, r4) >> 2u) & 0x3fffffffu) * 5u)) == 0u && rd32((u32)param_1 + 0x34u) == 3u) {
                a.f[0] = (f64)rdf32(0x80572ab4u);
                a.r[0] = 0x6bu;
                a.r[1] = (u32)param_1 + 0x120u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                (void)tc_call(0x800d783cu, &a);
            }
        } else {
            a.f[0] = (f64)rdf32((u32)param_1 + 0xf0u);
            a.f[1] = (f64)rdf32((u32)param_1 + 0xf8u);
            a.f[2] = (f64)(f32)((f64)rdf32((u32)param_1 + 0xf4u) + (f64)(f32)f2);
            a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            f1 = tc_callf(0x8008a2fcu, &a);
            f0 = (f64)rdf32((u32)param_1 + 0xf4u);
            c0gt = f1 > f0;
            r0 = ((f1 < f0) << 0x1fu) | (c0gt << 0x1eu) | ((c0gt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu);
            f2 = (f64)rdf32((u32)param_1 + 0xf0u);
            f1 = (f64)rdf32((u32)param_1 + 0xf4u);
            r0 = (r0 >> 0x1du) & 1u;
            f0 = (f64)rdf32((u32)param_1 + 0xf8u);
            wr32((u32)param_1 + 0x12cu, r0);
            wrf32d((u32)param_1 + 0x120u, f2);
            wrf32d((u32)param_1 + 0x124u, f1);
            wrf32d((u32)param_1 + 0x128u, f0);
        }
        f5 = (f64)rdf32(0x80572ab0u);
        f4 = (f64)rdf32(0x804890c8u);
        f3 = (f64)rdf32(0x804890ccu);
        wrf32d(0x817fdfc4u, f5);
        f0 = (f64)rdf32(0x80572ac4u);
        r5 = (u32)param_1 + 0xe4u;
        wrf32d(0x817fdfacu, f5);
        r6 = (u32)param_1 + 0xf0u;
        f2 = (f64)rdf32(0x804890d0u);
        wrf32d(0x817fdfccu, f5);
        f1 = (f64)rdf32(0x80572ac8u);
        wrf32d(0x817fdfa0u, f5);
        wrf32d(0x817fdf9cu, f5);
        wrf32d(0x817fdf98u, f5);
        wrf32d(0x817fdfd8u, f5);
        wrf32d(0x817fdfd4u, f5);
        wrf32d(0x817fdfd0u, f5);
        wr32(0x817fdf90u, 0u);
        wrf32d(0x817fdfa4u, f4);
        wrf32d(0x817fdfa8u, f3);
        wrf32d(0x817fdfacu, f2);
        wrf32d(0x817fdfc4u, f4);
        wrf32d(0x817fdfc8u, f3);
        wrf32d(0x817fdfccu, f2);
        wr32(0x817fdff4u, 0u);
        wr32(0x817fdfecu, 0u);
        wr32(0x817fdff0u, 0u);
        wrf32d(0x817fdf94u, f0);
        wrf32d(0x817fdfe8u, f5);
        wrf32d(0x817fdfe4u, f5);
        wrf32d(0x817fdfe0u, f5);
        wrf32d(0x817fdfdcu, f5);
        wrf32d(0x817fdfbcu, f5);
        wrf32d(0x817fdfb8u, f5);
        wrf32d(0x817fdfb4u, f5);
        wrf32d(0x817fdfb0u, f5);
        r7 = rd32((u32)param_1 + 0x2cu);
        if (r7 == 0u) {
            r7 = 0u;
        } else {
            r7 = rd32(r7 + 0xbcu);
        }
        a.f[0] = f1;
        a.r[0] = 0x8046d8c8u;
        a.r[1] = 0x817fdf90u;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = 2u;
        r3 = tc_call(0x8008c458u, &a);
        if (r3 == 0u) {
            if (rd32((u32)param_1 + 0x130u) != 0u) {
                r0 = rd32((u32)param_1 + 0xf4u);
                wr32(0x817fdf44u, rd32((u32)param_1 + 0xf0u));
                wr32(0x817fdf48u, r0);
                wr32(0x817fdf4cu, rd32((u32)param_1 + 0xf8u));
                a.r[0] = rd32((u32)param_1 + 0x130u);
                a.r[1] = 0x817fdf44u;
                (void)tc_call(0x8015811cu, &a);
            }
        } else {
            r7 = rd32(0x817fdf98u);
            wrf32d(0x817fdf9cu, (f64)rdf32((u32)param_1 + 0xe8u));
            r0 = rd32(0x817fdfa0u);
            r6 = rd32(0x817fdf9cu);
            wr32(0x817fdf74u, r7);
            wr32(0x817fdf78u, r6);
            wr32(0x817fdf7cu, r0);
            a.r[0] = 0x817fdf74u;
            a.r[1] = (u32)param_1 + 0xe4u;
            a.r[2] = 0x817fdf74u;
            (void)tc_call(0x802343a4u, &a);
            a.r[0] = 0x817fdf74u;
            f1 = tc_callf(0x80234440u, &a);
            wrf32d((u32)param_1 + 0x118u, f1);
            r0 = 0u;
            f1 = (f64)rdf32(0x80572ab0u);
            if (f1 == (f64)rdf32(0x817fdf80u) && f1 == (f64)rdf32(0x817fdf84u) && f1 == (f64)rdf32(0x817fdf88u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                a.r[0] = 0x817fdf80u;
                a.r[1] = 0x817fdf80u;
                (void)tc_call(0x802343e4u, &a);
            }
            a.f[0] = (f64)rdf32((u32)param_1 + 0x118u);
            a.r[0] = 0x817fdf80u;
            a.r[1] = 0x817fdf80u;
            (void)tc_call(0x802343c8u, &a);
            r0 = rd32((u32)param_1 + 0x100u);
            wr32(0x817fdf50u, rd32((u32)param_1 + 0xfcu));
            wr32(0x817fdf54u, r0);
            wr32(0x817fdf58u, rd32((u32)param_1 + 0x104u));
            a.r[0] = 0x817fdf50u;
            a.r[1] = 0x817fdf80u;
            a.r[2] = 0x817fdf50u;
            (void)tc_call(0x80234380u, &a);
            f2 = (f64)rdf32(0x817fdf50u);
            r0 = rd32((u32)param_1 + 0x44u);
            wrf32d((u32)param_1 + 0xf0u, f2);
            r0 = r0 & 7u;
            f1 = (f64)rdf32(0x817fdf54u);
            wrf32d((u32)param_1 + 0xf4u, f1);
            f0 = (f64)rdf32(0x817fdf58u);
            wrf32d((u32)param_1 + 0xf8u, f0);
            wrf32d((u32)param_1 + 8u, f2);
            wrf32d((u32)param_1 + 0xcu, f1);
            wrf32d((u32)param_1 + 0x10u, f0);
            if (r0 == 0u && rd32((u32)param_1 + 0x34u) == 3u) {
                a.f[0] = (f64)rdf32(0x80572ab4u);
                a.r[0] = 0x6bu;
                a.r[1] = 0x817fdf98u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                (void)tc_call(0x800d783cu, &a);
            }
            r3 = rd32((u32)param_1 + 0x130u);
            if (r3 != 0u) {
                a.r[0] = r3;
                (void)tc_call(0x80157e6cu, &a);
                wr32((u32)param_1 + 0x130u, 0u);
            }
        }
        f1 = (f64)rdf32(0x80572ac8u);
        f2 = (f64)(f32)px_fdiv((f64)(f32)px_fdiv((f64)rdf32((u32)param_1 + 0x118u), f1), f1);
        if (rd32((u32)param_1 + 0x3cu) != 0u) {
            f0 = (f64)rdf32(0x80572ab4u);
            wrf32d(0x817fdf6cu, f2);
            wrf32d(0x817fdf68u, f0);
            r3 = rd32(0x817fdf6cu);
            wrf32d(0x817fdf70u, f1);
            r0 = rd32(0x817fdf70u);
            wr32(0x817fdf38u, rd32(0x817fdf68u));
            wr32(0x817fdf3cu, r3);
            wr32(0x817fdf40u, r0);
            a.r[0] = rd32((u32)param_1 + 0x3cu);
            a.r[1] = 0x817fdf38u;
            (void)tc_call(0x80158040u, &a);
        }
    } else {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800a21f4u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8006f778u, &a);
    return;
}
