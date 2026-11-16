#include "tc_rt.h"

u32 fn_8008ddfc(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    if (param_2 >= 5u && param_2 <= 7u) {
        f1 = tc_callf(0x80040a00u, &a);
        f0 = (f64)rdf32(0x80572968u);
        f1 = (f64)(f32)((f64)rdf32(0x80572990u) * f1);
        c0lt = f1 < f0;
        if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) == 0u) {
            r3 = 0u;
            return r3;
        }
        r3 = 1u;
        return r3;
    }
    if (param_2 == 8u) {
        f1 = tc_callf(0x80040a00u, &a);
        f0 = (f64)rdf32(0x80572980u);
        f1 = (f64)(f32)((f64)rdf32(0x80572990u) * f1);
        c0lt = f1 < f0;
        if (((((c0lt << 0x1fu) | ((f1 > f0) << 0x1eu) | ((c0lt || (f1 == f0)) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
