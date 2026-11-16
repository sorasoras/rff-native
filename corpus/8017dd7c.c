#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8017dd7c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r4 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf10u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    r7 = rd32(param_3);
    wr32(0x817fdfecu, 0u);
    r6 = rd32(param_3 + 4u);
    wr32(0x817fdfe8u, 0u);
    r0 = rd32(param_3 + 8u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdf3cu, r7);
    wr32(0x817fdf40u, r6);
    wr32(0x817fdf44u, r0);
    a.r[0] = 0x817fdf3cu;
    a.r[1] = param_2;
    a.r[2] = 0x817fdf3cu;
    (void)tc_call(0x802343a4u, &a);
    f1 = (f64)rdf32(0x80575048u);
    r0 = 0u;
    f0 = (f64)rdf32(0x817fdf3cu);
    wrf32d(0x817fdf40u, f1);
    if (f1 == f0 && f1 == f1 && f1 == (f64)rdf32(0x817fdf44u)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fdf3cu;
        a.r[1] = 0x817fdf3cu;
        (void)tc_call(0x802343e4u, &a);
    }
    f0 = (f64)rdf32(0x80575048u);
    wrf32d(0x817fdf20u, f0);
    wrf32d(0x817fdf1cu, f0);
    wrf32d(0x817fdf18u, f0);
    a.r[0] = 0x80489110u;
    a.r[1] = 0x817fdf18u;
    (void)tc_call(0x802343e4u, &a);
    a.f[0] = (f64)rdf32(0x817fdf18u);
    a.f[1] = (f64)rdf32(0x817fdf20u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if (!((f64)rdf32(0x8057504cu) < f1)) {
        a.f[0] = (f64)rdf32(0x817fdf18u);
        a.f[1] = (f64)rdf32(0x817fdf20u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x80575054u);
        if (!((f0 > f1) || (f0 == f1))) {
            a.f[0] = (f64)rdf32(0x817fdf18u);
            a.f[1] = (f64)rdf32(0x817fdf20u);
            f1 = tc_callf(0x80262c68u, &a);
            f31 = (f64)(f32)f1;
        } else {
            a.f[0] = (f64)rdf32(0x817fdf18u);
            a.f[1] = (f64)rdf32(0x817fdf20u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f31 = (f64)(f32)((f64)rdf32(0x80575050u) + f1);
        }
    } else {
        a.f[0] = (f64)rdf32(0x817fdf18u);
        a.f[1] = (f64)rdf32(0x817fdf20u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f31 = (f64)(f32)(f1 - (f64)rdf32(0x80575050u));
    }
    f0 = (f64)rdf32(0x80575048u);
    wrf32d(0x817fdf2cu, f0);
    wrf32d(0x817fdf28u, f0);
    wrf32d(0x817fdf24u, f0);
    a.r[0] = 0x817fdf3cu;
    a.r[1] = 0x817fdf24u;
    (void)tc_call(0x802343e4u, &a);
    a.f[0] = (f64)rdf32(0x817fdf24u);
    a.f[1] = (f64)rdf32(0x817fdf2cu);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if (!((f64)rdf32(0x8057504cu) < f1)) {
        a.f[0] = (f64)rdf32(0x817fdf24u);
        a.f[1] = (f64)rdf32(0x817fdf2cu);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x80575054u);
        if (!((f0 > f1) || (f0 == f1))) {
            a.f[0] = (f64)rdf32(0x817fdf24u);
            a.f[1] = (f64)rdf32(0x817fdf2cu);
            f1 = tc_callf(0x80262c68u, &a);
            f3 = (f64)(f32)f1;
        } else {
            a.f[0] = (f64)rdf32(0x817fdf24u);
            a.f[1] = (f64)rdf32(0x817fdf2cu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)((f64)rdf32(0x80575050u) + f1);
        }
    } else {
        a.f[0] = (f64)rdf32(0x817fdf24u);
        a.f[1] = (f64)rdf32(0x817fdf2cu);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f3 = (f64)(f32)(f1 - (f64)rdf32(0x80575050u));
    }
    if (!((f64)rdf32(0x8057504cu) < f31)) {
        f0 = (f64)rdf32(0x80575054u);
        if (!((f0 > f31) || (f0 == f31))) {
            f0 = f31;
        } else {
            f0 = (f64)(f32)((f64)rdf32(0x80575050u) + f31);
        }
    } else {
        f0 = (f64)(f32)(f31 - (f64)rdf32(0x80575050u));
    }
    f1 = (f64)(f32)(f0 - f3);
    if (!(f1 > (f64)rdf32(0x8057504cu))) {
        if (f1 < (f64)rdf32(0x80575054u)) {
            f1 = (f64)(f32)(f1 + (f64)rdf32(0x80575050u));
        }
    } else {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80575050u));
    }
    f0 = (f64)rdf32(0x8057504cu);
    if (!(f0 < f1)) {
        if (!(f0 < f31)) {
            f0 = (f64)rdf32(0x80575054u);
            if (!((f0 > f31) || (f0 == f31))) {
                f0 = f31;
            } else {
                f0 = (f64)(f32)((f64)rdf32(0x80575050u) + f31);
            }
        } else {
            f0 = (f64)(f32)(f31 - (f64)rdf32(0x80575050u));
        }
        f2 = (f64)(f32)(f0 - f3);
        if (!(f2 > (f64)rdf32(0x8057504cu))) {
            if (f2 < (f64)rdf32(0x80575054u)) {
                f2 = (f64)(f32)(f2 + (f64)rdf32(0x80575050u));
            }
        } else {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x80575050u));
        }
        f1 = (f64)rdf32(0x80575054u);
        if (!((f1 > f2) || (f1 == f2))) {
            if (!((f64)rdf32(0x8057504cu) < f31)) {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x80575050u) + f31);
                }
            } else {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80575050u));
            }
            f31 = (f64)(f32)(f31 - f3);
            if (!(f31 > (f64)rdf32(0x8057504cu))) {
                if (f31 < (f64)rdf32(0x80575054u)) {
                    f31 = (f64)(f32)(f31 + (f64)rdf32(0x80575050u));
                }
            } else {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80575050u));
            }
        } else {
            if (!((f64)rdf32(0x8057504cu) < f31)) {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x80575050u) + f31);
                }
            } else {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80575050u));
            }
            f1 = (f64)(f32)(f31 - f3);
            if (!(f1 > (f64)rdf32(0x8057504cu))) {
                if (f1 < (f64)rdf32(0x80575054u)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x80575050u));
                }
            } else {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80575050u));
            }
            f31 = (f64)(f32)((f64)rdf32(0x80575050u) + f1);
        }
    } else {
        if (!(f0 < f31)) {
            f0 = (f64)rdf32(0x80575054u);
            if ((f0 > f31) || (f0 == f31)) {
                f31 = (f64)(f32)((f64)rdf32(0x80575050u) + f31);
            }
        } else {
            f31 = (f64)(f32)(f31 - (f64)rdf32(0x80575050u));
        }
        f1 = (f64)(f32)(f31 - f3);
        if (!(f1 > (f64)rdf32(0x8057504cu))) {
            if (f1 < (f64)rdf32(0x80575054u)) {
                f1 = (f64)(f32)(f1 + (f64)rdf32(0x80575050u));
            }
        } else {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80575050u));
        }
        f31 = (f64)(f32)(f1 - (f64)rdf32(0x80575050u));
    }
    f0 = (f64)rdf32(0x80575048u);
    f2 = (f64)rdf32(0x80575058u);
    wrf32d(param_1 + 0x40u, f0);
    wrf32d(param_1 + 0x30u, f2);
    wrf32d(param_1 + 0x50u, f0);
    wrf32d(param_1 + 0x34u, f0);
    wrf32d(param_1 + 0x44u, f2);
    wrf32d(param_1 + 0x54u, f0);
    wrf32d(param_1 + 0x38u, f0);
    wrf32d(param_1 + 0x48u, f0);
    wrf32d(param_1 + 0x58u, f2);
    wrf32d(param_1 + 0x3cu, f0);
    wrf32d(param_1 + 0x4cu, f0);
    wrf32d(param_1 + 0x5cu, f0);
    wrf32d(0x817fdfa8u, f2);
    wrf32d(0x817fdfb8u, f0);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfacu, f0);
    wrf32d(0x817fdfbcu, f2);
    wrf32d(0x817fdfccu, f0);
    wrf32d(0x817fdfb0u, f0);
    wrf32d(0x817fdfc0u, f0);
    wrf32d(0x817fdfd0u, f2);
    wrf32d(0x817fdfb4u, f0);
    wrf32d(0x817fdfc4u, f0);
    wrf32d(0x817fdfd4u, f0);
    a.f[0] = f31;
    a.r[0] = 0x817fdfa8u;
    a.r[1] = 0x79u;
    (void)tc_call(0x80233a2cu, &a);
    r4 = param_1 + 0x30u;
    a.r[0] = 0x817fdfa8u;
    a.r[1] = r4;
    a.r[2] = r4;
    (void)tc_call(0x802337a0u, &a);
    r7 = rd32(param_3);
    wrf32d(param_1, (f64)rdf32(0x804890c8u));
    r6 = rd32(param_3 + 4u);
    r0 = rd32(param_3 + 8u);
    wrf32d(param_1 + 4u, (f64)rdf32(0x804890ccu));
    wrf32d(param_1 + 8u, (f64)rdf32(0x804890d0u));
    wr32(0x817fdf30u, r7);
    wr32(0x817fdf34u, r6);
    wr32(0x817fdf38u, r0);
    a.r[0] = 0x817fdf30u;
    a.r[1] = param_2;
    a.r[2] = 0x817fdf30u;
    (void)tc_call(0x802343a4u, &a);
    r4 = param_1 + 0x24u;
    wrf32d(param_1 + 0x24u, (f64)rdf32(0x817fdf30u));
    wrf32d(param_1 + 0x28u, (f64)rdf32(0x817fdf34u));
    wrf32d(param_1 + 0x2cu, (f64)rdf32(0x817fdf38u));
    a.r[0] = param_1 + 0x30u;
    a.r[1] = r4;
    a.r[2] = r4;
    (void)tc_call(0x8023411cu, &a);
    f3 = (f64)rdf32(0x8057505cu);
    f4 = (f64)(f32)((f64)rdf32(param_2 + 4u) - (f64)rdf32(param_3 + 4u));
    f0 = (f64)(f32)((f64)rdf32(0x80575064u) * (f64)rdf32(param_1 + 0x28u));
    wrf32d(param_1 + 0xcu, (f64)(f32)px_fdiv((f64)rdf32(param_1 + 0x24u), (f64)rdf32(0x80575060u)));
    f5 = (f64)(f32)ppc_fabs(f0);
    f6 = (f64)(f32)(f3 + (f64)(f32)ppc_fabs(f4));
    if (f6 < f5) {
        f5 = f6;
    }
    f4 = (f64)rdf32(0x80575048u);
    f1 = (f64)rdf32(0x80575068u);
    f0 = (f64)rdf32(param_1 + 0x28u);
    f2 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80575064u) * (f64)rdf32(param_1 + 0x24u)), (f64)rdf32(0x80575060u));
    wrf32d(param_1 + 0x10u, f5);
    wrf32d(param_1 + 0x14u, f4);
    f0 = (f64)(f32)(f1 * f0);
    wrf32d(param_1 + 0x18u, f2);
    f0 = ppc_fabs(f0);
    f0 = (f64)(f32)f0;
    if (!(f6 < f0)) {
        f6 = f0;
    }
    f2 = (f64)rdf32(0x80575048u);
    f0 = (f64)rdf32(0x80575058u);
    wrf32d(param_1 + 0x1cu, f6);
    wrf32d(param_1 + 0x20u, f2);
    wrf32d(param_1 + 0x30u, f0);
    wrf32d(param_1 + 0x40u, f2);
    wrf32d(param_1 + 0x50u, f2);
    wrf32d(param_1 + 0x34u, f2);
    wrf32d(param_1 + 0x44u, f0);
    wrf32d(param_1 + 0x54u, f2);
    wrf32d(param_1 + 0x38u, f2);
    wrf32d(param_1 + 0x48u, f2);
    wrf32d(param_1 + 0x58u, f0);
    wrf32d(param_1 + 0x3cu, f2);
    wrf32d(param_1 + 0x4cu, f2);
    wrf32d(param_1 + 0x5cu, f2);
    wrf32d(0x817fdf78u, f0);
    wrf32d(0x817fdf88u, f2);
    wrf32d(0x817fdf98u, f2);
    wrf32d(0x817fdf7cu, f2);
    wrf32d(0x817fdf8cu, f0);
    wrf32d(0x817fdf9cu, f2);
    wrf32d(0x817fdf80u, f2);
    wrf32d(0x817fdf90u, f2);
    wrf32d(0x817fdfa0u, f0);
    wrf32d(0x817fdf84u, f2);
    wrf32d(0x817fdf94u, f2);
    wrf32d(0x817fdfa4u, f2);
    a.f[0] = -f31;
    a.r[0] = 0x817fdf78u;
    a.r[1] = 0x79u;
    (void)tc_call(0x80233a2cu, &a);
    r4 = param_1 + 0x30u;
    a.r[0] = 0x817fdf78u;
    a.r[1] = r4;
    a.r[2] = r4;
    (void)tc_call(0x802337a0u, &a);
    f3 = (f64)rdf32(0x80575048u);
    r4 = param_1 + 0x30u;
    f4 = (f64)rdf32(0x80575058u);
    wrf32d(0x817fdf54u, f3);
    f2 = (f64)rdf32(param_2);
    wrf32d(0x817fdf64u, f3);
    f1 = (f64)rdf32(param_2 + 4u);
    wrf32d(0x817fdf74u, f3);
    f0 = (f64)rdf32(param_2 + 8u);
    wrf32d(0x817fdf48u, f4);
    wrf32d(0x817fdf58u, f3);
    wrf32d(0x817fdf68u, f3);
    wrf32d(0x817fdf4cu, f3);
    wrf32d(0x817fdf5cu, f4);
    wrf32d(0x817fdf6cu, f3);
    wrf32d(0x817fdf50u, f3);
    wrf32d(0x817fdf60u, f3);
    wrf32d(0x817fdf70u, f4);
    wrf32d(0x817fdf54u, f2);
    wrf32d(0x817fdf64u, f1);
    wrf32d(0x817fdf74u, f0);
    a.r[0] = 0x817fdf48u;
    a.r[1] = r4;
    a.r[2] = r4;
    (void)tc_call(0x802337a0u, &a);
    return;
}
