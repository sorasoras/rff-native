#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8006a8d8(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r21 = 0, r22 = 0, r23 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf00u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdfc0u, 0u);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)param_3;
    a.r[3] = (u32)param_4;
    a.r[4] = param_5;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
    f1 = (f64)(f32)((f64)rdf32(0x80572610u) * f1);
    f0 = (f64)rdf32(0x80572694u);
    f1 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x805725e4u));
    do {
        if ((f0 < f1) || (f0 == f1)) {
            f0 = (f64)rdf32(0x8057260cu);
            if ((f0 > f1) || (f0 == f1)) {
                f30 = (f64)rdf32(0x805725d8u);
                break;
            }
        }
        f0 = (f64)rdf32(0x80572698u);
        if (!((f0 < f1) || (f0 == f1)) || !((f64)rdf32(0x80572694u) > f1)) {
            f0 = (f64)rdf32(0x805726a0u);
            if (!((f0 > f1) || (f0 == f1)) || !((f64)rdf32(0x8057260cu) < f1)) {
                f30 = (f64)rdf32(0x805725e4u);
            } else {
                f30 = (f64)rdf32(0x805725f8u);
            }
        } else {
            f30 = (f64)rdf32(0x8057269cu);
        }
    } while (0);
    f1 = (f64)rdf32(0x80572648u);
    r5 = rd32(0x804890d8u);
    r0 = rd32(0x804890dcu);
    wr32(0x817fdf8cu, rd32(0x804890d4u));
    wr32(0x817fdf90u, r5);
    wr32(0x817fdf94u, r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdf8cu;
    a.r[1] = 0x817fdf8cu;
    (void)tc_call(0x802343c8u, &a);
    r3 = rd32(0x817fdf90u);
    r0 = rd32(0x817fdf94u);
    wr32(0x817fdf2cu, rd32(0x817fdf8cu));
    wr32(0x817fdf30u, r3);
    wr32(0x817fdf34u, r0);
    a.f[0] = f30;
    f1 = tc_callf(0x80262704u, &a);
    f31 = (f64)(f32)f1;
    a.f[0] = f30;
    f1 = tc_callf(0x80262b10u, &a);
    f1 = (f64)(f32)f1;
    r0 = rd32(0x817fdf90u);
    f0 = (f64)rdf32(0x817fdf34u);
    f4 = (f64)rdf32(0x817fdf2cu);
    f3 = (f64)(f32)(f0 * f1);
    wr32(0x817fdf18u, r0);
    f2 = -f1;
    f1 = rdf64(0x805726a8u);
    f0 = (f64)(f32)(f0 * f31);
    wr32(0x817fdf84u, r0);
    f3 = ppc_fmadds(f4, f31, f3);
    wr32(0x817fdf24u, r0);
    f0 = ppc_fmadds(f4, f2, f0);
    wrf32d(0x817fdf8cu, f3);
    r3 = rd32(0x817fdf8cu);
    wrf32d(0x817fdf94u, f0);
    r0 = rd32(0x817fdf94u);
    wr32(0x817fdf14u, r3);
    wr32(0x817fdf1cu, r0);
    wr32(0x817fdf80u, r3);
    wr32(0x817fdf88u, r0);
    wr32(0x817fdf20u, r3);
    wr32(0x817fdf28u, r0);
    a.f[0] = f1;
    f1 = tc_callf(0x80262704u, &a);
    f30 = (f64)(f32)f1;
    a.f[0] = rdf64(0x805726a8u);
    f1 = tc_callf(0x80262b10u, &a);
    f4 = (f64)(f32)f1;
    f1 = (f64)rdf32(0x817fdf28u);
    f3 = (f64)rdf32(0x817fdf20u);
    r31 = 0u;
    r22 = rd32(0x817fdf84u);
    f31 = rdf64(0x80572670u);
    wrf32d(0x817fdf80u, ppc_fmadds(f3, f30, (f64)(f32)(f1 * f4)));
    wrf32d(0x817fdf88u, ppc_fmadds(f3, -f4, (f64)(f32)(f1 * f30)));
    r21 = rd32(0x817fdf80u);
    r23 = rd32(0x817fdf88u);
    while ((s32)r31 < param_4) {
        r9 = rd32(param_2);
        wr32(0x817fdf9cu, r31 ^ 0x80000000u);
        r8 = rd32(param_2 + 4u);
        wr32(0x817fdf98u, 0x43300000u);
        r7 = rd32(param_2 + 8u);
        r6 = rd32(0x817fdf8cu);
        r5 = rd32(0x817fdf90u);
        f1 = (f64)(f32)(rdf64(0x817fdf98u) - f31);
        r0 = rd32(0x817fdf94u);
        wr32(0x817fdf74u, r9);
        wr32(0x817fdf78u, r8);
        wr32(0x817fdf7cu, r7);
        wr32(0x817fdf50u, r6);
        wr32(0x817fdf54u, r5);
        wr32(0x817fdf58u, r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdf50u;
        a.r[1] = 0x817fdf50u;
        (void)tc_call(0x802343c8u, &a);
        a.r[0] = 0x817fdf74u;
        a.r[1] = 0x817fdf50u;
        a.r[2] = 0x817fdf74u;
        (void)tc_call(0x80234380u, &a);
        a.r[0] = param_1;
        a.r[1] = 0x817fdf74u;
        a.r[2] = param_5;
        (void)tc_call(0x8006ac38u, &a);
        r30 = 0u;
        while ((s32)r30 < param_3) {
            r6 = rd32(0x817fdf74u);
            r5 = rd32(0x817fdf78u);
            wr32(0x817fdf9cu, (r30 + 1u) ^ 0x80000000u);
            r0 = rd32(0x817fdf7cu);
            wr32(0x817fdf98u, 0x43300000u);
            f0 = rdf64(0x817fdf98u);
            wr32(0x817fdf08u, r6);
            wr32(0x817fdf0cu, r5);
            wr32(0x817fdf10u, r0);
            wr32(0x817fdf68u, r6);
            wr32(0x817fdf6cu, r5);
            wr32(0x817fdf70u, r0);
            wr32(0x817fdf5cu, r6);
            wr32(0x817fdf60u, r5);
            wr32(0x817fdf64u, r0);
            wr32(0x817fdf44u, r21);
            wr32(0x817fdf48u, r22);
            wr32(0x817fdf4cu, r23);
            a.f[0] = (f64)(f32)(f0 - f31);
            a.r[0] = 0x817fdf44u;
            a.r[1] = 0x817fdf44u;
            (void)tc_call(0x802343c8u, &a);
            a.r[0] = 0x817fdf68u;
            a.r[1] = 0x817fdf44u;
            a.r[2] = 0x817fdf68u;
            (void)tc_call(0x80234380u, &a);
            wr32(0x817fdfa0u, 0x43300000u);
            wr32(0x817fdfa4u, (0u - (r30 + 1u)) ^ 0x80000000u);
            f0 = rdf64(0x817fdfa0u);
            wr32(0x817fdf38u, r21);
            wr32(0x817fdf3cu, r22);
            wr32(0x817fdf40u, r23);
            a.f[0] = (f64)(f32)(f0 - f31);
            a.r[0] = 0x817fdf38u;
            a.r[1] = 0x817fdf38u;
            (void)tc_call(0x802343c8u, &a);
            a.r[0] = 0x817fdf5cu;
            a.r[1] = 0x817fdf38u;
            a.r[2] = 0x817fdf5cu;
            (void)tc_call(0x80234380u, &a);
            a.r[0] = param_1;
            a.r[1] = 0x817fdf68u;
            a.r[2] = param_5;
            (void)tc_call(0x8006ac38u, &a);
            a.r[0] = param_1;
            a.r[1] = 0x817fdf5cu;
            a.r[2] = param_5;
            (void)tc_call(0x8006ac38u, &a);
            r30 = r30 + 1u;
        }
        r31 = r31 + 1u;
    }
    return;
}
