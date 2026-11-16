#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801e0938(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r15 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0, f17 = 0.0, f18 = 0.0, f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0;
    f64 f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde60u, 0x817fe000u);
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
    wrf64(0x817fdf40u, 0.0);
    wrf32d(0x817fdf48u, 0.0);
    wrf32d(0x817fdf4cu, 0.0);
    wrf64(0x817fdf30u, 0.0);
    wrf32d(0x817fdf38u, 0.0);
    wrf32d(0x817fdf3cu, 0.0);
    wrf64(0x817fdf20u, 0.0);
    wrf32d(0x817fdf28u, 0.0);
    wrf32d(0x817fdf2cu, 0.0);
    wrf64(0x817fdf10u, 0.0);
    wrf32d(0x817fdf18u, 0.0);
    wrf32d(0x817fdf1cu, 0.0);
    wr32(0x817fdec8u, 0u);
    wr32(0x817fdeccu, 0u);
    wr32(0x817fded0u, 0u);
    wr32(0x817fded4u, 0u);
    wr32(0x817fded8u, 0u);
    wr32(0x817fdedcu, 0u);
    wr32(0x817fdee0u, 0u);
    wr32(0x817fdee4u, 0u);
    wr32(0x817fdee8u, 0u);
    wr32(0x817fdeecu, 0u);
    wr32(0x817fdef0u, 0u);
    wr32(0x817fdef4u, 0u);
    wr32(0x817fdef8u, 0u);
    wr32(0x817fdefcu, 0u);
    wr32(0x817fdf00u, 0u);
    wr32(0x817fdf04u, 0u);
    wr32(0x817fdf08u, 0u);
    wr32(0x817fdf0cu, 0u);
    wr32(0x817fdeb0u, 0x43300000u);
    r3 = rd32(param_r3);
    wr32(0x817fdeb8u, 0x43300000u);
    a.r[0] = r3;
    (void)tc_call(0x801e063cu, &a);
    a.r[0] = param_r3;
    r3 = tc_call(0x801ddaf4u, &a);
    r0 = rd32(r3 + 4u);
    wr32(0x817fdea4u, rd32(r3));
    wr32(0x817fdea8u, r0);
    wr32(0x817fdeacu, rd32(r3 + 8u));
    a.r[0] = param_r3;
    r3 = tc_call(0x801ddaf4u, &a);
    a.r[0] = 0x2395u;
    a.r[1] = r3;
    (void)tc_call(0x801dc4b4u, &a);
    a.r[0] = param_r3;
    r3 = tc_call(0x801ddae8u, &a);
    a.f[0] = (f64)rdf32(0x80576280u);
    a.f[1] = (f64)rdf32(0x80576220u);
    a.r[0] = param_r3;
    a.r[1] = 0x72u;
    a.r[2] = r3;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x801dda74u, &a);
    f29 = (f64)rdf32(0x8057621cu);
    f18 = (f64)rdf32(0x80576200u);
    f26 = rdf64(0x80576210u);
    f27 = (f64)rdf32(0x805762b0u);
    f28 = (f64)rdf32(0x805761f4u);
    f30 = (f64)rdf32(0x805761f0u);
    f31 = (f64)rdf32(0x80576228u);
    f19 = (f64)rdf32(0x80576204u);
    f20 = (f64)rdf32(0x8057622cu);
    f21 = (f64)rdf32(0x80576218u);
    f22 = (f64)rdf32(0x8057623cu);
    f24 = (f64)rdf32(0x805762a8u);
    f25 = (f64)rdf32(0x805762acu);
    wr32(0x817fdec0u, 0u);
    for (;;) {
        r3 = rd32(0x805709c0u);
        if ((s32)rd32(0x817fdec0u) >= (s32)r3) break;
        r3 = r3 ^ 0x80000000u;
        r0 = rd32(0x817fdec0u);
        wr32(0x817fdeb4u, r3);
        r0 = r0 ^ 0x80000000u;
        f0 = rdf64(0x817fdeb0u);
        wr32(0x817fdebcu, r0);
        f1 = (f64)(f32)(f0 - f26);
        f0 = rdf64(0x817fdeb8u);
        wrf32d(0x817fdea0u, f30);
        f1 = (f64)(f32)px_fdiv(f24, f1);
        wrf32d(0x817fde9cu, f30);
        wrf32d(0x817fde98u, f30);
        f0 = (f64)(f32)(f0 - f26);
        f0 = ppc_fmsubs(f1, f0, f25);
        f0 = (f64)(f32)(f28 * f0);
        f23 = (f64)(f32)px_fdiv(f0, f29);
        a.f[0] = (f64)(f32)(f28 * f23);
        f1 = tc_callf(0x80262704u, &a);
        wrf32d(0x817fde98u, (f64)(f32)f1);
        a.f[0] = (f64)(f32)(f28 * f23);
        f1 = tc_callf(0x80262b10u, &a);
        wrf32d(0x817fdea0u, f30);
        r17 = rd32(0x817fde98u);
        r31 = 0u;
        r19 = rd32(0x817fdea0u);
        wrf32d(0x817fde9cu, (f64)(f32)f1);
        r18 = rd32(0x817fde9cu);
        for (;;) {
            r0 = rd32(0x805709c4u);
            if ((s32)r31 > (s32)r0) break;
            wr32(0x817fdeb4u, r0 ^ 0x80000000u);
            f0 = rdf64(0x817fdeb0u);
            wr32(0x817fdebcu, r31 ^ 0x80000000u);
            f1 = (f64)(f32)(f0 - f26);
            f0 = rdf64(0x817fdeb8u);
            wr32(0x817fde8cu, r17);
            f1 = (f64)(f32)px_fdiv(f27, f1);
            wr32(0x817fde90u, r18);
            wr32(0x817fde94u, r19);
            wr32(0x817fde68u, r17);
            wr32(0x817fde6cu, r18);
            wr32(0x817fde70u, r19);
            f0 = (f64)(f32)(f0 - f26);
            f0 = (f64)(f32)(f1 * f0);
            f0 = (f64)(f32)(f28 * f0);
            f17 = (f64)(f32)px_fdiv(f0, f29);
            a.f[0] = f17;
            f1 = tc_callf(0x80262704u, &a);
            f23 = (f64)(f32)f1;
            a.f[0] = f17;
            f1 = tc_callf(0x80262b10u, &a);
            f5 = (f64)(f32)f1;
            f2 = (f64)rdf32(0x817fde70u);
            f4 = (f64)rdf32(0x817fde68u);
            f1 = (f64)rdf32(0x805709c8u);
            wrf32d(0x817fde8cu, ppc_fmadds(f4, f23, (f64)(f32)(f2 * f5)));
            wrf32d(0x817fde94u, ppc_fmadds(f4, -f5, (f64)(f32)(f2 * f23)));
            a.f[0] = f1;
            a.r[0] = 0x817fde8cu;
            a.r[1] = 0x817fde8cu;
            (void)tc_call(0x802343c8u, &a);
            a.r[0] = 0x817fde8cu;
            a.r[1] = 0x817fdea4u;
            a.r[2] = 0x817fde8cu;
            (void)tc_call(0x80234380u, &a);
            wrf32d(0x817fde88u, f30);
            wrf32d(0x817fde84u, f30);
            wrf32d(0x817fde80u, f30);
            a.r[0] = 0x817fde80u;
            (void)tc_call(0x801dc450u, &a);
            r5 = rd32(0x817fde84u);
            r0 = rd32(0x817fde88u);
            wr32(0x817fde74u, rd32(0x817fde80u));
            f1 = (f64)rdf32(0x80576298u);
            wr32(0x817fde78u, r5);
            wr32(0x817fde7cu, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fde74u;
            a.r[1] = 0x817fde74u;
            (void)tc_call(0x802343c8u, &a);
            a.r[0] = 0x817fde8cu;
            a.r[1] = 0x817fde74u;
            a.r[2] = 0x817fde8cu;
            (void)tc_call(0x80234380u, &a);
            wrf32d(0x817fde90u, (f64)(f32)((f64)rdf32(0x817fde90u) + f31));
            a.r[0] = rd32(param_r3);
            r3 = tc_call(0x801e063cu, &a);
            r20 = r3;
            if (r3 != 0u) {
                r15 = rd32(param_r3);
                wr32(r3 + 0x2cu, 0u);
                wrf32d(r3, (f64)rdf32(0x804890c8u));
                wrf32d(r3 + 4u, (f64)rdf32(0x804890ccu));
                wrf32d(r3 + 8u, (f64)rdf32(0x804890d0u));
                wrf32d(r3 + 0xcu, (f64)rdf32(0x804890c8u));
                wrf32d(r3 + 0x10u, (f64)rdf32(0x804890ccu));
                wrf32d(r3 + 0x14u, (f64)rdf32(0x804890d0u));
                wrf32d(r3 + 0x18u, (f64)rdf32(0x804890c8u));
                wrf32d(r3 + 0x1cu, (f64)rdf32(0x804890ccu));
                wrf32d(r3 + 0x20u, (f64)rdf32(0x804890d0u));
                wr32(r3 + 0x24u, 0u);
                wr32(r3 + 0x28u, 0u);
                r3 = tc_call(0x8025bbd4u, &a);
                r4 = (r3 >> 0x1fu) & 1u;
                if ((((r3 & 1u) ^ r4) - r4) != 0u) {
                    wr32(r20 + 0x24u, 1u);
                }
                wr32(r20 + 0x2cu, r15);
                wrf32d(r20, (f64)rdf32(0x817fde8cu));
                wrf32d(r20 + 4u, (f64)rdf32(0x817fde90u));
                wrf32d(r20 + 8u, (f64)rdf32(0x817fde94u));
                a.r[0] = r15;
                r3 = tc_call(0x801e00fcu, &a);
                r15 = r3;
                if (r3 == 0u) {
                    wr32(r20 + 0x2cu, 0u);
                    wrf32d(r20, (f64)rdf32(0x804890c8u));
                    wrf32d(r20 + 4u, (f64)rdf32(0x804890ccu));
                    wrf32d(r20 + 8u, (f64)rdf32(0x804890d0u));
                    wrf32d(r20 + 0xcu, (f64)rdf32(0x804890c8u));
                    wrf32d(r20 + 0x10u, (f64)rdf32(0x804890ccu));
                    wrf32d(r20 + 0x14u, (f64)rdf32(0x804890d0u));
                    wrf32d(r20 + 0x18u, (f64)rdf32(0x804890c8u));
                    wrf32d(r20 + 0x1cu, (f64)rdf32(0x804890ccu));
                    wrf32d(r20 + 0x20u, (f64)rdf32(0x804890d0u));
                    wr32(r20 + 0x24u, 0u);
                    wr32(r20 + 0x28u, 0u);
                } else {
                    r3 = rd32(r3 + 0xe4u);
                    f23 = (f64)rdf32(0x8057099cu);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x80320fe4u, &a);
                        if (r3 != 0u) {
                            a.r[0] = rd32(r15 + 0xe4u);
                            (void)tc_call(0x80157f30u, &a);
                        }
                    }
                    wr32(r15 + 0xe4u, 0u);
                    wr32(r15 + 0xe8u, 0x85u);
                    wrf32d(r15 + 0xecu, f18);
                    wrf32d(r15 + 0xf0u, f23);
                    wr32(r15 + 0xf8u, 0u);
                    wrf32d(r15 + 0xf4u, f19);
                    r3 = rd32(r15 + 0xfcu);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x80320fe4u, &a);
                        if (r3 != 0u) {
                            a.r[0] = rd32(r15 + 0xfcu);
                            (void)tc_call(0x80157f30u, &a);
                        }
                    }
                    wr32(r15 + 0xfcu, 0u);
                    wr32(r15 + 0x100u, 6u);
                    wrf32d(r15 + 0x104u, f18);
                    wrf32d(r15 + 0x108u, f29);
                    wr32(r15 + 0x110u, 0u);
                    wrf32d(r15 + 0x10cu, f19);
                    r3 = rd32(r15 + 0x114u);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x80320fe4u, &a);
                        if (r3 != 0u) {
                            a.r[0] = rd32(r15 + 0x114u);
                            (void)tc_call(0x80157f30u, &a);
                        }
                    }
                    wr32(r15 + 0x114u, 0u);
                    wr32(r15 + 0x118u, 0x85u);
                    wrf32d(r15 + 0x11cu, f18);
                    wrf32d(r15 + 0x120u, f20);
                    wr32(r15 + 0x128u, 0u);
                    wrf32d(r15 + 0x124u, f19);
                    r3 = rd32(r15 + 0x12cu);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x80320fe4u, &a);
                        if (r3 != 0u) {
                            a.r[0] = rd32(r15 + 0x12cu);
                            (void)tc_call(0x80157f30u, &a);
                        }
                    }
                    wr32(r15 + 0x12cu, 0u);
                    wr32(r15 + 0x130u, 0xccu);
                    wrf32d(r15 + 0x134u, f21);
                    wrf32d(r15 + 0x138u, f29);
                    wr32(r15 + 0x140u, 0u);
                    wrf32d(r15 + 0x13cu, f19);
                    r3 = rd32(r15 + 0x144u);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        r3 = tc_call(0x80320fe4u, &a);
                        if (r3 != 0u) {
                            a.r[0] = rd32(r15 + 0x144u);
                            (void)tc_call(0x80157f30u, &a);
                        }
                    }
                    wr32(r15 + 0x144u, 0u);
                    f1 = (f64)rdf32(0x8057099cu);
                    wr32(r15 + 0x148u, 0xccu);
                    wrf32d(r15 + 0x14cu, f21);
                    wrf32d(r15 + 0x150u, f29);
                    wr32(r15 + 0x158u, 0u);
                    wrf32d(r15 + 0x154u, f19);
                    wr32(r15 + 0x1bcu, 0x23a4u);
                    wrf32d(r15 + 8u, (f64)rdf32(0x817fde8cu));
                    wrf32d(r15 + 0xcu, (f64)rdf32(0x817fde90u));
                    wrf32d(r15 + 0x10u, (f64)rdf32(0x817fde94u));
                    wrf32d(r15 + 0x18cu, f1);
                    wrf32d(r15 + 0x190u, f29);
                    wrf32d(r15 + 0x20u, f22);
                    wr32(r15 + 0x30u, 0xc5u);
                    wrf32d(r15 + 0x24u, f30);
                    wr32(r15 + 0x1b0u, 0x801e0f54u);
                    wr32(r15 + 0x1b4u, 0x801e0fb8u);
                    wr32(r15 + 0x1b8u, r20);
                    a.r[0] = r15;
                    a.r[1] = 0u;
                    (void)tc_call(0x801dc5acu, &a);
                    wr32(r20 + 0x28u, r15);
                }
            }
            r31 = r31 + 1u;
        }
        wr32(0x817fdec0u, rd32(0x817fdec0u) + 1u);
    }
    return;
}
