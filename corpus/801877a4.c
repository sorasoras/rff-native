#include "tc_rt.h"

void fn_801877a4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f30 = 0.0, f31 = 0.0;
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
    wr32(0x817fdfd8u, 0u);
    r5 = rd32(param_1 + 0xab8u);
    if ((s32)r5 >= 0) {
        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r5) >> 1);
        r4 = (r0 >> 0x1fu) & 1u;
        r0 = r0 + r4;
        r0 = r0 * 5u;
        r0 = r5 - r0;
        if (r0 == 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x28u), &a);
            r5 = rd32(0x804890d4u);
            r4 = rd32(0x804890d8u);
            r0 = rd32(0x804890dcu);
            wr32(0x817fdfc4u, r5);
            wr32(0x817fdfc8u, r4);
            wr32(0x817fdfccu, r0);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0x804890d4u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            f31 = f1;
            r3 = rd32(0x817fdfc8u);
            r0 = rd32(0x817fdfccu);
            wr32(0x817fdfb8u, rd32(0x817fdfc4u));
            wr32(0x817fdfbcu, r3);
            wr32(0x817fdfc0u, r0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            f30 = (f64)(f32)f1;
            a.f[0] = f31;
            f1 = tc_callf(0x80262b10u, &a);
            f4 = (f64)(f32)f1;
            f1 = (f64)rdf32(0x817fdfc0u);
            f0 = (f64)(f32)(f1 * f30);
            f3 = (f64)rdf32(0x817fdfb8u);
            f2 = (f64)(f32)(f1 * f4);
            wr32(0x817fdfd0u, 0x43300000u);
            f1 = -f4;
            f4 = rdf64(0x80575218u);
            f5 = ppc_fmadds(f3, f30, f2);
            f2 = (f64)rdf32(0x80575238u);
            f3 = ppc_fmadds(f3, f1, f0);
            f1 = (f64)rdf32(0x805751b8u);
            f0 = (f64)rdf32(0x80575234u);
            wrf32d(0x817fdfc4u, f5);
            wrf32d(0x817fdfccu, f3);
            r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)rd32(param_1 + 0xab8u)) >> 1);
            r30 = r0 + ((r0 >> 0x1fu) & 1u);
            wr32(0x817fdfd4u, r30 ^ 0x80000000u);
            f2 = (f64)(f32)(f2 - (f64)(f32)(rdf64(0x817fdfd0u) - f4));
            f1 = (f64)(f32)(f1 + f2);
            f1 = (f64)(f32)(f0 * f1);
            a.f[0] = f1;
            a.r[0] = 0x817fdfc4u;
            a.r[1] = 0x817fdfc4u;
            f1 = tc_callf(0x802343c8u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.r[0] = 0x817fdfc4u;
            a.r[1] = r3;
            a.r[2] = 0x817fdfc4u;
            f1 = tc_callf(0x80234380u, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            a.f[0] = (f64)rdf32(0x817fdfc4u);
            a.f[1] = (f64)rdf32(0x817fdfccu);
            a.f[2] = (f64)(f32)((f64)rdf32(0x805751f0u) + (f64)rdf32(r3 + 4u));
            a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
            a.r[1] = 0u;
            a.r[2] = 0u;
            f1 = tc_callf(0x8008a2fcu, &a);
            if ((f64)rdf32(0x8057523cu) != f1) {
                wrf32d(0x817fdfc8u, f1);
                a.f[0] = (f64)rdf32(0x805751b8u);
                a.r[0] = 0x55u;
                a.r[1] = 0x817fdfc4u;
                a.r[2] = 0x804b15c0u;
                a.r[3] = 0x804890c8u;
                (void)tc_call(0x800d783cu, &a);
                r5 = r30 * 0xf4u;
                r4 = 1u;
                r3 = param_1 + r5;
                wrf32d(0x817fdfc8u, (f64)(f32)((f64)rdf32(0x817fdfc8u) + (f64)rdf32(0x80575240u)));
                if (rd32(r3 + 0x1018u) == 0u && rd32(r3 + 0xf70u) == 0u) {
                    r4 = 0u;
                }
                if (r4 == 0u) {
                    a.f[0] = (f64)rdf32(0x805751c4u);
                    a.f[1] = (f64)rdf32(0x80575220u);
                    a.f[2] = (f64)rdf32(0x80575240u);
                    a.f[3] = (f64)rdf32(param_1 + 0xad0u);
                    a.r[0] = param_1 + r5 + 0xf28u;
                    a.r[1] = 0x817fdfc4u;
                    a.r[2] = 0x40808au;
                    a.r[3] = 0u;
                    a.r[4] = param_1;
                    (void)tc_call(0x800cdc78u, &a);
                }
            }
        }
        wr32(param_1 + 0xab8u, rd32(param_1 + 0xab8u) - 1u);
    } else {
        a.r[0] = param_1;
        a.r[1] = 0xbu;
        (void)tc_call(0x801867a0u, &a);
    }
    return;
}
