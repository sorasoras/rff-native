#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800f0d38(u32 param_1, s32 param_2, u32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    r7 = rd32(param_3);
    wr32(0x817fdfdcu, 0u);
    r6 = rd32(param_3 + 4u);
    wr32(0x817fdfd8u, 0u);
    r0 = rd32(param_3 + 8u);
    wr32(0x817fdfd4u, 0u);
    r8 = rd32((u32)param_2 + 0x18u);
    wr32(0x817fdfb8u, r7);
    wr32(0x817fdfbcu, r6);
    wr32(0x817fdfc0u, r0);
    a.r[0] = 0x817fdfb8u;
    a.r[1] = r8 + 0xcf4u;
    a.r[2] = 0x817fdfb8u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfb8u;
    f1 = tc_callf(0x80234440u, &a);
    f0 = (f64)rdf32(0x80573ad8u);
    f31 = f1;
    if (!(f1 > f0)) {
        wrf32d(param_1, f0);
        wrf32d(param_1 + 4u, f0);
        wrf32d(param_1 + 8u, f0);
    } else {
        r30 = rd32((u32)param_2 + 0x18u);
        f30 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80573b00u));
        a.r[0] = r30;
        a.r[1] = 1u;
        r3 = tc_call(0x800b1048u, &a);
        if (r3 == 0u) {
            f0 = (f64)rdf32(r30 + 0xd50u);
        } else {
            f0 = (f64)(f32)((f64)rdf32(r30 + 0xd50u) * (f64)rdf32(0x80573afcu));
        }
        if (!(f30 < f0)) {
            r30 = rd32((u32)param_2 + 0x18u);
            a.r[0] = r30;
            a.r[1] = 1u;
            r3 = tc_call(0x800b1048u, &a);
            if (r3 == 0u) {
                f30 = (f64)rdf32(r30 + 0xd50u);
            } else {
                f30 = (f64)(f32)((f64)rdf32(r30 + 0xd50u) * (f64)rdf32(0x80573afcu));
            }
        }
        r5 = rd32(0x817fdfbcu);
        r0 = rd32(0x817fdfc0u);
        wr32(0x817fdfa0u, rd32(0x817fdfb8u));
        wr32(0x817fdfa4u, r5);
        wr32(0x817fdfa8u, r0);
        a.f[0] = f30;
        a.r[0] = 0x817fdfa0u;
        a.r[1] = 0x817fdfa0u;
        (void)tc_call(0x802343c8u, &a);
        r4 = rd32(0x817fdfa0u);
        r3 = rd32(0x817fdfa4u);
        c0eq = (f64)rdf32(0x80573ad8u) == f31;
        r0 = rd32(0x817fdfa8u);
        wr32(0x817fdf88u, r4);
        wr32(0x817fdf8cu, r3);
        wr32(0x817fdf90u, r0);
        if (!c0eq) {
            a.f[0] = (f64)(f32)px_fdiv((f64)rdf32(0x80573af8u), f31);
            a.r[0] = 0x817fdf88u;
            a.r[1] = 0x817fdf88u;
            (void)tc_call(0x802343c8u, &a);
            r3 = rd32(0x817fdf8cu);
            r0 = rd32(0x817fdf90u);
            wr32(0x817fdfacu, rd32(0x817fdf88u));
            wr32(0x817fdfb0u, r3);
            wr32(0x817fdfb4u, r0);
        } else {
            wr32(0x817fdfacu, r4);
            wr32(0x817fdfb0u, r3);
            wr32(0x817fdfb4u, r0);
        }
        r9 = rd32((u32)param_2 + 0x18u);
        r7 = rd32(0x817fdfacu);
        r8 = rd32(r9 + 0xd1cu);
        r6 = rd32(0x817fdfb0u);
        wr32(0x817fdf94u, rd32(r9 + 0xd18u));
        r0 = rd32(0x817fdfb4u);
        wr32(0x817fdf98u, r8);
        wr32(0x817fdf9cu, rd32(r9 + 0xd20u));
        wr32(param_1, r7);
        wr32(param_1 + 4u, r6);
        wr32(param_1 + 8u, r0);
        a.r[0] = param_1;
        a.r[1] = 0x817fdf94u;
        a.r[2] = param_1;
        (void)tc_call(0x802343a4u, &a);
    }
    return;
}
