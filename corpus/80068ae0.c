#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_80068ae0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf30u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(param_4, 8u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f1 = (f64)rdf32(0x805725d8u);
    wrf32d(param_3, (f64)rdf32(r3));
    wrf32d(param_3 + 4u, (f64)rdf32(r3 + 4u));
    wrf32d(param_3 + 8u, (f64)rdf32(r3 + 8u));
    if ((f64)rdf32(param_2) != f1 || (f64)rdf32(param_2 + 8u) != f1) {
        a.r[0] = param_2;
        f1 = tc_callf(0x80234440u, &a);
        f31 = f1;
        if ((f64)rdf32(0x805725d8u) != f1) {
            f1 = (f64)(f32)px_fdiv((f64)rdf32(0x805725e0u), f1);
            a.f[0] = f1;
            a.r[0] = param_2;
            a.r[1] = param_2;
            (void)tc_call(0x802343c8u, &a);
        }
        f3 = (f64)rdf32(0x805725d8u);
        r0 = rd32(0x805710e0u) * 0x6d0u;
        f4 = (f64)rdf32(0x805725e0u);
        wrf32d(0x817fdf70u, f3);
        r5 = r0 - 0x7fc2e738u;
        f0 = (f64)rdf32(r5 + 0x1a4u);
        wrf32d(0x817fdf6cu, f3);
        f1 = (f64)rdf32(r5 + 0x1a0u);
        wrf32d(0x817fdf68u, f3);
        f2 = (f64)rdf32(r5 + 0x19cu);
        wrf32d(0x817fdfa8u, f4);
        wrf32d(0x817fdfb8u, f3);
        wrf32d(0x817fdfc8u, f3);
        wrf32d(0x817fdfacu, f3);
        wrf32d(0x817fdfbcu, f4);
        wrf32d(0x817fdfccu, f3);
        wrf32d(0x817fdfb0u, f3);
        wrf32d(0x817fdfc0u, f3);
        wrf32d(0x817fdfd0u, f4);
        wrf32d(0x817fdfb4u, f3);
        wrf32d(0x817fdfc4u, f3);
        wrf32d(0x817fdfd4u, f3);
        wrf32d(0x817fdf68u, f2);
        wrf32d(0x817fdf6cu, f1);
        wrf32d(0x817fdf70u, f0);
        wrf32d(0x817fdf4cu, f3);
        wrf32d(0x817fdf48u, f3);
        wrf32d(0x817fdf44u, f3);
        a.r[0] = 0x817fdf68u;
        a.r[1] = 0x817fdf44u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdf44u);
        a.f[1] = (f64)rdf32(0x817fdf4cu);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if (!((f64)rdf32(0x805725e4u) < f1)) {
            a.f[0] = (f64)rdf32(0x817fdf44u);
            a.f[1] = (f64)rdf32(0x817fdf4cu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805725ecu);
            if (!((f0 > f1) || (f0 == f1))) {
                a.f[0] = (f64)rdf32(0x817fdf44u);
                a.f[1] = (f64)rdf32(0x817fdf4cu);
                f1 = tc_callf(0x80262c68u, &a);
                f0 = (f64)(f32)f1;
            } else {
                a.f[0] = (f64)rdf32(0x817fdf44u);
                a.f[1] = (f64)rdf32(0x817fdf4cu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
            }
        } else {
            a.f[0] = (f64)rdf32(0x817fdf44u);
            a.f[1] = (f64)rdf32(0x817fdf4cu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        f2 = (f64)rdf32(0x805725e0u);
        f1 = -f0;
        f0 = (f64)rdf32(0x805725d8u);
        wrf32d(0x817fdf78u, f2);
        wrf32d(0x817fdf88u, f0);
        wrf32d(0x817fdf98u, f0);
        wrf32d(0x817fdf7cu, f0);
        wrf32d(0x817fdf8cu, f2);
        wrf32d(0x817fdf9cu, f0);
        wrf32d(0x817fdf80u, f0);
        wrf32d(0x817fdf90u, f0);
        wrf32d(0x817fdfa0u, f2);
        wrf32d(0x817fdf84u, f0);
        wrf32d(0x817fdf94u, f0);
        wrf32d(0x817fdfa4u, f0);
        a.f[0] = f1;
        a.r[0] = 0x817fdf78u;
        a.r[1] = 0x79u;
        (void)tc_call(0x80233a2cu, &a);
        a.r[0] = 0x817fdf78u;
        a.r[1] = 0x817fdfa8u;
        a.r[2] = 0x817fdfa8u;
        (void)tc_call(0x802337a0u, &a);
        a.r[0] = 0x817fdfa8u;
        a.r[1] = param_2;
        a.r[2] = param_2;
        (void)tc_call(0x8023411cu, &a);
        a.r[0] = param_1 + 0x25cu;
        f1 = tc_callf(0x80234440u, &a);
        f0 = (f64)rdf32(0x80572624u);
        f1 = (f64)(f32)((f64)rdf32(0x805725e0u) + f1);
        f1 = (f64)(f32)(f1 * f31);
        if (!(f1 < f0)) {
            f1 = f0;
        }
        r5 = rd32(param_2);
        r0 = rd32(param_2 + 4u);
        wrf32d(param_2 + 8u, (f64)(f32)((f64)rdf32(param_2 + 8u) * (f64)rdf32(0x80572600u)));
        wr32(0x817fdf5cu, r5);
        wr32(0x817fdf60u, r0);
        wr32(0x817fdf64u, rd32(param_2 + 8u));
        a.f[0] = f1;
        a.r[0] = 0x817fdf5cu;
        a.r[1] = 0x817fdf5cu;
        f1 = tc_callf(0x802343c8u, &a);
        wrf32d(param_1 + 0x25cu, (f64)rdf32(0x817fdf5cu));
        wrf32d(param_1 + 0x260u, (f64)rdf32(0x817fdf60u));
        wrf32d(param_1 + 0x264u, (f64)rdf32(0x817fdf64u));
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdf50u, rd32(r3));
        wr32(0x817fdf54u, r0);
        wr32(0x817fdf58u, rd32(r3 + 8u));
        a.r[0] = 0x817fdf50u;
        a.r[1] = param_1 + 0x25cu;
        a.r[2] = 0x817fdf50u;
        f1 = tc_callf(0x80234380u, &a);
        wrf32d(param_3, (f64)rdf32(0x817fdf50u));
        wrf32d(param_3 + 4u, (f64)rdf32(0x817fdf54u));
        wrf32d(param_3 + 8u, (f64)rdf32(0x817fdf58u));
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
        f0 = (f64)rdf32(0x805725d8u);
        f31 = f1;
        wrf32d(0x817fdf40u, f0);
        wrf32d(0x817fdf3cu, f0);
        wrf32d(0x817fdf38u, f0);
        a.r[0] = param_1 + 0x25cu;
        a.r[1] = 0x817fdf38u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdf38u);
        a.f[1] = (f64)rdf32(0x817fdf40u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if (!((f64)rdf32(0x805725e4u) < f1)) {
            a.f[0] = (f64)rdf32(0x817fdf38u);
            a.f[1] = (f64)rdf32(0x817fdf40u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x805725ecu);
            if (!((f0 > f1) || (f0 == f1))) {
                a.f[0] = (f64)rdf32(0x817fdf38u);
                a.f[1] = (f64)rdf32(0x817fdf40u);
                f1 = tc_callf(0x80262c68u, &a);
                r4 = tc_lastr4();
                f1 = (f64)(f32)f1;
            } else {
                a.f[0] = (f64)rdf32(0x817fdf38u);
                a.f[1] = (f64)rdf32(0x817fdf40u);
                f1 = tc_callf(0x80262c68u, &a);
                r4 = tc_lastr4();
                f1 = (f64)(f32)f1;
                f1 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
            }
        } else {
            a.f[0] = (f64)rdf32(0x817fdf38u);
            a.f[1] = (f64)rdf32(0x817fdf40u);
            f1 = tc_callf(0x80262c68u, &a);
            r4 = tc_lastr4();
            f1 = (f64)(f32)f1;
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        if (!((f64)rdf32(0x805725e4u) < f1)) {
            f0 = (f64)rdf32(0x805725ecu);
            if ((f0 > f1) || (f0 == f1)) {
                f1 = (f64)(f32)((f64)rdf32(0x805725e8u) + f1);
            }
        } else {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        f1 = (f64)(f32)(f1 - f31);
        if (!(f1 > (f64)rdf32(0x805725e4u))) {
            if (f1 < (f64)rdf32(0x805725ecu)) {
                f1 = (f64)(f32)(f1 + (f64)rdf32(0x805725e8u));
            }
        } else {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x805725e8u));
        }
        if (f1 > (f64)rdf32(0x80572628u)) {
            f0 = (f64)rdf32(0x8057262cu);
            if ((f1 < f0) || (f1 == f0)) {
                wr32(param_4, 3u);
                return;
            }
        }
        if (f1 > (f64)rdf32(0x8057262cu)) {
            f0 = (f64)rdf32(0x80572630u);
            if ((f1 < f0) || (f1 == f0)) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                wrf32d(param_3, (f64)rdf32(r3));
                wrf32d(param_3 + 4u, (f64)rdf32(r3 + 4u));
                wrf32d(param_3 + 8u, (f64)rdf32(r3 + 8u));
                wr32(param_4, 2u);
                return;
            }
        }
        if (f1 > (f64)rdf32(0x80572630u)) {
            f0 = (f64)rdf32(0x80572634u);
            if ((f1 < f0) || (f1 == f0)) {
                wr32(param_4, 1u);
                return;
            }
        }
        if (f1 > (f64)rdf32(0x80572634u)) {
            f0 = (f64)rdf32(0x80572638u);
            if ((f1 < f0) || (f1 == f0)) {
                wr32(param_4, 0u);
                return;
            }
        }
        if (f1 > (f64)rdf32(0x80572638u)) {
            f0 = (f64)rdf32(0x8057263cu);
            if ((f1 < f0) || (f1 == f0)) {
                wr32(param_4, 7u);
                return;
            }
        }
        if (f1 > (f64)rdf32(0x8057263cu)) {
            f0 = (f64)rdf32(0x80572640u);
            if ((f1 < f0) || (f1 == f0)) {
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                wrf32d(param_3, (f64)rdf32(r3));
                wrf32d(param_3 + 4u, (f64)rdf32(r3 + 4u));
                wrf32d(param_3 + 8u, (f64)rdf32(r3 + 8u));
                wr32(param_4, 6u);
                return;
            }
        }
        if (f1 > (f64)rdf32(0x80572640u)) {
            f0 = (f64)rdf32(0x80572644u);
            if ((f1 < f0) || (f1 == f0)) {
                wr32(param_4, 5u);
                return;
            }
        }
        wr32(param_4, 4u);
    }
    return;
}
