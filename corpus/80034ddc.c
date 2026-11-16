#include "tc_rt.h"

void fn_80034ddc(f64 param_1, u32 param_2, u32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    r0 = (u32)rd16(param_3);
    wr32(0x817fdfecu, 0u);
    c0eq = r0 == 0u;
    wr32(0x817fdfe8u, 0u);
    r8 = rd32(0x80571e88u);
    r7 = rd32(0x80571e8cu);
    r6 = rd32(0x80571e90u);
    r5 = rd32(0x80571e94u);
    r3 = rd32(0x80571e98u);
    r0 = rd32(0x80571e9cu);
    wr32(0x817fdfe0u, r8);
    wr32(0x817fdfe4u, r7);
    wr32(0x817fdfd8u, r6);
    wr32(0x817fdfdcu, r5);
    wr32(0x817fdfd0u, r3);
    wr32(0x817fdfd4u, r0);
    if (!c0eq) {
        a.r[0] = 0x817fdfc8u;
        a.r[1] = param_3;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.f[0] = param_1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        (void)tc_call(rd32(param_3 + 0x14u), &a);
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        f1 = (f64)rdf32(0x817fdfc8u);
        if ((f64)rdf32(0x80571e50u) != f1) {
            a.f[0] = f1;
            f1 = tc_callf(0x80262b10u, &a);
            f0 = (f64)(f32)f1;
            f1 = (f64)rdf32(0x817fdfc8u);
            wrf32d(0x817fdfe0u, f0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            wrf32d(0x817fdfe4u, (f64)(f32)f1);
        }
    }
    if ((u32)rd16(param_3 + 0x18u) != 0u) {
        a.r[0] = 0x817fdfc8u;
        a.r[1] = param_3 + 0x18u;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.f[0] = param_1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        (void)tc_call(rd32(param_3 + 0x2cu), &a);
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        f1 = (f64)rdf32(0x817fdfc8u);
        if ((f64)rdf32(0x80571e50u) != f1) {
            a.f[0] = f1;
            f1 = tc_callf(0x80262b10u, &a);
            f0 = (f64)(f32)f1;
            f1 = (f64)rdf32(0x817fdfc8u);
            wrf32d(0x817fdfd0u, f0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            wrf32d(0x817fdfd4u, (f64)(f32)f1);
        }
    }
    if ((u32)rd16(param_3 + 0x30u) != 0u) {
        a.r[0] = 0x817fdfc8u;
        a.r[1] = param_3 + 0x30u;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.f[0] = param_1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        (void)tc_call(rd32(param_3 + 0x44u), &a);
        f1 = (f64)rdf32(0x817fdfc8u);
        if ((f64)rdf32(0x80571e50u) != f1) {
            a.f[0] = f1;
            f1 = tc_callf(0x80262b10u, &a);
            f0 = (f64)(f32)f1;
            f1 = (f64)rdf32(0x817fdfc8u);
            wrf32d(0x817fdfd8u, f0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262704u, &a);
            wrf32d(0x817fdfdcu, (f64)(f32)f1);
        }
    }
    f3 = (f64)rdf32(0x817fdfe4u);
    f2 = (f64)rdf32(0x817fdfdcu);
    f0 = (f64)rdf32(0x817fdfe0u);
    f1 = (f64)rdf32(0x817fdfd8u);
    f8 = (f64)(f32)(f3 * f2);
    f4 = (f64)(f32)(f0 * f2);
    f7 = (f64)rdf32(0x817fdfd0u);
    f0 = (f64)(f32)(f0 * f1);
    f6 = (f64)rdf32(0x817fdfd4u);
    f3 = (f64)(f32)(f3 * f1);
    f5 = (f64)(f32)(f7 * f0);
    f0 = (f64)(f32)(f6 * f0);
    f5 = ppc_fmsubs(f6, f8, f5);
    f0 = ppc_fmadds(f7, f8, f0);
    wrf32d(param_2 + 0xcu, f5);
    wrf32d(param_2, ppc_fmadds(f6, f4, (f64)(f32)(f7 * f3)));
    wrf32d(param_2 + 4u, ppc_fmadds(f6, f3, (f64)(f32)(f7 * f4)));
    wrf32d(param_2 + 8u, f0);
    return;
}
