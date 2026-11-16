#include "tc_rt.h"

f64 fn_8008b15c(u32 param_1, u32 param_2)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(param_1);
    a.f[1] = (f64)rdf32(param_1 + 8u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if ((f64)rdf32(0x80572910u) < f1) {
        a.f[0] = (f64)rdf32(param_1);
        a.f[1] = (f64)rdf32(param_1 + 8u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f31 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
    } else {
        a.f[0] = (f64)rdf32(param_1);
        a.f[1] = (f64)rdf32(param_1 + 8u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x8057291cu);
        if ((f0 > f1) || (f0 == f1)) {
            a.f[0] = (f64)rdf32(param_1);
            a.f[1] = (f64)rdf32(param_1 + 8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f31 = (f64)(f32)((f64)rdf32(0x80572918u) + f1);
        } else {
            a.f[0] = (f64)rdf32(param_1);
            a.f[1] = (f64)rdf32(param_1 + 8u);
            f1 = tc_callf(0x80262c68u, &a);
            f31 = (f64)(f32)f1;
        }
    }
    a.f[0] = (f64)rdf32(param_2);
    a.f[1] = (f64)rdf32(param_2 + 8u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if ((f64)rdf32(0x80572910u) < f1) {
        a.f[0] = (f64)rdf32(param_2);
        a.f[1] = (f64)rdf32(param_2 + 8u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f3 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
    } else {
        a.f[0] = (f64)rdf32(param_2);
        a.f[1] = (f64)rdf32(param_2 + 8u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x8057291cu);
        if ((f0 > f1) || (f0 == f1)) {
            a.f[0] = (f64)rdf32(param_2);
            a.f[1] = (f64)rdf32(param_2 + 8u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)((f64)rdf32(0x80572918u) + f1);
        } else {
            a.f[0] = (f64)rdf32(param_2);
            a.f[1] = (f64)rdf32(param_2 + 8u);
            f1 = tc_callf(0x80262c68u, &a);
            f3 = (f64)(f32)f1;
        }
    }
    if ((f64)rdf32(0x80572910u) < f31) {
        f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572918u));
    } else {
        f0 = (f64)rdf32(0x8057291cu);
        if ((f0 > f31) || (f0 == f31)) {
            f0 = (f64)(f32)((f64)rdf32(0x80572918u) + f31);
        } else {
            f0 = f31;
        }
    }
    f1 = (f64)(f32)(f0 - f3);
    if (f1 > (f64)rdf32(0x80572910u)) {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
    } else {
        if (f1 < (f64)rdf32(0x8057291cu)) {
            f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572918u));
        }
    }
    f0 = (f64)rdf32(0x80572910u);
    if (f0 < f1) {
        if (f0 < f31) {
            f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572918u));
        } else {
            f0 = (f64)rdf32(0x8057291cu);
            if ((f0 > f31) || (f0 == f31)) {
                f31 = (f64)(f32)((f64)rdf32(0x80572918u) + f31);
            }
        }
        f1 = (f64)(f32)(f31 - f3);
        if (f1 > (f64)rdf32(0x80572910u)) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
        } else {
            if (f1 < (f64)rdf32(0x8057291cu)) {
                f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572918u));
            }
        }
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
    } else {
        if (f0 < f31) {
            f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572918u));
        } else {
            f0 = (f64)rdf32(0x8057291cu);
            if ((f0 > f31) || (f0 == f31)) {
                f0 = (f64)(f32)((f64)rdf32(0x80572918u) + f31);
            } else {
                f0 = f31;
            }
        }
        f2 = (f64)(f32)(f0 - f3);
        if (f2 > (f64)rdf32(0x80572910u)) {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x80572918u));
        } else {
            if (f2 < (f64)rdf32(0x8057291cu)) {
                f2 = (f64)(f32)(f2 + (f64)rdf32(0x80572918u));
            }
        }
        f1 = (f64)rdf32(0x8057291cu);
        if ((f1 > f2) || (f1 == f2)) {
            if ((f64)rdf32(0x80572910u) < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572918u));
            } else {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x80572918u) + f31);
                }
            }
            f1 = (f64)(f32)(f31 - f3);
            if (f1 > (f64)rdf32(0x80572910u)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
            } else {
                if (f1 < (f64)rdf32(0x8057291cu)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572918u));
                }
            }
            f1 = (f64)(f32)((f64)rdf32(0x80572918u) + f1);
        } else {
            if ((f64)rdf32(0x80572910u) < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572918u));
            } else {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x80572918u) + f31);
                }
            }
            f1 = (f64)(f32)(f31 - f3);
            if (f1 > (f64)rdf32(0x80572910u)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572918u));
            } else {
                if (f1 < (f64)rdf32(0x8057291cu)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572918u));
                }
            }
        }
    }
    return f1;
}
