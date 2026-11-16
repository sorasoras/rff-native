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

s32 fn_80180ae4(s32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (rd32((u32)param_1 + 0x16cu) == 0u) {
        r3 = 0u;
    } else {
        f0 = (f64)rdf32(0x805750b8u);
        wrf32d(0x817fdfd8u, f0);
        wrf32d(0x817fdfd4u, f0);
        wrf32d(0x817fdfd0u, f0);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfd0u;
        a.r[2] = param_2;
        r3 = tc_call(0x8018150cu, &a);
        r30 = r3;
        if (r3 == 0u) {
            r3 = 0u;
        } else {
            if (r3 == 0xffffffffu && (u32)param_3 == 0u) {
                r3 = 0u;
            } else {
                if (r3 == 1u) {
                    f1 = (f64)rdf32((u32)param_1 + 0x120u);
                    f0 = (f64)rdf32(0x805750d0u);
                    wr32((u32)param_1 + 0xe0u, 0u);
                    f0 = (f64)(f32)(f0 * f1);
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    wrf64(0x817fdfe0u, f0);
                    wr32((u32)param_1 + 0x17cu, rd32(0x817fdfe4u));
                }
                a.r[0] = 0x817fdfd0u;
                f1 = tc_callf(0x80234440u, &a);
                f0 = (f64)rdf32(0x805750d4u);
                if ((f1 > f0) || (f1 == f0)) {
                    r31 = 0u;
                    f1 = (f64)rdf32((u32)param_1 + 0xd4u);
                    wr32((u32)param_1 + 0xf4u, 0u);
                    r0 = rd32((u32)param_1 + 0xccu);
                    wr32(0x817fdfb8u, rd32((u32)param_1 + 0xc8u));
                    wr32(0x817fdfbcu, r0);
                    wr32(0x817fdfc0u, rd32((u32)param_1 + 0xd0u));
                    a.f[0] = f1;
                    a.r[0] = 0x817fdfb8u;
                    a.r[1] = 0x817fdfb8u;
                    (void)tc_call(0x802343c8u, &a);
                    r5 = rd32(0x817fdfbcu);
                    r0 = rd32(0x817fdfc0u);
                    wr32(0x817fdfc4u, rd32(0x817fdfb8u));
                    f1 = (f64)rdf32(0x805750d8u);
                    wr32(0x817fdfc8u, r5);
                    wr32(0x817fdfccu, r0);
                    a.f[0] = f1;
                    a.r[0] = 0x817fdfc4u;
                    a.r[1] = 0x817fdfc4u;
                    (void)tc_call(0x802343c8u, &a);
                    f0 = (f64)rdf32(0x805750b8u);
                    wrf32d((u32)param_1 + 0xe4u, (f64)rdf32(0x817fdfc4u));
                    wrf32d((u32)param_1 + 0xe8u, (f64)rdf32(0x817fdfc8u));
                    wrf32d((u32)param_1 + 0xecu, (f64)rdf32(0x817fdfccu));
                    f1 = (f64)rdf32(0x817fdfd0u);
                    wrf32d((u32)param_1 + 0xc8u, f1);
                    c0eq = f0 == f1;
                    f2 = (f64)rdf32(0x817fdfd4u);
                    wrf32d((u32)param_1 + 0xccu, f2);
                    f1 = (f64)rdf32(0x817fdfd8u);
                    wrf32d((u32)param_1 + 0xd0u, f1);
                    if ((c0eq && f0 == f2) && f0 == f1) {
                        r31 = 1u;
                    }
                    if (r31 == 0u) {
                        r3 = (u32)param_1 + 0xc8u;
                        a.r[0] = r3;
                        a.r[1] = r3;
                        (void)tc_call(0x802343e4u, &a);
                    }
                }
                r3 = r30;
            }
        }
    }
    return (s32)r3;
}
