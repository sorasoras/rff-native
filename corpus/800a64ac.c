#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

s32 fn_800a64ac(u32 param_1)
{
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f0 = (f64)rdf32(0x80572ad8u);
    wrf32d(0x817fdfd0u, f0);
    wrf32d(0x817fdfccu, f0);
    wrf32d(0x817fdfc8u, f0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfc8u;
    (void)tc_call(0x802343e4u, &a);
    a.f[0] = (f64)rdf32(0x817fdfc8u);
    a.f[1] = (f64)rdf32(0x817fdfd0u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if ((f64)rdf32(0x80572b0cu) < f1) {
        a.f[0] = (f64)rdf32(0x817fdfc8u);
        a.f[1] = (f64)rdf32(0x817fdfd0u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f31 = (f64)(f32)(f1 - (f64)rdf32(0x80572b10u));
    } else {
        a.f[0] = (f64)rdf32(0x817fdfc8u);
        a.f[1] = (f64)rdf32(0x817fdfd0u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x80572b14u);
        if ((f0 > f1) || (f0 == f1)) {
            a.f[0] = (f64)rdf32(0x817fdfc8u);
            a.f[1] = (f64)rdf32(0x817fdfd0u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f31 = (f64)(f32)((f64)rdf32(0x80572b10u) + f1);
        } else {
            a.f[0] = (f64)rdf32(0x817fdfc8u);
            a.f[1] = (f64)rdf32(0x817fdfd0u);
            f1 = tc_callf(0x80262c68u, &a);
            f31 = (f64)(f32)f1;
        }
    }
    f0 = (f64)rdf32(0x80572ad8u);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    wrf32d(0x817fdfd4u, f0);
    a.r[0] = 0x804890d4u;
    a.r[1] = 0x817fdfd4u;
    (void)tc_call(0x802343e4u, &a);
    a.f[0] = (f64)rdf32(0x817fdfd4u);
    a.f[1] = (f64)rdf32(0x817fdfdcu);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if ((f64)rdf32(0x80572b0cu) < f1) {
        a.f[0] = (f64)rdf32(0x817fdfd4u);
        a.f[1] = (f64)rdf32(0x817fdfdcu);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f3 = (f64)(f32)(f1 - (f64)rdf32(0x80572b10u));
    } else {
        a.f[0] = (f64)rdf32(0x817fdfd4u);
        a.f[1] = (f64)rdf32(0x817fdfdcu);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x80572b14u);
        if ((f0 > f1) || (f0 == f1)) {
            a.f[0] = (f64)rdf32(0x817fdfd4u);
            a.f[1] = (f64)rdf32(0x817fdfdcu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f3 = (f64)(f32)((f64)rdf32(0x80572b10u) + f1);
        } else {
            a.f[0] = (f64)rdf32(0x817fdfd4u);
            a.f[1] = (f64)rdf32(0x817fdfdcu);
            f1 = tc_callf(0x80262c68u, &a);
            f3 = (f64)(f32)f1;
        }
    }
    if ((f64)rdf32(0x80572b0cu) < f31) {
        f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572b10u));
    } else {
        f0 = (f64)rdf32(0x80572b14u);
        if ((f0 > f31) || (f0 == f31)) {
            f0 = (f64)(f32)((f64)rdf32(0x80572b10u) + f31);
        } else {
            f0 = f31;
        }
    }
    f1 = (f64)(f32)(f0 - f3);
    if (f1 > (f64)rdf32(0x80572b0cu)) {
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572b10u));
    } else {
        if (f1 < (f64)rdf32(0x80572b14u)) {
            f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572b10u));
        }
    }
    f0 = (f64)rdf32(0x80572b0cu);
    if (f0 < f1) {
        if (f0 < f31) {
            f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572b10u));
        } else {
            f0 = (f64)rdf32(0x80572b14u);
            if ((f0 > f31) || (f0 == f31)) {
                f31 = (f64)(f32)((f64)rdf32(0x80572b10u) + f31);
            }
        }
        f1 = (f64)(f32)(f31 - f3);
        if (f1 > (f64)rdf32(0x80572b0cu)) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572b10u));
        } else {
            if (f1 < (f64)rdf32(0x80572b14u)) {
                f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572b10u));
            }
        }
        f2 = (f64)(f32)(f1 - (f64)rdf32(0x80572b10u));
    } else {
        if (f0 < f31) {
            f0 = (f64)(f32)(f31 - (f64)rdf32(0x80572b10u));
        } else {
            f0 = (f64)rdf32(0x80572b14u);
            if ((f0 > f31) || (f0 == f31)) {
                f0 = (f64)(f32)((f64)rdf32(0x80572b10u) + f31);
            } else {
                f0 = f31;
            }
        }
        f2 = (f64)(f32)(f0 - f3);
        if (f2 > (f64)rdf32(0x80572b0cu)) {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x80572b10u));
        } else {
            if (f2 < (f64)rdf32(0x80572b14u)) {
                f2 = (f64)(f32)(f2 + (f64)rdf32(0x80572b10u));
            }
        }
        f1 = (f64)rdf32(0x80572b14u);
        if ((f1 > f2) || (f1 == f2)) {
            if ((f64)rdf32(0x80572b0cu) < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572b10u));
            } else {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x80572b10u) + f31);
                }
            }
            f1 = (f64)(f32)(f31 - f3);
            if (f1 > (f64)rdf32(0x80572b0cu)) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572b10u));
            } else {
                if (f1 < (f64)rdf32(0x80572b14u)) {
                    f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572b10u));
                }
            }
            f2 = (f64)(f32)((f64)rdf32(0x80572b10u) + f1);
        } else {
            if ((f64)rdf32(0x80572b0cu) < f31) {
                f31 = (f64)(f32)(f31 - (f64)rdf32(0x80572b10u));
            } else {
                if ((f1 > f31) || (f1 == f31)) {
                    f31 = (f64)(f32)((f64)rdf32(0x80572b10u) + f31);
                }
            }
            f2 = (f64)(f32)(f31 - f3);
            if (f2 > (f64)rdf32(0x80572b0cu)) {
                f2 = (f64)(f32)(f2 - (f64)rdf32(0x80572b10u));
            } else {
                if (f2 < (f64)rdf32(0x80572b14u)) {
                    f2 = (f64)(f32)(f2 + (f64)rdf32(0x80572b10u));
                }
            }
        }
    }
    f2 = (f64)(f32)((f64)rdf32(0x80572b18u) * f2);
    f1 = (f64)(f32)px_fdiv(f2, (f64)rdf32(0x80572b0cu));
    if (f1 < (f64)rdf32(0x80572ad8u)) {
        f1 = (f64)(f32)(f1 + (f64)rdf32(0x80572b1cu));
    }
    wrf64(0x817fdfe0u, px_ctiw(f1, ppc_fctiwz(f1)));
    return (s32)rd32(0x817fdfe4u);
}
