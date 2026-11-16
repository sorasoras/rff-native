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

void fn_801a2b64(u32 param_1, u32 param_2, u32 param_3, f64 param_f1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r12 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0;
    u32 r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
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
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf60u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    wr32(0x817fdf70u, 0u);
    wr32(0x817fdf74u, 0u);
    wr32(0x817fdf78u, 0u);
    wr32(0x817fdf7cu, 0u);
    r7 = rd32(param_1 + 0x78u);
    r6 = rd32(param_1 + 0x7cu);
    r0 = rd32(param_1 + 0x80u);
    r12 = rd32(rd32(param_1) + 0x28u);
    wr32(0x817fdf28u, r7);
    wr32(0x817fdf2cu, r6);
    wr32(0x817fdf30u, r0);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = r6;
    a.r[4] = r7;
    a.f[0] = param_f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(r12, &a);
    wr32(0x817fdf3cu, param_3 ^ 0x80000000u);
    f0 = (f64)rdf32(0x8057590cu);
    wr32(0x817fdf38u, 0x43300000u);
    f2 = (f64)(f32)(f0 * param_f1);
    f1 = rdf64(0x805758a8u);
    r21 = (u32)((s32)(((param_3 >> 0x1fu) & 1u) + param_3) >> 1);
    r6 = rd32(0x804863d8u);
    r5 = rd32(r3);
    f30 = (f64)(f32)px_fdiv(f2, (f64)(f32)(rdf64(0x817fdf38u) - f1));
    r4 = rd32(r3 + 4u);
    r0 = rd32(r3 + 8u);
    r12 = rd32(rd32(r6) + 0x28u);
    wr32(0x817fdf1cu, r5);
    wr32(0x817fdf20u, r4);
    f25 = (f64)rdf32(r6 + 0xb4u);
    wr32(0x817fdf24u, r0);
    a.r[0] = r6;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = 0u;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(r12, &a);
    f24 = ppc_fmadds((f64)rdf32(0x80575910u), f25, (f64)rdf32(r3 + 4u));
    a.r[0] = rd32(param_1 + 0x70u);
    a.r[1] = rd32(0x80371024u);
    r3 = tc_call(0x80031be0u, &a);
    if (r3 != 0u) {
        r3 = rd32(r3 + 0x50u);
        f1 = (f64)rdf32(r3 + 0x1cu);
        f0 = (f64)rdf32(r3 + 0x2cu);
        wrf32d(0x817fdf1cu, (f64)rdf32(r3 + 0xcu));
        wrf32d(0x817fdf20u, f1);
        wrf32d(0x817fdf24u, f0);
    }
    wrf32d(0x817fdf20u, f24);
    r31 = param_2 - r21;
    r22 = rd32(0x817fdf28u);
    r23 = rd32(0x817fdf2cu);
    r21 = param_2 + 1u - r21;
    r24 = rd32(0x817fdf30u);
    f31 = rdf64(0x805758a8u);
    f25 = (f64)rdf32(0x80575868u);
    f26 = (f64)rdf32(0x805758b8u);
    f27 = (f64)rdf32(0x805758c4u);
    f28 = (f64)rdf32(0x805758c0u);
    f29 = (f64)rdf32(0x80575914u);
    while ((s32)r31 < (s32)r21) {
        wr32(0x817fdf38u, 0x43300000u);
        wr32(0x817fdf3cu, r31 ^ 0x80000000u);
        f0 = rdf64(0x817fdf38u);
        wr32(0x817fdf10u, r22);
        f0 = (f64)(f32)(f0 - f31);
        wr32(0x817fdf14u, r23);
        wr32(0x817fdf18u, r24);
        wr32(0x817fdf04u, r22);
        wr32(0x817fdf08u, r23);
        wr32(0x817fdf0cu, r24);
        a.f[0] = (f64)(f32)(f0 * f30);
        f1 = tc_callf(0x80262704u, &a);
        wr32(0x817fdf40u, 0x43300000u);
        f24 = (f64)(f32)f1;
        wr32(0x817fdf44u, r31 ^ 0x80000000u);
        a.f[0] = (f64)(f32)((f64)(f32)(rdf64(0x817fdf40u) - f31) * f30);
        f1 = tc_callf(0x80262b10u, &a);
        f5 = (f64)(f32)f1;
        f2 = (f64)rdf32(0x817fdf0cu);
        f4 = (f64)rdf32(0x817fdf04u);
        f1 = (f64)rdf32(0x80575868u);
        wrf32d(0x817fdf10u, ppc_fmadds(f4, f24, (f64)(f32)(f2 * f5)));
        wrf32d(0x817fdf18u, ppc_fmadds(f4, -f5, (f64)(f32)(f2 * f24)));
        a.f[0] = f1;
        a.r[0] = 0xffffffffu;
        a.r[1] = 1u;
        r3 = tc_call(0x8017748cu, &a);
        r20 = r3;
        if (r3 != 0u) {
            f2 = (f64)rdf32(0x817fdf1cu);
            wr32(r3 + 0x124u, 0x8085u);
            f1 = (f64)rdf32(0x817fdf20u);
            wrf32d(r3 + 0x100u, f2);
            f0 = (f64)rdf32(0x817fdf24u);
            wrf32d(r3 + 0x104u, f1);
            wrf32d(r3 + 0x108u, f0);
            wrf32d(r3 + 8u, f2);
            wrf32d(r3 + 0xcu, f1);
            wrf32d(r3 + 0x10u, f0);
            wr32(r3 + 0x14cu, 0x7du);
            r0 = (u32)rd8(r3 + 0x1a4u);
            wr32(r3 + 0x150u, 0xf9du);
            r0 = r0 | 0xe0u;
            wr8(r3 + 0x1a4u, (u8)r0);
            wrf32d(r3 + 0x128u, (f64)rdf32(param_1 + 0xd40u));
            wrf32d(r3 + 0x12cu, (f64)rdf32(param_1 + 0xd44u));
            wrf32d(r3 + 0x134u, (f64)rdf32(param_1 + 0xd48u));
            wrf32d(0x817fdf00u, f25);
            wrf32d(0x817fdefcu, f25);
            wrf32d(0x817fdef8u, f25);
            a.r[0] = 0x817fdf10u;
            a.r[1] = 0x817fdef8u;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdef8u);
            a.f[1] = (f64)rdf32(0x817fdf00u);
            f1 = tc_callf(0x80262c68u, &a);
            if (f26 < (f64)(f32)f1) {
                a.f[0] = (f64)rdf32(0x817fdef8u);
                a.f[1] = (f64)rdf32(0x817fdf00u);
                f1 = tc_callf(0x80262c68u, &a);
                f0 = (f64)(f32)((f64)(f32)f1 - f28);
            } else {
                a.f[0] = (f64)rdf32(0x817fdef8u);
                a.f[1] = (f64)rdf32(0x817fdf00u);
                f1 = tc_callf(0x80262c68u, &a);
                f0 = (f64)(f32)f1;
                if ((f27 > f0) || (f27 == f0)) {
                    a.f[0] = (f64)rdf32(0x817fdef8u);
                    a.f[1] = (f64)rdf32(0x817fdf00u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f0 = (f64)(f32)(f28 + (f64)(f32)f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdef8u);
                    a.f[1] = (f64)rdf32(0x817fdf00u);
                    f1 = tc_callf(0x80262c68u, &a);
                    f0 = (f64)(f32)f1;
                }
            }
            f0 = (f64)(f32)(f29 * f0);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdf40u, f0);
            wr16(r20 + 0x142u, (u16)rd32(0x817fdf44u));
            wr32(r20 + 0x148u, 0x64u);
            a.r[0] = r20;
            a.r[1] = 0u;
            f1 = tc_callf(0x80177d54u, &a);
            f0 = (f64)rdf32(param_1 + 0xf64u);
            wrf32d(r20 + 0x130u, f0);
            wrf32d(r20 + 0x24u, f0);
            wrf32d(r20 + 0x174u, (f64)rdf32(param_1 + 0xd4cu));
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x100u), &a);
            f1 = tc_lastf();
            wr8(r20 + 0x28u, (u8)r3);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x108u), &a);
            f1 = tc_lastf();
            wr8(r20 + 0x29u, (u8)r3);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x110u), &a);
            f1 = tc_lastf();
            wr8(r20 + 0x2au, (u8)r3);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x118u), &a);
            wr8(r20 + 0x2bu, (u8)r3);
        }
        r31 = r31 + 1u;
    }
    return;
}
