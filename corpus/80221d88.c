#include "tc_rt.h"

void fn_80221d88(u32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    a.r[0] = param_1;
    f1 = tc_callf(0x800d5e7cu, &a);
    r4 = tc_lastr4();
    r0 = rd32(param_1 + 0xbcu);
    c0lt = (s32)r0 < 2;
    if (r0 == 2u) {
        r0 = rd32(param_1 + 0xc0u) - 1u;
        wr32(param_1 + 0xc0u, r0);
        if ((s32)r0 < 0) {
            wr32(param_1 + 0xbcu, 0u);
            wr32(param_1 + 0xc0u, 0x3cu);
        }
    } else if (!c0lt) {
        if ((s32)r0 < 4) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            f1 = tc_lastf();
            f31 = (f64)rdf32(r3 + 8u);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.f[0] = (f64)rdf32(r3);
            a.f[1] = f31;
            a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            f1 = tc_callf(0x80089fc8u, &a);
            r4 = rd32(param_1 + 0xc0u);
            wr32(0x817fdfc8u, 0x43300000u);
            f31 = f1;
            r12 = rd32(param_1);
            wr32(0x817fdfccu, r4 ^ 0x80000000u);
            f2 = (f64)(f32)(rdf64(0x817fdfc8u) - rdf64(0x80576a48u));
            r12 = rd32(r12 + 0x28u);
            f1 = (f64)(f32)((f64)rdf32(0x80576a3cu) - f2);
            f30 = (f64)(f32)((f64)rdf32(0x80576a38u) * f1);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            r3 = tc_call(r12, &a);
            r4 = rd32(r3);
            f0 = (f64)rdf32(0x80576a40u);
            wr32(0x817fdfbcu, rd32(r3 + 4u));
            f1 = (f64)rdf32(0x817fdfbcu);
            wr32(0x817fdfb8u, r4);
            f2 = (f64)(f32)(f1 - f30);
            f1 = (f64)(f32)(f2 - f31);
            wr32(0x817fdfc0u, rd32(r3 + 8u));
            wrf32d(0x817fdfbcu, f2);
            if (!(f1 < f0)) {
                a.r[0] = param_1;
                a.r[1] = 0x817fdfb8u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
            } else {
                wrf32d(0x817fdfbcu, f31);
                a.r[0] = param_1;
                a.r[1] = 0x817fdfb8u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = f2;
                (void)tc_call(rd32(rd32(param_1) + 0x50u), &a);
                wr32(param_1 + 0xbcu, 4u);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0x41au;
                (void)tc_call(0x8010a75cu, &a);
                f1 = (f64)rdf32(0x80576a40u);
                wrf32d(0x817fdfbcu, (f64)(f32)((f64)rdf32(0x817fdfbcu) + (f64)rdf32(0x80576a44u)));
                a.f[0] = f1;
                a.r[0] = 0x5eu;
                a.r[1] = 0x817fdfb8u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                r3 = tc_call(0x800d7768u, &a);
                wr32(param_1 + 0xb8u, r3);
            }
            r3 = rd32(param_1 + 0xc0u);
            if (r3 != 0u) {
                wr32(param_1 + 0xc0u, r3 - 1u);
            }
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 != 0u && !c0lt) {
            r0 = rd32(param_1 + 0xc0u) - 1u;
            wr32(param_1 + 0xc0u, r0);
            if ((s32)r0 < 0) {
                wr32(param_1 + 0xbcu, 3u);
                wr32(param_1 + 0xc0u, 0x3cu);
            }
        }
    }
    return;
}
