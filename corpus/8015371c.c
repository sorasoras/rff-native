#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8015371c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
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
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(0x817fdf98u, 0x43300000u);
    wr32(0x817fdfa0u, 0x43300000u);
    r3 = tc_call(0x8004d970u, &a);
    r0 = (u32)rd16(r3 + 0xf2u);
    wr32(0x817fdf9cu, (u32)rd16(r3 + 0xf0u));
    r6 = (u32)rd16(r3 + 0xf4u);
    wr32(0x817fdfa4u, r0);
    f0 = rdf64(0x817fdf98u);
    r0 = (u32)rd16(r3 + 0xf6u);
    f1 = rdf64(0x817fdfa0u);
    f3 = rdf64(0x805748b8u);
    wr32(0x817fdf9cu, r6);
    f31 = (f64)(f32)(f0 - f3);
    f0 = (f64)rdf32(0x805748a8u);
    f2 = rdf64(0x817fdf98u);
    f30 = (f64)(f32)(f1 - f3);
    wr32(0x817fdfa4u, r0);
    f2 = (f64)(f32)(f2 - f3);
    f29 = ppc_fmadds(f0, f2, f31);
    f28 = ppc_fmadds(f0, (f64)(f32)(rdf64(0x817fdfa0u) - f3), f30);
    a.r[0] = 0x817fdf88u;
    a.r[1] = r3;
    a.r[2] = param_3;
    (void)tc_call(0x8004d9bcu, &a);
    f1 = (f64)rdf32(0x817fdf90u);
    if (!(f1 > (f64)rdf32(0x805748a4u)) && !(f1 < (f64)rdf32(0x805748a0u))) {
        f0 = (f64)(f32)(f30 - f28);
        f1 = (f64)(f32)(f31 - f29);
        f0 = (f64)(f32)(f0 * f0);
        f1 = ppc_fmadds(f1, f1, f0);
        a.f[0] = f1;
        (void)tc_call(0x80262ec0u, &a);
        f30 = (f64)(f32)(f28 - (f64)rdf32(0x817fdf8cu));
        f28 = (f64)(f32)(f29 - (f64)rdf32(0x817fdf88u));
        a.f[0] = ppc_fmadds(f28, f28, (f64)(f32)(f30 * f30));
        (void)tc_call(0x80262ec0u, &a);
        f0 = (f64)rdf32(0x805748acu);
        wr32(0x817fdf9cu, rd32(param_1 + 8u));
        f1 = (f64)(f32)(f0 * f28);
        f0 = (f64)(f32)(f0 * f30);
        f2 = (f64)(f32)px_fdiv((f64)rdf32(0x805748a4u), (f64)(f32)(rdf64(0x817fdf98u) - rdf64(0x805748b8u)));
        f28 = (f64)(f32)(f1 * f2);
        f29 = (f64)(f32)(f0 * f2);
        a.r[0] = 1u;
        (void)tc_call(0x8004ca7cu, &a);
        a.r[0] = 2u;
        (void)tc_call(0x80044da4u, &a);
        r27 = 0u;
        r28 = 0u;
        while (r27 < rd32(param_1 + 8u)) {
            r0 = rd32(param_1 + 0xcu);
            r3 = r0 + r28;
            r0 = (u32)rd8(r28 + r0);
            if (r0 == 1u) {
                f1 = (f64)rdf32(0x817fdf8cu);
                f0 = (f64)rdf32(0x817fdf90u);
                r9 = (u32)rd8(param_4);
                r8 = (u32)rd8(param_4 + 1u);
                wrf32d(0x817fdf7cu, ppc_fmadds(f28, (f64)rdf32(r3 + 0xcu), (f64)rdf32(0x817fdf88u)));
                r7 = (u32)rd8(param_4 + 2u);
                r0 = (u32)rd8(param_4 + 3u);
                f1 = ppc_fmadds(f29, (f64)rdf32(r3 + 0xcu), f1);
                wrf32d(0x817fdf84u, f0);
                wr8(0x817fdf78u, (u8)r9);
                wrf32d(0x817fdf80u, f1);
                wr8(0x817fdf79u, (u8)r8);
                wr8(0x817fdf7au, (u8)r7);
                wr8(0x817fdf7bu, (u8)r0);
                a.r[0] = r3;
                a.r[1] = param_2;
                a.r[2] = 0x817fdf7cu;
                a.r[3] = 0x817fdf78u;
                (void)tc_call(0x80153524u, &a);
            }
            r28 = r28 + 0x14u;
            r27 = r27 + 1u;
        }
        a.r[0] = 1u;
        a.r[1] = 1u;
        a.r[2] = 3u;
        (void)tc_call(0x80044e3cu, &a);
        a.r[0] = 1u;
        (void)tc_call(0x80044da4u, &a);
        a.r[0] = 0u;
        (void)tc_call(0x8004ca7cu, &a);
    }
    return;
}
