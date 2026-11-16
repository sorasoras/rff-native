#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801e2c7c(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r19 = 0, r23 = 0, r24 = 0, r25 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f19 = 0.0, f20 = 0.0, f21 = 0.0, f22 = 0.0, f23 = 0.0, f24 = 0.0;
    f64 f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdea0u, 0x817fe000u);
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
    wr32(0x817fdefcu, 0u);
    wr32(0x817fdf00u, 0u);
    wr32(0x817fdf04u, 0u);
    wr32(0x817fdf08u, 0u);
    wr32(0x817fdf0cu, 0u);
    wr32(0x817fdf10u, 0u);
    wr32(0x817fdf14u, 0u);
    wr32(0x817fdf18u, 0u);
    wr32(0x817fdf1cu, 0u);
    wr32(0x817fdf20u, 0u);
    wr32(0x817fdf24u, 0u);
    wr32(0x817fdf28u, 0u);
    wr32(0x817fdf2cu, 0u);
    wr32(0x817fdee8u, 0x43300000u);
    wr32(0x817fdef0u, 0x43300000u);
    a.r[0] = 0x239bu;
    a.r[1] = 0u;
    (void)tc_call(0x801dc4b4u, &a);
    a.r[0] = param_r3;
    a.r[1] = 0u;
    (void)tc_call(0x801dd9ecu, &a);
    wrf32d(rd32(param_r3 + 0x1cu) + 0x18u, (f64)rdf32(0x80576204u));
    a.r[0] = param_r3;
    r3 = tc_call(0x801ddae8u, &a);
    a.f[0] = (f64)rdf32(0x80576200u);
    a.f[1] = (f64)rdf32(0x80576220u);
    a.r[0] = param_r3;
    a.r[1] = 0x51u;
    a.r[2] = r3;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x801dda74u, &a);
    a.r[0] = param_r3;
    r3 = tc_call(0x801ddae8u, &a);
    a.f[0] = (f64)rdf32(0x80576218u);
    a.f[1] = (f64)rdf32(0x805762acu);
    a.r[0] = param_r3;
    a.r[1] = 0x9au;
    a.r[2] = r3;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x801dda74u, &a);
    a.r[0] = param_r3;
    r3 = tc_call(0x801dda54u, &a);
    r0 = rd32(r3 + 4u);
    f0 = (f64)rdf32(0x805761f0u);
    wr32(0x817fded8u, rd32(r3));
    wr32(0x817fdedcu, r0);
    r0 = rd32(r3 + 8u);
    wrf32d(0x817fded4u, f0);
    wr32(0x817fdee0u, r0);
    wrf32d(0x817fded0u, f0);
    wrf32d(0x817fdeccu, f0);
    a.r[0] = 0x817fded8u;
    f1 = tc_callf(0x801dc33cu, &a);
    wrf32d(0x817fdedcu, f1);
    f23 = (f64)rdf32(0x805761f0u);
    a.r[0] = 1u;
    f1 = tc_callf(0x801dc57cu, &a);
    f24 = f1;
    f29 = (f64)rdf32(0x80576200u);
    f25 = rdf64(0x80576210u);
    r24 = 0u;
    f26 = (f64)rdf32(0x80576220u);
    r25 = 0u;
    f27 = (f64)rdf32(0x80576204u);
    f28 = (f64)rdf32(0x805761f4u);
    f30 = (f64)rdf32(0x8057621cu);
    f31 = (f64)rdf32(0x805762e4u);
    f19 = (f64)rdf32(0x805761f0u);
    f20 = (f64)rdf32(0x80576208u);
    f21 = (f64)rdf32(0x8057623cu);
    for (;;) {
        r19 = rd32(0x805709a0u);
        if ((s32)r24 >= (s32)r19) break;
        f0 = (f64)rdf32(0x817fdedcu);
        wr32(0x817fdeecu, r25 ^ 0x80000000u);
        f0 = (f64)(f32)(f0 + f26);
        f2 = (f64)rdf32(0x817fdee0u);
        f5 = (f64)(f32)(rdf64(0x817fdee8u) - f25);
        f4 = (f64)rdf32(0x805709a8u);
        wrf32d(0x817fdeccu, (f64)rdf32(0x817fded8u));
        f22 = (f64)(f32)(f4 + f5);
        wrf32d(0x817fded4u, f2);
        wrf32d(0x817fded0u, f0);
        a.f[0] = f23;
        f1 = tc_callf(0x80262b10u, &a);
        r23 = rd32(0x805709a4u);
        f0 = (f64)rdf32(0x817fdeccu);
        wr32(0x817fdef4u, r23 ^ 0x80000000u);
        f0 = ppc_fmadds((f64)(f32)(rdf64(0x817fdef0u) - f25), (f64)(f32)f1, f0);
        wrf32d(0x817fdeccu, f0);
        a.f[0] = f23;
        f1 = tc_callf(0x80262704u, &a);
        wr32(0x817fdef4u, r19 ^ 0x80000000u);
        f3 = (f64)(f32)f1;
        f1 = (f64)rdf32(0x817fded4u);
        f0 = rdf64(0x817fdef0u);
        wr32(0x817fdeecu, r23 ^ 0x80000000u);
        f0 = (f64)(f32)(f0 - f25);
        r3 = rd32(param_r3);
        f0 = (f64)(f32)px_fdiv(f27, f0);
        f23 = ppc_fmadds(f28, f0, f23);
        wrf32d(0x817fded4u, ppc_fmadds((f64)(f32)(rdf64(0x817fdee8u) - f25), f3, f1));
        a.r[0] = r3;
        r3 = tc_call(0x801e00fcu, &a);
        r23 = r3;
        if (r3 != 0u) {
            r3 = rd32(r3 + 0xe4u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(r23 + 0xe4u);
                    (void)tc_call(0x80157f30u, &a);
                }
            }
            wr32(r23 + 0xe4u, 0u);
            wr32(r23 + 0xe8u, 0x56u);
            wrf32d(r23 + 0xecu, f29);
            wrf32d(r23 + 0xf0u, f22);
            wr32(r23 + 0xf8u, 0u);
            wrf32d(r23 + 0xf4u, f27);
            r3 = rd32(r23 + 0xfcu);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(r23 + 0xfcu);
                    (void)tc_call(0x80157f30u, &a);
                }
            }
            wr32(r23 + 0xfcu, 0u);
            wr32(r23 + 0x100u, 0x22u);
            wrf32d(r23 + 0x104u, f29);
            wrf32d(r23 + 0x108u, f30);
            wr32(r23 + 0x110u, 0u);
            wrf32d(r23 + 0x10cu, f27);
            r3 = rd32(r23 + 0x114u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(r23 + 0x114u);
                    (void)tc_call(0x80157f30u, &a);
                }
            }
            wr32(r23 + 0x114u, 0u);
            wr32(r23 + 0x118u, 0x7fu);
            wrf32d(r23 + 0x11cu, f31);
            wrf32d(r23 + 0x120u, f30);
            wr32(r23 + 0x128u, 0u);
            wrf32d(r23 + 0x124u, f27);
            r3 = rd32(r23 + 0x12cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(r23 + 0x12cu);
                    (void)tc_call(0x80157f30u, &a);
                }
            }
            wr32(r23 + 0x12cu, 0u);
            f2 = (f64)rdf32(0x817fdeccu);
            wr32(r23 + 0x130u, 0x80u);
            f1 = (f64)rdf32(0x817fded0u);
            wrf32d(r23 + 0x134u, f27);
            f0 = (f64)rdf32(0x817fded4u);
            wrf32d(r23 + 0x138u, f30);
            wr32(r23 + 0x140u, 0u);
            wrf32d(r23 + 0x13cu, f27);
            wrf32d(r23 + 8u, f2);
            wrf32d(r23 + 0xcu, f1);
            wrf32d(r23 + 0x10u, f0);
            r5 = rd32(0x8048912cu);
            wr32(0x817fdec0u, rd32(0x80489128u));
            r4 = rd32(0x80489130u);
            wr32(0x817fdec4u, r5);
            f1 = (f64)rdf32(0x817fdec0u);
            wrf32d(0x817fdeacu, f20);
            f0 = (f64)rdf32(0x817fdec4u);
            wrf32d(r23 + 0x174u, f1);
            r5 = rd32(0x817fdeacu);
            wr32(0x817fdec8u, r4);
            wrf32d(0x817fdea8u, f19);
            f1 = (f64)rdf32(0x817fdec8u);
            r4 = rd32(0x817fdea8u);
            wrf32d(r23 + 0x178u, f0);
            wr32(0x817fdeb4u, r4);
            wrf32d(0x817fdeb0u, f19);
            f0 = (f64)rdf32(0x817fdeb4u);
            r4 = rd32(0x817fdeb0u);
            wrf32d(r23 + 0x17cu, f1);
            wr32(0x817fdeb8u, r5);
            f1 = (f64)rdf32(0x817fdeb8u);
            wrf32d(r23 + 0x168u, f0);
            wr32(0x817fdebcu, r4);
            f0 = (f64)rdf32(0x817fdebcu);
            wrf32d(r23 + 0x16cu, f1);
            wrf32d(r23 + 0x170u, f0);
            wrf32d(r23 + 0x184u, f21);
            wrf32d(r23 + 0x18cu, f22);
            wr32(r23 + 0x1bcu, 0x239cu);
            wr32(r23 + 0x30u, 0x2080c5u);
            wrf32d(r23 + 0x24u, f24);
            a.r[0] = r23;
            a.r[1] = rd32(param_r3);
            (void)tc_call(0x801dc5acu, &a);
        }
        r25 = r25 + 7u;
        r24 = r24 + 1u;
    }
    return;
}
