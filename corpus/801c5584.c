#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801c5584(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r25 = 0, r27 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfc4u, 0u);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    r25 = param_r3;
    wr32(0x817fdfacu, rd32(param_r4 + 0x150u));
    wr32(0x817fdfa8u, 8u);
    a.r[0] = 0x817fdfa8u;
    a.r[1] = 4u;
    f1 = tc_callf(0x8014a130u, &a);
    r29 = param_r3 + 8u;
    f31 = rdf64(0x80575ce8u);
    r27 = 0u;
    f30 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575ce0u));
    r28 = 0x80570968u;
    do {
        if (rd32(r25 + 0x50u) == 0u) {
            a.r[0] = 0x817fdfacu;
            r3 = tc_call(0x801495bcu, &a);
            wr32(0x817fdfb0u, 0x43300000u);
            f1 = (f64)rdf32(0x80575ce0u);
            wr32(0x817fdfb4u, r3 ^ 0x80000000u);
            a.f[0] = f1;
            a.f[1] = (f64)(f32)(f30 * (f64)(f32)(rdf64(0x817fdfb0u) - f31));
            a.r[0] = r29;
            a.r[1] = 0u;
            a.r[2] = 0x804890c8u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0x2085u;
            (void)tc_call(0x8006f570u, &a);
            a.r[0] = r29;
            a.r[1] = rd32(param_r4 + 0x70u);
            a.r[2] = rd32(r28);
            a.r[3] = 0x804890c8u;
            (void)tc_call(0x80070170u, &a);
            if (rd32(r25 + 0x50u) == 0u) {
                a.r[0] = r29;
                (void)tc_call(0x8006ff58u, &a);
            }
        }
        r27 = r27 + 1u;
        r29 = r29 + 0xe4u;
        r28 = r28 + 4u;
        r25 = r25 + 0xe4u;
    } while ((s32)r27 < 2);
    return;
}
