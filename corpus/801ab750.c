#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801ab750(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r4 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f1 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
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
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdfa0u, 0u);
    wr32(0x817fdfa4u, 0u);
    wr32(0x817fdfa8u, 0u);
    wr32(0x817fdfacu, 0u);
    wr32(0x817fdfb0u, 0u);
    wr32(0x817fdfb4u, 0u);
    wr32(0x817fdfb8u, 0u);
    wr32(0x817fdfbcu, 0u);
    wr32(param_r3 + 0x1dcu, 0u);
    wr32(0x817fdf7cu, rd32(param_r4 + 0x150u));
    wr32(0x817fdf78u, 8u);
    a.r[0] = 0x817fdf78u;
    a.r[1] = 5u;
    f1 = tc_callf(0x8014a130u, &a);
    r28 = param_r3;
    f30 = (f64)rdf32(0x80575a54u);
    r26 = param_r3 + 8u;
    f28 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575a90u));
    f29 = (f64)rdf32(0x80575a94u);
    f31 = rdf64(0x80575aa0u);
    r24 = 0u;
    r27 = 0x80570918u;
    r25 = 0x80570920u;
    do {
        f1 = tc_callf(0x80040a00u, &a);
        wrf32d(r28 + 0xecu, (f64)(f32)(f29 * f1));
        if (r24 == 0u) {
            wrf32d(r28 + 0xecu, (f64)(f32)((f64)rdf32(r28 + 0xecu) * f30));
        }
        a.r[0] = rd32(param_r4 + 0x70u);
        a.r[1] = rd32(r27);
        r3 = tc_call(0x80031be0u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r23 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0x801ab5f0u;
            f1 = tc_callf(0x8007b13cu, &a);
            r4 = tc_lastr4();
            wr32(r23 + 0x60u, r26);
        }
        a.r[0] = r26;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(r26) + 0xcu), &a);
        a.r[0] = 0x817fdf7cu;
        r3 = tc_call(0x801495bcu, &a);
        wr32(0x817fdf80u, 0x43300000u);
        f1 = (f64)rdf32(0x80575a98u);
        wr32(0x817fdf84u, r3 ^ 0x80000000u);
        a.f[0] = f1;
        a.f[1] = (f64)(f32)(f28 * (f64)(f32)(rdf64(0x817fdf80u) - f31));
        a.r[0] = r26;
        a.r[1] = 0u;
        a.r[2] = 0x804890c8u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0x1085u;
        (void)tc_call(0x8006f570u, &a);
        a.r[0] = r26;
        a.r[1] = rd32(param_r4 + 0x70u);
        a.r[2] = rd32(r25);
        a.r[3] = 0x804890c8u;
        f1 = tc_callf(0x80070170u, &a);
        r4 = tc_lastr4();
        if (rd32(r28 + 0x50u) == 0u) {
            a.r[0] = r26;
            f1 = tc_callf(0x8006ff58u, &a);
            r4 = tc_lastr4();
        }
        r24 = r24 + 1u;
        r27 = r27 + 4u;
        r26 = r26 + 0xe8u;
        r25 = r25 + 4u;
        r28 = r28 + 0xe8u;
    } while ((s32)r24 < 2);
    a.r[0] = param_r4;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_r4) + 0x1d0u), &a);
    a.r[0] = param_r4;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = (f64)rdf32(0x80575a9cu);
    a.f[1] = 0.0;
    (void)tc_call(rd32(rd32(param_r4) + 0x54u), &a);
    wr32(param_r3 + 0x1d8u, 0u);
    return;
}
