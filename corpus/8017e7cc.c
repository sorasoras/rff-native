#include "tc_rt.h"

u32 fn_8017e7cc(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    a.r[0] = param_1 + 0xacu;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x8000443cu, &a);
    a.f[0] = (f64)rdf32(param_2);
    a.f[1] = (f64)rdf32(param_2 + 8u);
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    f1 = tc_callf(0x80089fc8u, &a);
    r4 = tc_lastr4();
    f31 = f1;
    if ((f64)rdf32(0x80575070u) == f1) {
        r3 = rd32(0x804863d8u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f31 = (f64)(f32)((f64)rdf32(0x80575074u) + (f64)rdf32(r3 + 4u));
    }
    r3 = rd32(param_2 + 4u);
    r0 = rd32(param_2 + 8u);
    wr32(0x817fdfc8u, rd32(param_2));
    wr32(0x817fdfccu, r3);
    wr32(0x817fdfd0u, r0);
    f1 = tc_callf(0x80040a00u, &a);
    f2 = (f64)rdf32(0x80575078u);
    wrf32d(0x817fdfccu, ppc_fmadds(f2, f1, (f64)(f32)((f64)rdf32(0x80575074u) + f31)));
    a.r[0] = param_1;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    f2 = (f64)rdf32(0x817fdfc8u);
    wrf32d(param_1 + 0x90u, f2);
    f1 = (f64)rdf32(0x817fdfccu);
    wrf32d(param_1 + 0x94u, f1);
    f0 = (f64)rdf32(0x817fdfd0u);
    wrf32d(param_1 + 0x98u, f0);
    wrf32d(param_1 + 0x9cu, f2);
    wrf32d(param_1 + 0xa0u, f1);
    wrf32d(param_1 + 0xa4u, f0);
    wr32(param_1 + 0x74u, (u32)param_3);
    wr32(param_1 + 0x80u, 0u);
    wr32(param_1 + 0x84u, 0u);
    f1 = tc_callf(0x80040a00u, &a);
    f2 = (f64)rdf32(0x80575080u);
    c0lt = param_3 < 2;
    f1 = (f64)(f32)((f64)rdf32(0x80575060u) * f1);
    f0 = (f64)rdf32(0x8057507cu);
    wr32(param_1 + 0x8cu, 0x1eu);
    f0 = ppc_fmadds(f2, f1, f0);
    wrf32d(param_1 + 0x88u, f0);
    if ((u32)param_3 == 2u) {
        a.f[0] = (f64)rdf32(0x80575058u);
        a.r[0] = 0x62u;
        a.r[1] = param_2;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d7768u, &a);
        wr32(param_1 + 0x78u, r3);
    } else if (!c0lt) {
        if (param_3 < 4) {
            a.f[0] = (f64)rdf32(0x80575058u);
            a.r[0] = 0x5fu;
            a.r[1] = param_2;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            wr32(param_1 + 0x78u, r3);
        }
    } else {
        c0lt = param_3 < 0;
        if ((u32)param_3 == 0u) {
            a.f[0] = (f64)rdf32(0x80575058u);
            a.r[0] = 0x61u;
            a.r[1] = param_2;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            wr32(param_1 + 0x78u, r3);
        } else if (!c0lt) {
            a.f[0] = (f64)rdf32(0x80575058u);
            a.r[0] = 0x60u;
            a.r[1] = param_2;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            wr32(param_1 + 0x78u, r3);
        }
    }
    r5 = rd32(param_1 + 0x74u);
    wr32(param_1 + 0xacu, rd32(param_1 + 0xacu) | 0xc0000000u);
    a.r[0] = 0x80475e24u;
    a.r[1] = rd32(0x805706e8u);
    a.r[2] = r5;
    r3 = tc_call(0x8017dc00u, &a);
    wr32(param_1 + 0xacu, (rd32(param_1 + 0xacu) & 0xdfffffffu) | ((r3 << 0x1du) & 0x20000000u));
    r4 = rd32(0x8049b738u);
    if (r4 < 1u || r4 > 0xdu) {
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    if (r0 == 0u) {
        wr32(param_1 + 0xb0u, 0u);
    } else {
        wr32(param_1 + 0xb0u, rd32(((r4 << 2u) & 0xfffffffcu) - 0x7fb79c28u));
    }
    a.r[0] = rd32(param_1 + 0x80u);
    a.r[1] = 1u;
    (void)tc_call(0x8017fdc8u, &a);
    return 1u;
}
