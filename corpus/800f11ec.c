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

void fn_800f11ec(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf00u, 0x817fe000u);
    f1 = (f64)rdf32(0x80573b04u);
    wr32(0x817fe004u, 0x817ff000u);
    f3 = rdf64(0x80573b20u);
    wr32(0x817fdffcu, 0u);
    f6 = (f64)rdf32(0x80573b0cu);
    wr32(0x817fdff8u, 0u);
    f5 = (f64)rdf32(0x80573b10u);
    wr32(0x817fdff4u, 0u);
    f4 = (f64)rdf32(0x80573af8u);
    r3 = (u32)(s16)rd16((u32)param_2 + 0x40u);
    f1 = (f64)(f32)(f1 * (f64)rdf32((u32)param_2 + 0x44u));
    wr32(0x817fdfe0u, 0x43300000u);
    f0 = (f64)rdf32(0x80573b08u);
    f2 = px_ctiw(f1, ppc_fctiwz(f1));
    f1 = (f64)rdf32(0x80573af0u);
    wrf64(0x817fdfd8u, f2);
    r3 = r3 + rd32(0x817fdfdcu);
    wr16((u32)param_2 + 0x40u, (u16)r3);
    wr32(0x817fdfe4u, (u32)(s16)r3 ^ 0x80000000u);
    f2 = ppc_fmadds(f0, (f64)(f32)(rdf64(0x817fdfe0u) - f3), f1);
    if (!((f2 < f1) || (f2 == f1))) {
        f0 = (f64)rdf32(0x80573b18u);
        if (!(f2 < f0)) {
            f2 = (f64)(f32)((f64)rdf32(0x80573b14u) - (f64)(f32)(f2 - f0));
            f0 = (f64)(f32)(f2 * f2);
            f6 = ppc_fmsubs(f6, f0, f5);
            f6 = ppc_fmadds(f6, f0, f4);
            f6 = (f64)(f32)(f6 * f2);
            f6 = -f6;
        } else {
            f2 = (f64)(f32)(f2 - f1);
            f0 = (f64)(f32)(f2 * f2);
            f6 = ppc_fmsubs(f6, f0, f5);
            f6 = ppc_fmadds(f6, f0, f4);
            f6 = (f64)(f32)(f6 * f2);
            f6 = -f6;
        }
    } else {
        f1 = (f64)rdf32(0x80573b14u);
        if (!((f2 < f1) || (f2 == f1))) {
            f2 = (f64)(f32)(f1 - (f64)(f32)(f2 - f1));
            f0 = (f64)(f32)(f2 * f2);
            f6 = ppc_fmsubs(f6, f0, f5);
            f6 = ppc_fmadds(f6, f0, f4);
            f6 = (f64)(f32)(f6 * f2);
        } else {
            f0 = (f64)(f32)(f2 * f2);
            f6 = ppc_fmsubs(f6, f0, f5);
            f6 = ppc_fmadds(f6, f0, f4);
            f6 = (f64)(f32)(f6 * f2);
        }
    }
    r29 = rd32((u32)param_2 + 0x18u);
    f1 = (f64)rdf32(0x80573ad8u);
    r0 = rd32(r29 + 0xd70u);
    wrf32d(0x817fdf38u, (f64)rdf32(0x80573afcu));
    r11 = rd32(r29 + 0xd78u);
    r10 = rd32(r29 + 0xd64u);
    r8 = rd32(r29 + 0xd6cu);
    wrf32d(0x817fdf3cu, f1);
    r12 = rd32(r29 + 0xd74u);
    r9 = rd32(r29 + 0xd68u);
    f0 = (f64)rdf32(0x80573af8u);
    wr32(0x817fdf14u, r0);
    r7 = rd32(0x817fdf38u);
    wrf32d(0x817fdf40u, -f6);
    r6 = rd32(0x817fdf3cu);
    wr32(0x817fdf1cu, r11);
    r0 = rd32(0x817fdf40u);
    wr32(0x817fdf20u, r10);
    f4 = (f64)rdf32(0x817fdf14u);
    wr32(0x817fdf28u, r8);
    f2 = (f64)rdf32(0x817fdf1cu);
    f5 = (f64)rdf32(0x817fdf20u);
    f3 = (f64)rdf32(0x817fdf28u);
    wr32(0x817fdf18u, r12);
    wr32(0x817fdf24u, r9);
    wr32(0x817fdf08u, r7);
    wr32(0x817fdf0cu, r6);
    wr32(0x817fdf10u, r0);
    wrf32d(0x817fdf34u, f1);
    wrf32d(0x817fdf30u, f1);
    wrf32d(0x817fdf2cu, f1);
    wrf32d(0x817fdf48u, f0);
    wrf32d(0x817fdf58u, f1);
    wrf32d(0x817fdf68u, f1);
    wrf32d(0x817fdf4cu, f1);
    wrf32d(0x817fdf5cu, f0);
    wrf32d(0x817fdf6cu, f1);
    wrf32d(0x817fdf50u, f1);
    wrf32d(0x817fdf60u, f1);
    wrf32d(0x817fdf70u, f0);
    wrf32d(0x817fdf54u, f1);
    wrf32d(0x817fdf64u, f1);
    wrf32d(0x817fdf74u, f1);
    wrf32d(0x817fdf78u, f5);
    wrf32d(0x817fdf7cu, f1);
    wrf32d(0x817fdf80u, f4);
    wrf32d(0x817fdf84u, f1);
    wrf32d(0x817fdf88u, f1);
    wrf32d(0x817fdf8cu, f0);
    wrf32d(0x817fdf90u, f1);
    wrf32d(0x817fdf94u, f1);
    wrf32d(0x817fdf98u, f3);
    wrf32d(0x817fdf9cu, f1);
    wrf32d(0x817fdfa0u, f2);
    wrf32d(0x817fdfa4u, f1);
    a.r[0] = 0x817fdf78u;
    a.r[1] = 0x817fdf48u;
    a.r[2] = 0x817fdf48u;
    (void)tc_call(0x802337a0u, &a);
    f0 = (f64)rdf32(0x80573ad8u);
    f1 = (f64)rdf32(0x80573af8u);
    wrf32d(0x817fdfb8u, f0);
    wrf32d(0x817fdfa8u, f1);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfacu, f0);
    wrf32d(0x817fdfbcu, f1);
    wrf32d(0x817fdfccu, f0);
    wrf32d(0x817fdfb0u, f0);
    wrf32d(0x817fdfc0u, f0);
    wrf32d(0x817fdfd0u, f1);
    wrf32d(0x817fdfb4u, f0);
    wrf32d(0x817fdfc4u, f0);
    wrf32d(0x817fdfd4u, f0);
    wrf32d(0x817fdfb4u, (f64)rdf32(r29 + 0xcf4u));
    wrf32d(0x817fdfc4u, (f64)rdf32(r29 + 0xcf8u));
    wrf32d(0x817fdfd4u, (f64)rdf32(r29 + 0xcfcu));
    a.r[0] = 0x817fdfa8u;
    a.r[1] = 0x817fdf48u;
    a.r[2] = 0x817fdf48u;
    (void)tc_call(0x802337a0u, &a);
    a.r[0] = 0x817fdf2cu;
    a.r[1] = 0x817fdf48u;
    a.r[2] = 0x817fdf08u;
    (void)tc_call(0x80042474u, &a);
    r0 = rd32(0x817fdf30u);
    r4 = rd32((u32)param_2 + 0x18u) + 0xcf4u;
    wr32(param_1, rd32(0x817fdf2cu));
    wr32(param_1 + 4u, r0);
    wr32(param_1 + 8u, rd32(0x817fdf34u));
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = param_1;
    (void)tc_call(0x802343a4u, &a);
    return;
}
