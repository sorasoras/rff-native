#include "tc_rt.h"

void fn_80178664(u32 param_r3)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r23 = 0, r24 = 0, r25 = 0, r27 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r4 = rd32(param_r3 + 0x16cu);
    if ((s32)r4 > 0) {
        wr32(param_r3 + 0x16cu, r4 - 1u);
    } else if ((u32)rd8(param_r3 + 0x1b8u) == 0u) {
        r3 = param_r3 + 0xf4u;
        a.r[0] = r3;
        a.r[1] = param_r3 + 0x10cu;
        a.r[2] = r3;
        (void)tc_call(0x80234380u, &a);
        r3 = param_r3 + 0x10cu;
        a.f[0] = (f64)rdf32(param_r3 + 0x13cu);
        a.r[0] = r3;
        a.r[1] = r3;
        (void)tc_call(0x802343c8u, &a);
        r3 = param_r3 + 0x10cu;
        a.r[0] = r3;
        a.r[1] = param_r3 + 0x118u;
        a.r[2] = r3;
        (void)tc_call(0x80234380u, &a);
        a.r[0] = param_r3 + 0x10cu;
        f1 = tc_callf(0x80234440u, &a);
        if (f1 > (f64)rdf32(param_r3 + 0x174u)) {
            f1 = (f64)rdf32(0x80574fa4u);
            r0 = 0u;
            if (f1 == (f64)rdf32(param_r3 + 0x10cu) && f1 == (f64)rdf32(param_r3 + 0x110u) && f1 == (f64)rdf32(param_r3 + 0x114u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                r3 = param_r3 + 0x10cu;
                a.r[0] = r3;
                a.r[1] = r3;
                (void)tc_call(0x802343e4u, &a);
            }
            r3 = param_r3 + 0x10cu;
            a.f[0] = (f64)rdf32(param_r3 + 0x174u);
            a.r[0] = r3;
            a.r[1] = r3;
            (void)tc_call(0x802343c8u, &a);
        }
    }
    r0 = rd32(param_r3 + 0x104u);
    wr32(0x817fdf58u, rd32(param_r3 + 0x100u));
    wr32(0x817fdf5cu, r0);
    wr32(0x817fdf60u, rd32(param_r3 + 0x108u));
    a.r[0] = 0x817fdf58u;
    a.r[1] = param_r3 + 0xf4u;
    a.r[2] = 0x817fdf58u;
    (void)tc_call(0x80234380u, &a);
    if ((u32)rd8(param_r3 + 0x1a6u) != 0u) {
        if (rd32(param_r3 + 0x1a8u) == 0u) {
            r3 = rd32(param_r3 + 0x160u);
            if (r3 != 0xffffffffu) {
                a.f[0] = (f64)rdf32(0x80574fa8u);
                a.r[0] = r3;
                a.r[1] = param_r3 + 0x1acu;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d783cu, &a);
                r25 = r3;
                if (r3 != 0u) {
                    a.r[1] = 0xffffffffu;
                    r3 = tc_call(0x8010b43cu, &a);
                    wr32(r25 + 0x20u, r3);
                    wr32(r25 + 0x24u, 0u);
                }
            }
        }
        r0 = rd32(param_r3 + 0x1a8u) + 1u;
        wr32(param_r3 + 0x1a8u, r0);
        if ((s32)r0 >= 30) {
            wr32(param_r3 + 0x1a8u, 0u);
        }
    } else {
        a.f[0] = (f64)rdf32(0x817fdf58u);
        a.f[1] = (f64)rdf32(0x817fdf60u);
        a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        f1 = tc_callf(0x80089fc8u, &a);
        f0 = (f64)rdf32(0x817fdf5cu);
        if (!((f1 > f0) || (f1 == f0))) {
            wr8(param_r3 + 0x1a6u, 0u);
            wr32(param_r3 + 0x1a8u, 0u);
        } else if ((u32)rd8(param_r3 + 0x1a6u) == 0u) {
            wr8(param_r3 + 0x1a6u, 1u);
            wrf32d(param_r3 + 0x1acu, (f64)rdf32(0x817fdf58u));
            wrf32d(param_r3 + 0x1b0u, (f64)rdf32(0x817fdf5cu));
            wrf32d(param_r3 + 0x1b4u, (f64)rdf32(0x817fdf60u));
            wr32(param_r3 + 0x1a8u, 0u);
        }
    }
    r24 = param_r3;
    r23 = param_r3 + 0x1c8u;
    r31 = 0u;
    for (;;) {
        r27 = param_r3 + r31;
        if ((u32)rd8(r27 + 0x1b8u) == 0u) {
            fl_ = 2u;
            break;
        }
        if (rd32(r24 + 0x1bcu) == 0u) {
            r3 = rd32(param_r3 + 0x160u);
            if (r3 != 0xffffffffu) {
                a.f[0] = (f64)rdf32(0x80574fa8u);
                a.r[0] = r3;
                a.r[1] = r23;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d783cu, &a);
                r27 = r3;
                if (r3 != 0u) {
                    a.r[1] = 0xffffffffu;
                    r3 = tc_call(0x8010b43cu, &a);
                    wr32(r27 + 0x20u, r3);
                    wr32(r27 + 0x24u, 0u);
                }
            }
        }
        r0 = rd32(r24 + 0x1bcu) + 1u;
        wr32(r24 + 0x1bcu, r0);
        if ((s32)r0 < 5) {
            fl_ = 1u;
            break;
        }
        r31 = r31 + 1u;
        r23 = r23 + 0xcu;
        r24 = r24 + 4u;
        if ((s32)r31 >= 3) {
            fl_ = 1u;
            break;
        }
    }
    do {
        if (fl_ == 2u) {
            fl_ = 0u;
        } else if (fl_ == 1u) {
            fl_ = 0u;
            break;
        }
        f4 = (f64)rdf32(0x80574fa4u);
        f3 = (f64)rdf32(0x804890c8u);
        f2 = (f64)rdf32(0x804890ccu);
        wrf32d(0x817fdf9cu, f4);
        f0 = (f64)rdf32(0x80574fb8u);
        f1 = (f64)rdf32(0x804890d0u);
        wrf32d(0x817fdf84u, f4);
        wrf32d(0x817fdfa4u, f4);
        wrf32d(0x817fdf78u, f4);
        wrf32d(0x817fdf74u, f4);
        wrf32d(0x817fdf70u, f4);
        wrf32d(0x817fdfb0u, f4);
        wrf32d(0x817fdfacu, f4);
        wrf32d(0x817fdfa8u, f4);
        wr32(0x817fdf68u, 0u);
        wrf32d(0x817fdf7cu, f3);
        wrf32d(0x817fdf80u, f2);
        wrf32d(0x817fdf84u, f1);
        wrf32d(0x817fdf9cu, f3);
        wrf32d(0x817fdfa0u, f2);
        wrf32d(0x817fdfa4u, f1);
        wr32(0x817fdfccu, 0u);
        wr32(0x817fdfc4u, 0u);
        wr32(0x817fdfc8u, 0u);
        wrf32d(0x817fdf6cu, f0);
        wrf32d(0x817fdfc0u, f4);
        wrf32d(0x817fdfbcu, f4);
        wrf32d(0x817fdfb8u, f4);
        wrf32d(0x817fdfb4u, f4);
        wrf32d(0x817fdf94u, f4);
        wrf32d(0x817fdf90u, f4);
        wrf32d(0x817fdf8cu, f4);
        wrf32d(0x817fdf88u, f4);
        a.f[0] = (f64)rdf32(param_r3 + 0x134u);
        a.r[0] = 0x8046d8c8u;
        a.r[1] = 0x817fdf68u;
        a.r[2] = 0x817fdf58u;
        a.r[3] = param_r3 + 0x100u;
        a.r[4] = 0u;
        a.r[5] = 0xffffu;
        r3 = tc_call(0x8008c458u, &a);
        if (r3 != 0u) {
            wr8(r27 + 0x1b8u, 1u);
            r4 = param_r3 + (r31 * 0xcu);
            wrf32d(r4 + 0x1c8u, (f64)rdf32(0x817fdf70u));
            wrf32d(r4 + 0x1ccu, (f64)rdf32(0x817fdf74u));
            wrf32d(r4 + 0x1d0u, (f64)rdf32(0x817fdf78u));
            wr32(param_r3 + ((r31 << 2u) & 0xfffffffcu) + 0x1bcu, 0u);
        }
    } while (0);
    wrf32d(param_r3 + 8u, (f64)rdf32(0x817fdf58u));
    wrf32d(param_r3 + 0xcu, (f64)rdf32(0x817fdf5cu));
    wrf32d(param_r3 + 0x10u, (f64)rdf32(0x817fdf60u));
    return;
}
