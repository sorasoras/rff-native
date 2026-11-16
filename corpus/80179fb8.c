#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

f64 fn_80179fb8(f64 param_1, f64 param_2, u32 param_3, s32 param_4)
{
    u32 c0lt = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
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
    f31 = (f64)rdf32(0x8057501cu);
    wr32(0x817fdfccu, 0u);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = param_3;
    (void)tc_call(0x80179d4cu, &a);
    a.r[0] = 0x817fdfb8u;
    f1 = tc_callf(0x80234440u, &a);
    f2 = (f64)rdf32(0x8057501cu);
    f4 = (f64)(f32)px_fdiv(f2, (f64)(f32)(param_2 - param_1));
    if (f1 > param_1) {
        c0lt = param_4 < 2;
        if ((u32)param_4 != 2u) {
            if (!c0lt) {
                return f31;
            }
            if (param_4 < 1) {
                return f31;
            }
            a.f[0] = f4;
            a.f[1] = (f64)(f32)(f1 - param_2);
            f1 = tc_callf(0x80262c74u, &a);
            f31 = (f64)(f32)f1;
        } else {
            f1 = (f64)(f32)(f1 - param_1);
            f0 = (f64)rdf32(0x80575010u);
            f31 = ppc_fnmsubs(f4, f1, f2);
            if (f31 < f0) {
                f31 = f0;
            }
        }
    }
    return f31;
}
