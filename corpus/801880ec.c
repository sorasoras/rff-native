#include "tc_rt.h"

void fn_801880ec(u32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f0 = (f64)rdf32(0x805751f4u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wrf32d(0x817fdfd4u, f0);
    wrf32d(0x817fdfd0u, f0);
    wrf32d(0x817fdfccu, f0);
    c0eq = rd32(param_1 + 0xabcu) == 0u;
    if (c0eq) {
        if (rd32(param_1 + 0xe38u) == 0u) {
            r3 = param_1 + 0x54cu;
            a.r[0] = r3;
            a.r[1] = 0x817fdfccu;
            a.r[2] = 0xc8u;
            a.r[3] = 0x804890c8u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(r3) + 0x34u), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 == 0u) {
                a.r[0] = param_1;
                a.r[1] = 0x817fdfccu;
                a.r[2] = 0x15u;
                a.r[3] = 0x804890c8u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                f1 = tc_callf(rd32(rd32(param_1) + 0x34u), &a);
                r4 = tc_lastr4();
            }
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            f0 = (f64)rdf32(0x805751f4u);
            wrf32d(0x817fdfc4u, f1);
            f1 = (f64)rdf32(0x805751b8u);
            wrf32d(0x817fdfc0u, f0);
            wrf32d(0x817fdfc8u, f0);
            a.f[0] = f1;
            a.r[0] = 0x2bu;
            a.r[1] = 0x817fdfccu;
            a.r[2] = 0x817fdfc0u;
            a.r[3] = 0x804890c8u;
            f1 = tc_callf(0x800d783cu, &a);
            r5 = rd32(0x804890d4u);
            r4 = rd32(0x804890d8u);
            r0 = rd32(0x804890dcu);
            wr32(0x817fdfb4u, r5);
            wr32(0x817fdfb8u, r4);
            wr32(0x817fdfbcu, r0);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0x804890d4u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            f31 = f1;
            r3 = rd32(0x817fdfb8u);
            r0 = rd32(0x817fdfbcu);
            wr32(0x817fdfa8u, rd32(0x817fdfb4u));
            wr32(0x817fdfacu, r3);
            wr32(0x817fdfb0u, r0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            f30 = (f64)(f32)f1;
            a.f[0] = f31;
            f1 = tc_callf(0x80262b10u, &a);
            f5 = (f64)(f32)f1;
            f2 = (f64)rdf32(0x817fdfb0u);
            f4 = (f64)rdf32(0x817fdfa8u);
            f1 = (f64)rdf32(0x8057524cu);
            wrf32d(0x817fdfb4u, ppc_fmadds(f4, f30, (f64)(f32)(f2 * f5)));
            wrf32d(0x817fdfbcu, ppc_fmadds(f4, -f5, (f64)(f32)(f2 * f30)));
            a.f[0] = f1;
            a.r[0] = 0x817fdfb4u;
            a.r[1] = 0x817fdfb4u;
            (void)tc_call(0x802343c8u, &a);
            a.r[0] = 0x817fdfb4u;
            a.r[1] = 0x817fdfccu;
            a.r[2] = 0x817fdfb4u;
            (void)tc_call(0x80234380u, &a);
            a.f[0] = (f64)rdf32(param_1 + 0xad0u);
            a.f[1] = (f64)rdf32(0x80575204u);
            a.f[2] = (f64)rdf32(0x8057524cu);
            a.r[0] = param_1 + 0xdf0u;
            a.r[1] = param_1;
            a.r[2] = 0x817fdfccu;
            a.r[3] = 0x817fdfb4u;
            a.r[4] = 3u;
            a.r[5] = 0x20802au;
            (void)tc_call(0x800a19b4u, &a);
            a.r[0] = param_1;
            a.r[1] = 1u;
            (void)tc_call(0x8018677cu, &a);
            return;
        }
        a.r[0] = param_1;
        a.r[1] = 0xbu;
        (void)tc_call(0x801867a0u, &a);
    } else {
        if (!c0eq) {
            r0 = rd32(param_1 + 0xab8u) - 1u;
            wr32(param_1 + 0xab8u, r0);
            if ((s32)r0 <= 0) {
                a.r[0] = param_1;
                a.r[1] = 0xbu;
                (void)tc_call(0x801867a0u, &a);
            }
        }
    }
    return;
}
