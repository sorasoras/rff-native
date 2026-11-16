#include "tc_rt.h"

void fn_80053ac8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wr32(0x817fdfccu, 0u);
    f0 = (f64)rdf32(0x805722c0u);
    wr32(0x817fdfc8u, 0u);
    f31 = (f64)rdf32(0x805722d0u);
    r6 = rd32(0x80336598u);
    wr32(0x817fdfb8u, 0x43300000u);
    r5 = rd32(0x8033659cu);
    r4 = rd32(0x803365a0u);
    r0 = rd32(0x803365a4u);
    r31 = (u32)rd8(0x80492824u);
    wr32(0x817fdfc0u, 0x43300000u);
    r30 = (u32)rd8(0x80492825u);
    wrf32d(0x817fdfb0u, f0);
    f30 = (f64)rdf32(0x805722d4u);
    wrf32d(0x817fdfacu, f0);
    wrf32d(0x817fdfa8u, f0);
    wr32(0x817fdf98u, r6);
    wr32(0x817fdf9cu, r5);
    wr32(0x817fdfa0u, r4);
    wr32(0x817fdfa4u, r0);
    if ((u32)param_1 == 2u || (u32)param_1 == 1u) {
        f1 = (f64)rdf32(0x805722dcu);
        f0 = (f64)rdf32(0x805722e0u);
        wrf32d(0x817fdfacu, (f64)rdf32(0x805722d8u));
        wrf32d(0x817fdfa8u, f1);
        wrf32d(0x817fdfb0u, f0);
    } else {
        if (r31 >= 4u && r31 < 0x12u) {
            wr32(0x817fdfc4u, r30);
            f3 = rdf64(0x80572308u);
            wr32(0x817fdfbcu, (r31 - 4u) ^ 0x80000000u);
            a.f[0] = ppc_fmadds((f64)rdf32(0x805722e8u), ppc_fmadds((f64)rdf32(0x805722c4u), (f64)(f32)(rdf64(0x817fdfb8u) - f3), (f64)(f32)(rdf64(0x817fdfc0u) - rdf64(0x805722c8u))), (f64)rdf32(0x805722e4u));
            f1 = tc_callf(0x80262b10u, &a);
            wr32(0x817fdfc4u, r30);
            f3 = rdf64(0x80572308u);
            wr32(0x817fdfbcu, (r31 - 4u) ^ 0x80000000u);
            f4 = (f64)(f32)(f31 * (f64)(f32)f1);
            f3 = (f64)(f32)(rdf64(0x817fdfb8u) - f3);
            f1 = (f64)rdf32(0x805722c4u);
            f2 = (f64)(f32)(rdf64(0x817fdfc0u) - rdf64(0x805722c8u));
            f0 = (f64)rdf32(0x805722ecu);
            wrf32d(0x817fdfacu, f4);
            f1 = ppc_fmadds(f1, f3, f2);
            f29 = (f64)(f32)(f0 * f1);
            a.f[0] = f29;
            f1 = tc_callf(0x80262704u, &a);
            wrf32d(0x817fdfa8u, (f64)(f32)(f31 * (f64)(f32)f1));
            a.f[0] = f29;
            f1 = tc_callf(0x80262b10u, &a);
            wrf32d(0x817fdfb0u, (f64)(f32)(f30 * (f64)(f32)f1));
        } else {
            if (r31 < 4u) {
                r0 = r31 + 6u;
            } else {
                r0 = r31 - 0x12u;
            }
            r31 = r0 & 0xffu;
            wr32(0x817fdfc4u, r30);
            f4 = rdf64(0x805722c8u);
            wr32(0x817fdfbcu, r31);
            f3 = (f64)(f32)(rdf64(0x817fdfc0u) - f4);
            f4 = (f64)(f32)(rdf64(0x817fdfb8u) - f4);
            a.f[0] = ppc_fmadds((f64)rdf32(0x805722f0u), ppc_fmadds((f64)rdf32(0x805722c4u), f4, f3), (f64)rdf32(0x805722e4u));
            f1 = tc_callf(0x80262b10u, &a);
            wr32(0x817fdfbcu, r31);
            f3 = rdf64(0x805722c8u);
            wr32(0x817fdfc4u, r30);
            f5 = (f64)(f32)(f31 * (f64)(f32)f1);
            f4 = (f64)(f32)(rdf64(0x817fdfb8u) - f3);
            f3 = (f64)(f32)(rdf64(0x817fdfc0u) - f3);
            f1 = (f64)rdf32(0x805722f8u);
            f0 = (f64)rdf32(0x805722f4u);
            f2 = ppc_fmadds((f64)rdf32(0x805722c4u), f4, f3);
            wrf32d(0x817fdfacu, f5);
            f29 = ppc_fmadds(f1, f2, f0);
            a.f[0] = f29;
            f1 = tc_callf(0x80262704u, &a);
            wrf32d(0x817fdfa8u, (f64)(f32)(f31 * (f64)(f32)f1));
            a.f[0] = f29;
            f1 = tc_callf(0x80262b10u, &a);
            wrf32d(0x817fdfb0u, (f64)(f32)(f30 * (f64)(f32)f1));
        }
    }
    f7 = (f64)rdf32(0x817fdfacu);
    f6 = (f64)rdf32(0x817fdfb0u);
    f5 = (f64)rdf32(0x817fdf98u);
    f4 = (f64)rdf32(0x817fdf9cu);
    f3 = (f64)rdf32(0x817fdfa0u);
    f2 = (f64)rdf32(0x817fdfa4u);
    f0 = (f64)rdf32(0x805722fcu);
    wrf32d(0x803d267cu, (f64)rdf32(0x817fdfa8u));
    f1 = (f64)rdf32(0x80572300u);
    wrf32d(0x803d2680u, f7);
    wrf32d(0x803d2684u, f6);
    wrf32d(0x803d2688u, f5);
    wrf32d(0x803d268cu, f4);
    wrf32d(0x803d2690u, f3);
    wrf32d(0x803d2694u, f2);
    wr32(0x803d2698u, 0u);
    wrf32d(0x803d269cu, f31);
    wrf32d(0x803d26a0u, f0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfa8u;
    a.r[1] = 0x817fdfa8u;
    (void)tc_call(0x802343c8u, &a);
    f1 = (f64)rdf32(0x805722c0u);
    r0 = 0u;
    r3 = 0u;
    if (f1 == (f64)rdf32(0x817fdfa8u) && f1 == (f64)rdf32(0x817fdfacu)) {
        r3 = 1u;
    }
    if (r3 != 0u && (f64)rdf32(0x805722c0u) == (f64)rdf32(0x817fdfb0u)) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        a.r[0] = 0x817fdfa8u;
        a.r[1] = 0x817fdfa8u;
        (void)tc_call(0x802343e4u, &a);
    }
    f6 = (f64)rdf32(0x817fdfacu);
    f5 = (f64)rdf32(0x817fdfb0u);
    f4 = (f64)rdf32(0x817fdf98u);
    f3 = (f64)rdf32(0x817fdf9cu);
    f2 = (f64)rdf32(0x817fdfa0u);
    f1 = (f64)rdf32(0x817fdfa4u);
    f0 = (f64)rdf32(0x80572304u);
    wrf32d(0x803d270cu, (f64)rdf32(0x817fdfa8u));
    wrf32d(0x803d2710u, f6);
    wrf32d(0x803d2714u, f5);
    wrf32d(0x803d2718u, f4);
    wrf32d(0x803d271cu, f3);
    wrf32d(0x803d2720u, f2);
    wrf32d(0x803d2724u, f1);
    wrf32d(0x803d2728u, f0);
    return;
}
