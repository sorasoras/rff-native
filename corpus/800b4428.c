#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800b4428(u32 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf10u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdfc4u, rd32(r3));
    wr32(0x817fdfc8u, r0);
    wr32(0x817fdfccu, rd32(r3 + 8u));
    a.r[0] = 0x817fdfc4u;
    a.r[1] = param_1 + 0xd00u;
    a.r[2] = 0x817fdfc4u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfc4u;
    f1 = tc_callf(0x80234440u, &a);
    r4 = tc_lastr4();
    f0 = rdf64(0x80572c68u);
    if (!((f1 > f0) || (f1 == f0))) {
        r3 = rd32(param_1 + 0xe88u);
        wr32(param_1 + 0xe88u, r3 ^ (r3 & 0x8000u));
    } else {
        r3 = rd32(param_1 + 0xe88u);
        wr32(param_1 + 0xe88u, r3 | (r3 ^ 0x8000u));
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
    f1 = tc_lastf();
    wrf32d(param_1 + 0xd00u, (f64)rdf32(r3));
    wrf32d(param_1 + 0xd04u, (f64)rdf32(r3 + 4u));
    wrf32d(param_1 + 0xd08u, (f64)rdf32(r3 + 8u));
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f3 = (f64)rdf32(param_1 + 0xd18u);
    wrf32d(param_1 + 0xcf4u, (f64)rdf32(r3));
    f2 = (f64)rdf32(param_1 + 0xd1cu);
    f1 = (f64)rdf32(param_1 + 0xd20u);
    wrf32d(param_1 + 0xcf8u, (f64)rdf32(r3 + 4u));
    f0 = (f64)rdf32(0x80572bf8u);
    wrf32d(param_1 + 0xcfcu, (f64)rdf32(r3 + 8u));
    wrf32d(param_1 + 0xd24u, f3);
    wrf32d(param_1 + 0xd28u, f2);
    wrf32d(param_1 + 0xd2cu, f1);
    wrf32d(0x817fdfb8u, f0);
    wrf32d(0x817fdfbcu, f0);
    wrf32d(0x817fdfc0u, f0);
    r3 = rd32(param_1 + 0xda4u);
    if (r3 == 0u) {
        r0 = 0xffffffffu;
    } else {
        r0 = rd32(r3 + 4u);
    }
    if (r0 == 0u) {
        f1 = (f64)rdf32(param_1 + 0xd34u);
        f0 = (f64)rdf32(param_1 + 0xd38u);
        wrf32d(param_1 + 0xd18u, (f64)rdf32(param_1 + 0xd30u));
        wrf32d(param_1 + 0xd1cu, f1);
        wrf32d(param_1 + 0xd20u, f0);
        wrf32d(param_1 + 0xd30u, (f64)rdf32(0x804890c8u));
        wrf32d(param_1 + 0xd34u, (f64)rdf32(0x804890ccu));
        wrf32d(param_1 + 0xd38u, (f64)rdf32(0x804890d0u));
    } else {
        r3 = rd32(param_1 + 0xf78u);
        if ((r3 & 0x80u) != 0x80u) {
            if ((r3 & 0x100u) != 0x100u) {
                r3 = tc_call(0x800b5164u, &a);
                if (r3 != 0u) {
                    r3 = param_1 + 0xd18u;
                    a.f[0] = (f64)rdf32(0x80572c78u);
                    a.r[0] = r3;
                    a.r[1] = r3;
                    (void)tc_call(0x802343c8u, &a);
                } else {
                    a.r[0] = 0x817fdf7cu;
                    a.r[1] = param_1 + 0xf5cu;
                    (void)tc_call(0x800eff0cu, &a);
                    f1 = (f64)rdf32(0x817fdf80u);
                    f0 = (f64)rdf32(0x817fdf84u);
                    wrf32d(0x817fdfb8u, (f64)rdf32(0x817fdf7cu));
                    wrf32d(0x817fdfbcu, f1);
                    wrf32d(0x817fdfc0u, f0);
                    if (((rd32(param_1 + 0xf78u) & 0x80000u) - 0x80000u) != 0u) {
                        a.r[0] = 0x817fdfb8u;
                        f1 = tc_callf(0x80234440u, &a);
                        if (!(f1 > (f64)rdf32(0x80572bfcu))) {
                            r3 = param_1 + 0xd18u;
                            a.f[0] = (f64)rdf32(0x80572c78u);
                            a.r[0] = r3;
                            a.r[1] = r3;
                            (void)tc_call(0x802343c8u, &a);
                        }
                    } else {
                        r6 = rd32(param_1 + 0xd18u);
                        r5 = rd32(param_1 + 0xd1cu);
                        r0 = rd32(param_1 + 0xd20u);
                        f1 = (f64)rdf32(param_1 + 0xfdcu);
                        wr32(0x817fdf64u, r6);
                        wr32(0x817fdf68u, r5);
                        wr32(0x817fdf6cu, r0);
                        wr32(0x817fdf70u, r6);
                        wr32(0x817fdf74u, r5);
                        wr32(0x817fdf78u, r0);
                        a.f[0] = f1;
                        a.r[0] = 0x817fdf70u;
                        a.r[1] = 0x817fdf70u;
                        (void)tc_call(0x802343c8u, &a);
                        wrf32d(param_1 + 0xd18u, (f64)rdf32(0x817fdf70u));
                        wrf32d(param_1 + 0xd1cu, (f64)rdf32(0x817fdf74u));
                        wrf32d(param_1 + 0xd20u, (f64)rdf32(0x817fdf78u));
                    }
                }
            } else {
                r3 = param_1 + 0xd18u;
                a.f[0] = (f64)rdf32(0x80572c74u);
                a.r[0] = r3;
                a.r[1] = r3;
                (void)tc_call(0x802343c8u, &a);
            }
        } else {
            r3 = param_1 + 0xd18u;
            a.f[0] = (f64)rdf32(0x80572c70u);
            a.r[0] = r3;
            a.r[1] = r3;
            (void)tc_call(0x802343c8u, &a);
        }
    }
    f1 = (f64)rdf32(param_1 + 0xd58u);
    r7 = rd32(0x817fdfb8u);
    r6 = rd32(0x817fdfbcu);
    c0eq = (f64)rdf32(0x80572bf8u) == f1;
    r5 = rd32(0x817fdfc0u);
    r4 = rd32(0x817fdfb8u);
    r3 = rd32(0x817fdfbcu);
    r0 = rd32(0x817fdfc0u);
    wr32(0x817fdf1cu, r7);
    wr32(0x817fdf20u, r6);
    wr32(0x817fdf24u, r5);
    wr32(0x817fdf34u, r4);
    wr32(0x817fdf38u, r3);
    wr32(0x817fdf3cu, r0);
    if (!c0eq) {
        f1 = (f64)(f32)px_fdiv((f64)rdf32(0x80572c00u), f1);
        a.f[0] = f1;
        a.r[0] = 0x817fdf34u;
        a.r[1] = 0x817fdf34u;
        (void)tc_call(0x802343c8u, &a);
        r3 = rd32(0x817fdf38u);
        r0 = rd32(0x817fdf3cu);
        wr32(0x817fdfacu, rd32(0x817fdf34u));
        wr32(0x817fdfb0u, r3);
        wr32(0x817fdfb4u, r0);
    } else {
        wr32(0x817fdfacu, r7);
        wr32(0x817fdfb0u, r6);
        wr32(0x817fdfb4u, r5);
    }
    r3 = param_1 + 0xd18u;
    a.r[0] = r3;
    a.r[1] = 0x817fdfacu;
    a.r[2] = r3;
    (void)tc_call(0x80234380u, &a);
    wrf32d(param_1 + 0xd1cu, (f64)rdf32(0x80572bf8u));
    a.r[0] = param_1 + 0xd18u;
    f1 = tc_callf(0x80234440u, &a);
    f31 = f1;
    a.r[0] = param_1;
    a.r[1] = 1u;
    r3 = tc_call(0x800b1048u, &a);
    r4 = tc_lastr4();
    if (r3 == 0u) {
        f30 = (f64)rdf32(param_1 + 0xd50u);
    } else {
        f30 = (f64)(f32)((f64)rdf32(param_1 + 0xd50u) * (f64)rdf32(0x80572c14u));
    }
    if (f31 > f30) {
        f1 = (f64)rdf32(0x80572bf8u);
        r0 = 0u;
        if (f1 == (f64)rdf32(param_1 + 0xd18u) && f1 == (f64)rdf32(param_1 + 0xd1cu) && f1 == (f64)rdf32(param_1 + 0xd20u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            r3 = param_1 + 0xd18u;
            a.r[0] = r3;
            a.r[1] = r3;
            (void)tc_call(0x802343e4u, &a);
        }
        r3 = param_1 + 0xd18u;
        a.f[0] = f30;
        a.r[0] = r3;
        a.r[1] = r3;
        (void)tc_call(0x802343c8u, &a);
        r4 = tc_lastr4();
    }
    if ((((u32)rd8(param_1 + 0x358u) >> 5u) & 1u) == 0u) {
        wr8(param_1 + 0x358u, (u8)((u32)rd8(param_1 + 0x358u) | 0x40u));
    } else {
        a.r[0] = param_1 + 0xf5cu;
        f1 = tc_callf(0x800f003cu, &a);
        if (!((f64)(f32)ppc_fabs(f1) < (f64)rdf32(0x80572bfcu))) {
            wrf32d(param_1 + 0xd40u, (f64)(f32)((f64)rdf32(param_1 + 0xd40u) + f1));
        } else {
            wrf32d(param_1 + 0xd40u, (f64)(f32)((f64)rdf32(param_1 + 0xd40u) * (f64)rdf32(0x80572c78u)));
        }
        wrf32d(param_1 + 0xcf8u, (f64)(f32)((f64)rdf32(param_1 + 0xcf8u) + (f64)rdf32(param_1 + 0xd40u)));
        a.r[0] = param_1;
        a.r[1] = param_1 + 0xcf4u;
        f1 = tc_callf(0x800b42e4u, &a);
        r4 = tc_lastr4();
        f0 = (f64)rdf32(param_1 + 0xcf8u);
        if (!((f0 < f1) || (f0 == f1))) {
            wr8(param_1 + 0x358u, (u8)((u32)rd8(param_1 + 0x358u) & 0xffffffbfu));
        } else {
            r0 = (u32)rd8(param_1 + 0x358u);
            wrf32d(param_1 + 0xcf8u, f1);
            r0 = r0 | 0x40u;
            wr8(param_1 + 0x358u, (u8)r0);
        }
    }
    r3 = rd32(param_1 + 0xe88u);
    if ((r3 & 0x2000u) == 0u) {
        if ((r3 & 0x800u) != 0u) {
            r3 = param_1 + 0xcf4u;
            a.r[0] = r3;
            a.r[1] = param_1 + 0xd18u;
            a.r[2] = r3;
            (void)tc_call(0x80234380u, &a);
        } else {
            f1 = (f64)rdf32(0x80572bf8u);
            f0 = (f64)rdf32(0x80572c00u);
            wrf32d(0x817fdfa0u, f1);
            wrf32d(0x817fdfa4u, f1);
            wrf32d(0x817fdfa8u, f0);
            f2 = (f64)rdf32(param_1 + 0xd20u);
            wrf32d(0x817fdf94u, (f64)rdf32(param_1 + 0xd18u));
            wrf32d(0x817fdf98u, f1);
            wrf32d(0x817fdf9cu, f2);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            f31 = f1;
            r3 = rd32(0x817fdfa4u);
            r0 = rd32(0x817fdfa8u);
            wr32(0x817fdf28u, rd32(0x817fdfa0u));
            wr32(0x817fdf2cu, r3);
            wr32(0x817fdf30u, r0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            f30 = (f64)(f32)f1;
            a.f[0] = f31;
            f1 = tc_callf(0x80262b10u, &a);
            f4 = (f64)(f32)f1;
            f1 = (f64)rdf32(0x817fdf30u);
            f3 = (f64)rdf32(0x817fdf28u);
            wrf32d(0x817fdfa0u, ppc_fmadds(f3, f30, (f64)(f32)(f1 * f4)));
            wrf32d(0x817fdfa8u, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f30)));
            a.r[0] = 0x817fdf94u;
            f1 = tc_callf(0x80234440u, &a);
            a.f[0] = f1;
            a.r[0] = 0x817fdfa0u;
            a.r[1] = 0x817fdfa0u;
            (void)tc_call(0x802343c8u, &a);
            r3 = param_1 + 0xcf4u;
            a.r[0] = r3;
            a.r[1] = 0x817fdfa0u;
            a.r[2] = r3;
            (void)tc_call(0x80234380u, &a);
            if ((((u32)rd8(param_1 + 0x358u) >> 5u) & 1u) != 0u) {
                wrf32d(param_1 + 0xcf8u, (f64)(f32)((f64)rdf32(param_1 + 0xcf8u) + (f64)rdf32(param_1 + 0xd1cu)));
            }
        }
    }
    if ((u32)rd8(param_1 + 0xd3cu) != 0u) {
        f2 = (f64)rdf32(param_1 + 0xd0cu);
        f1 = (f64)rdf32(param_1 + 0xd10u);
        f0 = (f64)rdf32(param_1 + 0xd14u);
        wr8(param_1 + 0xd3cu, 0u);
        wrf32d(param_1 + 0xcf4u, f2);
        wrf32d(param_1 + 0xcf8u, f1);
        wrf32d(param_1 + 0xcfcu, f0);
    }
    wrf32d(param_2, (f64)rdf32(param_1 + 0xcf4u));
    wrf32d(param_2 + 4u, (f64)rdf32(param_1 + 0xcf8u));
    wrf32d(param_2 + 8u, (f64)rdf32(param_1 + 0xcfcu));
    a.r[0] = param_1 + 0xd18u;
    f1 = tc_callf(0x80234440u, &a);
    if (!(f1 > rdf64(0x80572c68u))) {
        wrf32d(param_3, (f64)rdf32(param_1 + 0xd44u));
    } else {
        a.r[0] = param_1;
        a.r[1] = param_1 + 0xd18u;
        a.r[2] = 0u;
        f1 = tc_callf(0x800b4be0u, &a);
        wrf32d(param_3, f1);
        wrf32d(param_1 + 0xd44u, f1);
    }
    if ((f64)rdf32(param_1 + 0xd44u) == (f64)rdf32(param_1 + 0xd48u)) {
        r3 = rd32(param_1 + 0xe88u);
        wr32(param_1 + 0xe88u, r3 ^ (r3 & 0x20000u));
    } else {
        r3 = rd32(param_1 + 0xe88u);
        wr32(param_1 + 0xe88u, r3 | (r3 ^ 0x20000u));
    }
    if ((rd32(param_1 + 0xe88u) & 0x4000u) == 0u) {
        f1 = (f64)rdf32(param_1 + 0xd44u);
        if (!((f64)rdf32(0x80572c30u) < f1)) {
            f0 = (f64)rdf32(0x80572c34u);
            if ((f0 > f1) || (f0 == f1)) {
                f1 = (f64)(f32)((f64)rdf32(0x80572c1cu) + f1);
            }
        } else {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572c1cu));
        }
        wrf32d(param_1 + 0x14u, f1);
    }
    if ((rd32(param_1 + 0xe88u) & 0x8000u) == 0u) {
        wr32(param_1 + 0xd60u, rd32(param_1 + 0xd60u) + 1u);
    } else {
        wr32(param_1 + 0xd60u, 0u);
    }
    f2 = (f64)rdf32(param_1 + 0xcf4u);
    r4 = (u32)rd8(param_1 + 0x358u) & 0xffffff7fu;
    f1 = (f64)rdf32(param_1 + 0xcf8u);
    c0eq = rd32(param_1 + 0x166cu) == 0u;
    f0 = (f64)rdf32(param_1 + 0xcfcu);
    wr8(param_1 + 0x358u, (u8)r4);
    wr32(param_1 + 0x1468u, 0xffffffffu);
    wrf32d(param_1 + 0x84u, f2);
    wrf32d(param_1 + 0x88u, f1);
    wrf32d(param_1 + 0x8cu, f0);
    if (!c0eq) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x19cu), &a);
        wr32(0x817fdf18u, r3);
        r0 = rd32(param_1 + 0xcf8u);
        wr32(0x817fdf88u, rd32(param_1 + 0xcf4u));
        wr32(0x817fdf8cu, r0);
        wr32(0x817fdf90u, rd32(param_1 + 0xcfcu));
        a.r[0] = 0x817fdf18u;
        r3 = tc_call(0x80149868u, &a);
        a.r[0] = r3;
        r3 = tc_call(0x802550d4u, &a);
        if (r3 != 0u) {
            a.r[0] = 0x817fdf18u;
            r3 = tc_call(0x80149868u, &a);
            f1 = tc_lastf();
            a.r[0] = param_1;
            a.r[1] = 0x817fdf88u;
            a.r[2] = r3;
            a.r[3] = 0x804890c8u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x38u), &a);
        }
        r3 = rd32(0x817fdf8cu);
        r0 = rd32(0x817fdf90u);
        wr32(0x817fdf58u, rd32(0x817fdf88u));
        wr32(0x817fdf5cu, r3);
        wr32(0x817fdf60u, r0);
        a.r[0] = rd32(param_1 + 0x166cu);
        a.r[1] = 0x817fdf58u;
        f1 = tc_callf(0x8015811cu, &a);
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
        f0 = (f64)rdf32(0x80572bf8u);
        wrf32d(0x817fdf44u, f1);
        wrf32d(0x817fdf40u, f0);
        r3 = rd32(0x817fdf44u);
        wrf32d(0x817fdf48u, f0);
        r0 = rd32(0x817fdf48u);
        wr32(0x817fdf4cu, rd32(0x817fdf40u));
        wr32(0x817fdf50u, r3);
        wr32(0x817fdf54u, r0);
        a.r[0] = rd32(param_1 + 0x166cu);
        a.r[1] = 0x817fdf4cu;
        (void)tc_call(0x801582b4u, &a);
    }
    wrf32d(param_1 + 0xd48u, (f64)rdf32(param_1 + 0xd44u));
    return;
}
