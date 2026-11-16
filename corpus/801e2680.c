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

void fn_801e2680(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r21 = 0, r22 = 0;
    f64 f0 = 0.0, f1 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdef0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, 0.0);
    wrf32d(0x817fdfccu, 0.0);
    wrf64(0x817fdfb0u, 0.0);
    wrf32d(0x817fdfb8u, 0.0);
    wrf32d(0x817fdfbcu, 0.0);
    wrf64(0x817fdfa0u, 0.0);
    wrf32d(0x817fdfa8u, 0.0);
    wrf32d(0x817fdfacu, 0.0);
    wrf64(0x817fdf90u, 0.0);
    wrf32d(0x817fdf98u, 0.0);
    wrf32d(0x817fdf9cu, 0.0);
    wrf64(0x817fdf80u, 0.0);
    wrf32d(0x817fdf88u, 0.0);
    wrf32d(0x817fdf8cu, 0.0);
    wrf64(0x817fdf70u, 0.0);
    wrf32d(0x817fdf78u, 0.0);
    wrf32d(0x817fdf7cu, 0.0);
    wrf64(0x817fdf60u, 0.0);
    wrf32d(0x817fdf68u, 0.0);
    wrf32d(0x817fdf6cu, 0.0);
    wrf64(0x817fdf50u, 0.0);
    wrf32d(0x817fdf58u, 0.0);
    wrf32d(0x817fdf5cu, 0.0);
    wr32(0x817fdf24u, 0u);
    wr32(0x817fdf28u, 0u);
    wr32(0x817fdf2cu, 0u);
    wr32(0x817fdf30u, 0u);
    wr32(0x817fdf34u, 0u);
    wr32(0x817fdf38u, 0u);
    wr32(0x817fdf3cu, 0u);
    wr32(0x817fdf40u, 0u);
    wr32(0x817fdf44u, 0u);
    wr32(0x817fdf48u, 0u);
    wr32(0x817fdf4cu, 0u);
    a.r[0] = param_r3;
    a.r[1] = 0u;
    (void)tc_call(0x801dd9ecu, &a);
    a.r[0] = param_r3;
    r3 = tc_call(0x801ddae8u, &a);
    a.r[0] = 0x239au;
    a.r[1] = r3;
    (void)tc_call(0x801dc4b4u, &a);
    wrf32d(rd32(param_r3 + 0x1cu) + 0x18u, (f64)rdf32(0x80576280u));
    a.r[0] = param_r3;
    r3 = tc_call(0x801dda68u, &a);
    f0 = (f64)rdf32(0x805761f0u);
    wrf32d(0x817fdf00u, f0);
    wrf32d(0x817fdefcu, f0);
    wrf32d(0x817fdef8u, f0);
    a.r[0] = r3;
    a.r[1] = 0x817fdef8u;
    (void)tc_call(0x802343e4u, &a);
    a.f[0] = (f64)rdf32(0x817fdef8u);
    a.f[1] = (f64)rdf32(0x817fdf00u);
    f1 = tc_callf(0x80262c68u, &a);
    f1 = (f64)(f32)f1;
    if (!((f64)rdf32(0x805761f4u) < f1)) {
        a.f[0] = (f64)rdf32(0x817fdef8u);
        a.f[1] = (f64)rdf32(0x817fdf00u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)rdf32(0x805761fcu);
        if (!((f0 > f1) || (f0 == f1))) {
            a.f[0] = (f64)rdf32(0x817fdef8u);
            a.f[1] = (f64)rdf32(0x817fdf00u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
        } else {
            a.f[0] = (f64)rdf32(0x817fdef8u);
            a.f[1] = (f64)rdf32(0x817fdf00u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f1 = (f64)(f32)((f64)rdf32(0x805761f8u) + f1);
        }
    } else {
        a.f[0] = (f64)rdf32(0x817fdef8u);
        a.f[1] = (f64)rdf32(0x817fdf00u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f1 = (f64)(f32)(f1 - (f64)rdf32(0x805761f8u));
    }
    r6 = rd32(param_r3);
    f31 = (f64)rdf32(0x805762f0u);
    r5 = rd32(r6 + 0x1ecu);
    r0 = rd32(r6 + 0x1f4u);
    f21 = ppc_fnmsubs(f31, (f64)rdf32(0x80576218u), f1);
    wr32(0x817fdf08u, rd32(r6 + 0x1f0u));
    f0 = (f64)rdf32(0x80576220u);
    wr32(0x817fdf04u, r5);
    wr32(0x817fdf0cu, r0);
    wrf32d(0x817fdf08u, f0);
    a.r[0] = 3u;
    f1 = tc_callf(0x801dc57cu, &a);
    f22 = f1;
    f23 = rdf64(0x80576210u);
    f24 = (f64)rdf32(0x817fdf04u);
    f25 = (f64)rdf32(0x817fdf08u);
    f26 = (f64)rdf32(0x817fdf0cu);
    r22 = 0u;
    f27 = (f64)rdf32(0x80576200u);
    f28 = (f64)rdf32(0x8057623cu);
    f29 = (f64)rdf32(0x805762f4u);
    f30 = (f64)rdf32(0x805762a8u);
    do {
        wr32(0x817fdf14u, 0x80000014u);
        f1 = (f64)rdf32(0x805761f0u);
        wr32(0x817fdf10u, 0x43300000u);
        f21 = (f64)(f32)(f21 + (f64)(f32)px_fdiv(f31, (f64)(f32)(rdf64(0x817fdf10u) - f23)));
        a.f[0] = f1;
        a.r[0] = 0xffffffffu;
        a.r[1] = 1u;
        r3 = tc_call(0x8017748cu, &a);
        r21 = r3;
        if (r3 == 0u) break;
        wr32(r3 + 0x124u, 0x80c5u);
        wrf32d(r3 + 0x100u, f24);
        wrf32d(r3 + 0x104u, f25);
        wrf32d(r3 + 0x108u, f26);
        wrf32d(r3 + 8u, f24);
        wrf32d(r3 + 0xcu, f25);
        wrf32d(r3 + 0x10u, f26);
        wr32(r3 + 0x14cu, 0xb3u);
        wrf32d(r3 + 0x144u, f27);
        r3 = tc_call(0x80040b64u, &a);
        f0 = (f64)(f32)(f29 * f21);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdf10u, f0);
        r0 = rd32(0x817fdf14u);
        wr32(r21 + 0x16cu, r3 - (((ppc_mulhwu(0xcccccccdu, r3) >> 4u) & 0xfffffffu) * 0x14u));
        wr32(r21 + 0x160u, 0xccu);
        wr32(r21 + 0x154u, 0xccu);
        wr8(r21 + 0x1a4u, (u8)((u32)rd8(r21 + 0x1a4u) | 0x60u));
        wrf32d(r21 + 0x128u, f28);
        wr16(r21 + 0x142u, (u16)r0);
        wr16(r21 + 0x140u, 0xf3c7u);
        wrf32d(r21 + 0x134u, f30);
        wr32(r21 + 0x148u, 0xa0u);
        a.r[0] = r21;
        a.r[1] = 0x23a4u;
        (void)tc_call(0x8017975cu, &a);
        a.r[0] = r21;
        a.r[1] = 0x23a4u;
        (void)tc_call(0x80179718u, &a);
        wrf32d(r21 + 0x130u, f22);
        wrf32d(r21 + 0x24u, f22);
        a.r[0] = r21;
        a.r[1] = rd32(param_r3);
        (void)tc_call(0x80177d54u, &a);
        r22 = r22 + 1u;
    } while ((s32)r22 < 20);
    return;
}
