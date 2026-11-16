#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801af854(u32 param_r3)
{
    u32 r3 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf30u, 0x817fe000u);
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
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, 0.0);
    wrf32d(0x817fdf8cu, 0.0);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    wr32(0x817fdf70u, 0u);
    wr32(0x817fdf74u, 0u);
    wr32(0x817fdf78u, 0u);
    wr32(0x817fdf7cu, 0u);
    wr32(0x817fdf3cu, rd32(param_r3 + 0x150u));
    wr32(0x817fdf38u, 0xau);
    a.r[0] = 0x817fdf38u;
    a.r[1] = 3u;
    f1 = tc_callf(0x8014a130u, &a);
    f25 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575b24u));
    a.r[0] = param_r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    f1 = tc_callf(rd32(rd32(param_r3) + 0x2cu), &a);
    f24 = f1;
    f26 = (f64)rdf32(0x80575af4u);
    r28 = 0x8033b374u;
    f27 = (f64)rdf32(0x80575afcu);
    r27 = 0u;
    f28 = (f64)rdf32(0x80575b08u);
    f29 = (f64)rdf32(0x80575b00u);
    f30 = rdf64(0x80575ae8u);
    f31 = (f64)rdf32(0x80575b5cu);
    do {
        wrf32d(0x817fdf48u, f26);
        wrf32d(0x817fdf44u, f26);
        wrf32d(0x817fdf40u, f26);
        a.f[0] = f24;
        f1 = tc_callf(0x80262704u, &a);
        wrf32d(0x817fdf44u, f26);
        wrf32d(0x817fdf40u, (f64)(f32)f1);
        a.f[0] = f24;
        f1 = tc_callf(0x80262b10u, &a);
        f0 = (f64)(f32)f1;
        f1 = (f64)rdf32(0x80575b1cu);
        wrf32d(0x817fdf48u, f0);
        a.f[0] = f1;
        a.r[0] = 0x817fdf40u;
        a.r[1] = 0x817fdf40u;
        f1 = tc_callf(0x802343c8u, &a);
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
        a.r[0] = 0x817fdf40u;
        a.r[1] = r3;
        a.r[2] = 0x817fdf40u;
        (void)tc_call(0x80234380u, &a);
        if (f27 < f24) {
            f1 = (f64)(f32)(f24 - f29);
        } else {
            if ((f28 > f24) || (f28 == f24)) {
                f1 = (f64)(f32)(f29 + f24);
            } else {
                f1 = f24;
            }
        }
        a.f[0] = f1;
        a.r[0] = rd32(r28);
        a.r[1] = 5u;
        r3 = tc_call(0x8017748cu, &a);
        r26 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x801af464u, &a);
            f2 = (f64)rdf32(0x817fdf40u);
            wrf32d(r26 + 0x100u, f2);
            f1 = (f64)rdf32(0x817fdf44u);
            wrf32d(r26 + 0x104u, f1);
            f0 = (f64)rdf32(0x817fdf48u);
            wrf32d(r26 + 0x108u, f0);
            wrf32d(r26 + 8u, f2);
            wrf32d(r26 + 0xcu, f1);
            wrf32d(r26 + 0x10u, f0);
            wr32(r26 + 0x124u, 0x808047u);
            a.r[0] = r26;
            a.r[1] = param_r3;
            (void)tc_call(0x80177d54u, &a);
            a.r[0] = 0x817fdf3cu;
            r3 = tc_call(0x80149604u, &a);
            wr32(0x817fdf50u, 0x43300000u);
            wr32(0x817fdf54u, r3 ^ 0x80000000u);
            f0 = (f64)(f32)(f25 * (f64)(f32)(rdf64(0x817fdf50u) - f30));
            wrf32d(r26 + 0x130u, f0);
            wrf32d(r26 + 0x24u, f0);
            wr32(r26 + 0x1a0u, rd32(0x804863d8u));
        }
        r27 = r27 + 1u;
        f24 = (f64)(f32)(f24 + f31);
        r28 = r28 + 4u;
    } while ((s32)r27 < 3);
    return;
}
