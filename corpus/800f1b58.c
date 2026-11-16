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

void fn_800f1b58(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r9 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f4 = rdf64(0x80573b20u);
    wr32(0x817fdfecu, 0u);
    f2 = (f64)rdf32(0x80573b04u);
    wr32(0x817fdfe8u, 0u);
    f1 = (f64)rdf32(0x80573af0u);
    wr32(0x817fdfe4u, 0u);
    f6 = (f64)rdf32(0x80573b44u);
    r6 = (u32)(s16)rd16((u32)param_2 + 0x6cu);
    wr32(0x817fdfc0u, 0x43300000u);
    f5 = (f64)rdf32(0x80573b48u);
    wr32(0x817fdfc4u, r6 ^ 0x80000000u);
    r3 = (u32)(s16)rd16((u32)param_2 + 0x6au);
    f0 = rdf64(0x817fdfc0u);
    wr32(0x817fdfd0u, 0x43300000u);
    f3 = (f64)(f32)(f0 - f4);
    f0 = (f64)rdf32(0x80573b08u);
    f2 = (f64)(f32)(f2 * f3);
    f3 = (f64)rdf32(0x80573af8u);
    f2 = px_ctiw(f2, ppc_fctiwz(f2));
    wrf64(0x817fdfc8u, f2);
    r0 = r3 + rd32(0x817fdfccu);
    r3 = (u32)(s16)r0;
    wr16((u32)param_2 + 0x6au, (u16)r0);
    wr32(0x817fdfd4u, r3 ^ 0x80000000u);
    f2 = ppc_fmadds(f0, (f64)(f32)(rdf64(0x817fdfd0u) - f4), f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80573b18u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x80573b14u) - (f64)(f32)(f2 - f0));
            f0 = (f64)(f32)(f2 * f2);
            f6 = ppc_fmsubs(f6, f0, f5);
            f6 = ppc_fmadds(f6, f0, f3);
        } else {
            f2 = (f64)(f32)(f2 - f1);
            f0 = (f64)(f32)(f2 * f2);
            f6 = ppc_fmsubs(f6, f0, f5);
            f6 = ppc_fmadds(f6, f0, f3);
            f6 = -f6;
        }
    } else {
        f1 = (f64)rdf32(0x80573b14u);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)(f1 - (f64)(f32)(f2 - f1));
            f0 = (f64)(f32)(f2 * f2);
            f6 = ppc_fmsubs(f6, f0, f5);
            f6 = ppc_fmadds(f6, f0, f3);
            f6 = -f6;
        } else {
            f0 = (f64)(f32)(f2 * f2);
            f6 = ppc_fmsubs(f6, f0, f5);
            f6 = ppc_fmadds(f6, f0, f3);
        }
    }
    r3 = r3 ^ 0x80000000u;
    wr32(0x817fdfd4u, r3);
    f6 = -f6;
    f3 = rdf64(0x80573b20u);
    wr32(0x817fdfd0u, 0x43300000u);
    f1 = (f64)rdf32(0x80573af0u);
    f2 = (f64)(f32)(rdf64(0x817fdfd0u) - f3);
    f5 = (f64)rdf32(0x80573b0cu);
    f4 = (f64)rdf32(0x80573b10u);
    f3 = (f64)rdf32(0x80573af8u);
    f2 = ppc_fmadds((f64)rdf32(0x80573b08u), f2, f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80573b18u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x80573b14u) - (f64)(f32)(f2 - f0));
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = (f64)(f32)(f5 * f2);
            f5 = -f5;
        } else {
            f2 = (f64)(f32)(f2 - f1);
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = (f64)(f32)(f5 * f2);
            f5 = -f5;
        }
    } else {
        f1 = (f64)rdf32(0x80573b14u);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)(f1 - (f64)(f32)(f2 - f1));
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = (f64)(f32)(f5 * f2);
        } else {
            f0 = (f64)(f32)(f2 * f2);
            f5 = ppc_fmsubs(f5, f0, f4);
            f5 = ppc_fmadds(f5, f0, f3);
            f5 = (f64)(f32)(f5 * f2);
        }
    }
    f2 = (f64)rdf32((u32)param_2 + 0x38u);
    f1 = ppc_fmadds(f2, -f5, (f64)rdf32(param_3));
    f0 = ppc_fmadds(f2, f6, (f64)rdf32(param_3 + 8u));
    r4 = rd32((u32)param_2 + 0x18u);
    wrf32d(0x817fdfb4u, (f64)rdf32(param_3 + 4u));
    r4 = r4 + 0xcf4u;
    wrf32d(0x817fdfb0u, f1);
    r6 = rd32(0x817fdfb4u);
    wrf32d(0x817fdfb8u, f0);
    r0 = rd32(0x817fdfb8u);
    wr32(0x817fdfa4u, rd32(0x817fdfb0u));
    wr32(0x817fdfa8u, r6);
    wr32(0x817fdfacu, r0);
    a.r[0] = 0x817fdfa4u;
    a.r[1] = r4;
    a.r[2] = 0x817fdfa4u;
    (void)tc_call(0x802343a4u, &a);
    wrf32d(0x817fdfa8u, (f64)rdf32(0x80573ad8u));
    a.r[0] = 0x817fdfa4u;
    f1 = tc_callf(0x80234440u, &a);
    f31 = f1;
    if (f1 > (f64)rdf32(0x80573aecu)) {
        f1 = (f64)rdf32(0x80573ad8u);
        r0 = 0u;
        if (f1 == (f64)rdf32(0x817fdfa4u) && f1 == (f64)rdf32(0x817fdfa8u) && f1 == (f64)rdf32(0x817fdfacu)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfa4u;
            a.r[1] = 0x817fdfa4u;
            (void)tc_call(0x802343e4u, &a);
        }
        r30 = rd32((u32)param_2 + 0x18u);
        a.r[0] = r30;
        a.r[1] = 1u;
        r3 = tc_call(0x800b1048u, &a);
        if (r3 == 0u) {
            f0 = (f64)rdf32(r30 + 0xd50u);
        } else {
            f0 = (f64)(f32)((f64)rdf32(r30 + 0xd50u) * (f64)rdf32(0x80573afcu));
        }
        if (!(f31 > f0)) {
            a.f[0] = f31;
            a.r[0] = 0x817fdfa4u;
            a.r[1] = 0x817fdfa4u;
            (void)tc_call(0x802343c8u, &a);
        } else {
            r30 = rd32((u32)param_2 + 0x18u);
            a.r[0] = r30;
            a.r[1] = 1u;
            r3 = tc_call(0x800b1048u, &a);
            if (r3 == 0u) {
                f1 = (f64)rdf32(r30 + 0xd50u);
            } else {
                f1 = (f64)(f32)((f64)rdf32(r30 + 0xd50u) * (f64)rdf32(0x80573afcu));
            }
            a.f[0] = f1;
            a.r[0] = 0x817fdfa4u;
            a.r[1] = 0x817fdfa4u;
            (void)tc_call(0x802343c8u, &a);
        }
    }
    r9 = rd32((u32)param_2 + 0x18u);
    r6 = rd32(0x817fdfa4u);
    r7 = rd32(r9 + 0xd1cu);
    r0 = rd32(0x817fdfa8u);
    wr32(0x817fdf98u, rd32(r9 + 0xd18u));
    wr32(0x817fdf9cu, r7);
    wr32(0x817fdfa0u, rd32(r9 + 0xd20u));
    wr32(param_1, r6);
    wr32(param_1 + 4u, r0);
    wr32(param_1 + 8u, rd32(0x817fdfacu));
    a.r[0] = param_1;
    a.r[1] = 0x817fdf98u;
    a.r[2] = param_1;
    (void)tc_call(0x802343a4u, &a);
    return;
}
