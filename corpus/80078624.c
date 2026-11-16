#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_80078624(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 c0lt = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
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
    f31 = (f64)(f32)(param_1 + param_2);
    f0 = (f64)rdf32(0x80572798u);
    wr32(0x817fdfccu, 0u);
    f1 = (f64)rdf32(0x8057279cu);
    wr32(0x817fdfc8u, 0u);
    wr32(0x817fdfc4u, 0u);
    wrf32d(0x817fdfb0u, f0);
    wrf32d(0x817fdfacu, f0);
    wrf32d(0x817fdfa8u, f0);
    a.f[0] = f1;
    a.r[0] = 0x817fdfa8u;
    a.r[1] = param_4;
    a.r[2] = param_5;
    (void)tc_call(0x8004c6dcu, &a);
    a.r[0] = 0x817fdfa8u;
    a.r[1] = param_3;
    f1 = tc_callf(0x802344e8u, &a);
    f30 = f1;
    a.r[0] = 0x817fdfa8u;
    a.r[1] = param_4;
    f1 = tc_callf(0x802344e8u, &a);
    f29 = f1;
    if ((f64)(f32)(f1 + f31) < f30) {
        r3 = 0u;
    } else {
        a.r[0] = param_3;
        a.r[1] = param_5;
        f1 = tc_callf(0x802344e8u, &a);
        f30 = f1;
        if ((f1 < f31) || (f1 == f31)) {
            r3 = 1u;
        } else {
            if (f29 < (f64)rdf32(0x805727a0u)) {
                r3 = 0u;
            } else {
                a.r[0] = param_3;
                a.r[1] = param_4;
                f1 = tc_callf(0x802344e8u, &a);
                if ((f1 < f31) || (f1 == f31)) {
                    r3 = 1u;
                } else {
                    f29 = (f64)(f32)(f29 + f29);
                    f4 = (f64)(f32)((f64)rdf32(0x8057279cu) * (f64)(f32)(f1 + (f64)(f32)(f29 + f30)));
                    a.f[0] = (f64)(f32)((f64)(f32)(f4 - f1) * (f64)(f32)((f64)(f32)(f4 * (f64)(f32)(f4 - f29)) * (f64)(f32)(f4 - f30)));
                    f1 = tc_callf(0x80262ec0u, &a);
                    f1 = (f64)(f32)f1;
                    f0 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805727a4u) * f1), f29);
                    c0lt = f0 < f31;
                    r3 = (((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u;
                }
            }
        }
    }
    return r3;
}
