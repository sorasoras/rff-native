#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_801a6e7c(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f4 = rdf64(0x805759f0u);
    wr32(0x817fdfdcu, 0u);
    f2 = (f64)rdf32(0x80570910u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    r5 = rd32(param_2 + 0xcf4u);
    r7 = rd32(param_2 + 0xcf8u);
    wr32(0x817fdfc0u, 0x43300000u);
    wr32(0x817fdfb4u, r5);
    wr32(0x817fdfb8u, r7);
    wr32(0x817fdfbcu, rd32(param_2 + 0xcfcu));
    f1 = (f64)rdf32((u32)param_1 + 0xcu);
    r7 = rd32((u32)param_1 + 0x2cu) + 1u;
    f0 = (f64)rdf32((u32)param_1 + 0x14u);
    wr32((u32)param_1 + 0x2cu, r7);
    wr32(0x817fdfc4u, r7 ^ 0x80000000u);
    f31 = (f64)(f32)((f64)(f32)((f64)(f32)(f2 * (f64)(f32)(rdf64(0x817fdfc0u) - f4)) + f1) + f0);
    wrf32d((u32)param_1 + 0x14u, f31);
    f31 = (f64)(f32)(f31 + (f64)rdf32(0x817fdfb8u));
    a.f[0] = (f64)rdf32(0x817fdfb4u);
    a.f[1] = (f64)rdf32(0x817fdfbcu);
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    f1 = tc_callf(0x80089fc8u, &a);
    f30 = f1;
    if ((f64)rdf32(0x805759e4u) == f1) {
        f30 = (f64)(f32)((f64)rdf32(0x805759e0u) + f31);
    }
    if (f31 < f30) {
        f31 = f30;
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0x1019u;
        a.r[2] = 0x817fdfb4u;
        (void)tc_call(0x8010a754u, &a);
        r4 = rd32((u32)param_1 + 0x18u);
        wr32(0x817fdfc0u, 0x43300000u);
        f3 = rdf64(0x805759f0u);
        r0 = r4 - 1u;
        wr32(0x817fdfc4u, (4u - r4) ^ 0x80000000u);
        f1 = (f64)rdf32(0x805759e8u);
        f0 = (f64)rdf32((u32)param_1 + 0x10u);
        f2 = (f64)(f32)(rdf64(0x817fdfc0u) - f3);
        wr32((u32)param_1 + 0x2cu, 0u);
        wr32((u32)param_1 + 0x18u, r0);
        f1 = (f64)(f32)px_fdiv(f1, f2);
        wrf32d((u32)param_1 + 0x14u, f30);
        f0 = (f64)(f32)(f0 * f1);
        wrf32d((u32)param_1 + 0xcu, f0);
        if ((s32)r0 <= 0) {
            a.r[0] = param_2;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = 0.0;
            (void)tc_call(rd32(rd32(param_2) + 0x1cu), &a);
            r3 = 0u;
            return r3;
        }
        if (rd32(0x80356270u) != 0u) {
            a.f[0] = (f64)rdf32(0x805759e0u);
            a.r[0] = 0x41u;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            r29 = r3;
        } else {
            a.f[0] = (f64)rdf32(0x805759e0u);
            a.r[0] = 0x41u;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d783cu, &a);
            r29 = r3;
        }
        if (r3 != 0u) {
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x8010b43cu, &a);
            wr32(r29 + 0x20u, r3);
            wr32(r29 + 0x24u, 0u);
        }
        if (rd32(0x803561ccu) != 0u) {
            a.f[0] = (f64)rdf32(0x805759e0u);
            a.r[0] = 0x18u;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d7768u, &a);
            r29 = r3;
        } else {
            a.f[0] = (f64)rdf32(0x805759e0u);
            a.r[0] = 0x18u;
            a.r[1] = 0x817fdfb4u;
            a.r[2] = 0x804b15c0u;
            a.r[3] = 0x804890c8u;
            r3 = tc_call(0x800d783cu, &a);
            r29 = r3;
        }
        if (r3 != 0u) {
            a.r[1] = 0xffffffffu;
            r3 = tc_call(0x8010b43cu, &a);
            wr32(r29 + 0x20u, r3);
            wr32(r29 + 0x24u, 0u);
        }
    }
    wrf32d(0x817fdfb8u, f31);
    f1 = (f64)rdf32((u32)param_1 + 0x28u);
    r5 = rd32((u32)param_1 + 0x1cu);
    r0 = rd32((u32)param_1 + 0x20u);
    wrf32d((u32)param_1 + 0xcu, (f64)(f32)((f64)rdf32((u32)param_1 + 0xcu) * (f64)rdf32(0x80570914u)));
    wr32(0x817fdfa8u, r5);
    wr32(0x817fdfacu, r0);
    wr32(0x817fdfb0u, rd32((u32)param_1 + 0x24u));
    a.f[0] = f1;
    a.r[0] = 0x817fdfa8u;
    a.r[1] = 0x817fdfa8u;
    (void)tc_call(0x802343c8u, &a);
    a.r[0] = 0x817fdfb4u;
    a.r[1] = 0x817fdfa8u;
    a.r[2] = 0x817fdfb4u;
    (void)tc_call(0x80234380u, &a);
    r3 = 1u;
    wr8(param_2 + 0xd3cu, 1u);
    f2 = (f64)rdf32(0x817fdfb4u);
    wrf32d(param_2 + 0xd0cu, f2);
    f1 = (f64)rdf32(0x817fdfb8u);
    wrf32d(param_2 + 0xd10u, f1);
    f0 = (f64)rdf32(0x817fdfbcu);
    wrf32d(param_2 + 0xd14u, f0);
    wrf32d(param_2 + 0xcf4u, f2);
    wrf32d(param_2 + 0xcf8u, f1);
    wrf32d(param_2 + 0xcfcu, f0);
    return r3;
}
