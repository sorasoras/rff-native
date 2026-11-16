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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

u32 fn_80147ee0(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r3 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f0 = (f64)rdf32(0x80574630u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    r30 = 1u;
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    f1 = (f64)rdf32(param_2);
    f2 = (f64)rdf32(param_2 + 4u);
    f3 = (f64)(f32)ppc_fabs(f1);
    c0lt = f0 < f3;
    if (((ppc_cntlzw((((c0lt << 0x1fu) | ((f0 > f3) << 0x1eu) | ((c0lt || (f0 == f3)) << 0x1du) | (((f0 != f0) || (f3 != f3)) << 0x1cu)) >> 0x1du) & 1u) >> 5u) & 0x7ffffffu) == 1u) {
        r3 = 0u;
    } else {
        f31 = (f64)(f32)(f2 + f1);
        f0 = (f64)rdf32(param_2 + 8u);
        if ((f64)(f32)ppc_fabs(f31) > (f64)(f32)ppc_fabs(f0)) {
            r30 = 0u;
            f31 = f0;
        }
        r31 = param_2 + 0x18u;
        f0 = (f64)(f32)((f64)rdf32(0x805745fcu) * f31);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfd8u, f0);
        a.r[0] = 0x817fdfa8u;
        a.r[1] = param_2 + 0xcu;
        a.r[2] = (u32)(s16)rd32(0x817fdfdcu);
        (void)tc_call(0x80041da0u, &a);
        a.r[0] = 0x817fdfa8u;
        a.r[1] = r31;
        a.r[2] = 0x817fdf78u;
        (void)tc_call(0x802337a0u, &a);
        wrf32d(0x817fdf84u, (f64)rdf32(r31 + 0xcu));
        wrf32d(0x817fdf94u, (f64)rdf32(r31 + 0x1cu));
        wrf32d(0x817fdfa4u, (f64)rdf32(r31 + 0x2cu));
        a.r[0] = param_1;
        a.r[1] = 0x817fdf78u;
        (void)tc_call(0x800315c0u, &a);
        wrf32d(param_2 + 4u, f31);
        r3 = r30;
    }
    return r3;
}
