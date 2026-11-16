#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801e29a8(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r24 = 0, r25 = 0, r26 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
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
    wr32(0x817fdf50u, 0u);
    wr32(0x817fdf54u, 0u);
    wr32(0x817fdf58u, 0u);
    wr32(0x817fdf5cu, 0u);
    wr32(0x817fdf60u, 0u);
    wr32(0x817fdf64u, 0u);
    wr32(0x817fdf68u, 0u);
    wr32(0x817fdf6cu, 0u);
    wr32(0x817fdf40u, 0x43300000u);
    wr32(0x817fdf48u, 0x43300000u);
    a.r[0] = param_r3;
    a.r[1] = 0u;
    (void)tc_call(0x801dd9ecu, &a);
    wrf32d(rd32(param_r3 + 0x1cu) + 0x18u, (f64)rdf32(0x80576200u));
    a.r[0] = param_r3;
    r3 = tc_call(0x801ddae8u, &a);
    a.f[0] = (f64)rdf32(0x80576200u);
    a.f[1] = (f64)rdf32(0x80576220u);
    a.r[0] = param_r3;
    a.r[1] = 0xe9u;
    a.r[2] = r3;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x801dda74u, &a);
    a.r[0] = param_r3;
    r3 = tc_call(0x801dda54u, &a);
    r0 = rd32(r3 + 4u);
    f0 = (f64)rdf32(0x805761f0u);
    wr32(0x817fdf34u, rd32(r3));
    wr32(0x817fdf38u, r0);
    r0 = rd32(r3 + 8u);
    wrf32d(0x817fdf30u, f0);
    wr32(0x817fdf3cu, r0);
    wrf32d(0x817fdf2cu, f0);
    wrf32d(0x817fdf28u, f0);
    a.r[0] = 0x817fdf34u;
    f1 = tc_callf(0x801dc33cu, &a);
    f29 = (f64)rdf32(0x805761f0u);
    wrf32d(0x817fdf38u, (f64)(f32)((f64)rdf32(0x805762a8u) + f1));
    a.r[0] = 2u;
    f1 = tc_callf(0x801dc57cu, &a);
    f30 = f1;
    f31 = rdf64(0x80576210u);
    f23 = (f64)rdf32(0x80576204u);
    r24 = 0u;
    f24 = (f64)rdf32(0x805761f4u);
    f25 = (f64)rdf32(0x80576200u);
    f26 = (f64)rdf32(0x8057621cu);
    f27 = (f64)rdf32(0x805762f8u);
    f28 = (f64)rdf32(0x80576298u);
    for (;;) {
        r25 = rd32(0x805709acu);
        if ((s32)r24 >= (s32)r25) break;
        f2 = (f64)rdf32(0x817fdf38u);
        f0 = (f64)rdf32(0x817fdf3cu);
        wrf32d(0x817fdf28u, (f64)rdf32(0x817fdf34u));
        wrf32d(0x817fdf2cu, f2);
        wrf32d(0x817fdf30u, f0);
        a.f[0] = f29;
        f1 = tc_callf(0x80262b10u, &a);
        r26 = rd32(0x805709b0u);
        f0 = (f64)rdf32(0x817fdf28u);
        wr32(0x817fdf44u, r26 ^ 0x80000000u);
        f0 = ppc_fmadds((f64)(f32)(rdf64(0x817fdf40u) - f31), (f64)(f32)f1, f0);
        wrf32d(0x817fdf28u, f0);
        a.f[0] = f29;
        f1 = tc_callf(0x80262704u, &a);
        wr32(0x817fdf44u, r25 ^ 0x80000000u);
        f3 = (f64)(f32)f1;
        f1 = (f64)rdf32(0x817fdf30u);
        f0 = rdf64(0x817fdf40u);
        wr32(0x817fdf4cu, r26 ^ 0x80000000u);
        f0 = (f64)(f32)(f0 - f31);
        r3 = rd32(param_r3);
        f0 = (f64)(f32)px_fdiv(f23, f0);
        f29 = ppc_fmadds(f24, f0, f29);
        wrf32d(0x817fdf30u, ppc_fmadds((f64)(f32)(rdf64(0x817fdf48u) - f31), f3, f1));
        a.r[0] = r3;
        r3 = tc_call(0x801e00fcu, &a);
        r25 = r3;
        if (r3 != 0u) {
            r3 = rd32(r3 + 0xe4u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x80320fe4u, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32(r25 + 0xe4u);
                    (void)tc_call(0x80157f30u, &a);
                }
            }
            wr32(r25 + 0xe4u, 0u);
            r4 = rd32(0x805709b4u);
            wr32(r25 + 0xe8u, 0xf7u);
            r4 = r4 ^ 0x80000000u;
            f0 = (f64)rdf32(0x817fdf28u);
            wrf32d(r25 + 0xecu, f25);
            f2 = (f64)rdf32(0x817fdf2cu);
            wrf32d(r25 + 0xf0u, f26);
            f1 = (f64)rdf32(0x817fdf30u);
            wr32(r25 + 0xf8u, 0u);
            wrf32d(r25 + 0xf4u, f23);
            wrf32d(r25 + 8u, f0);
            wr32(0x817fdf4cu, r4);
            f0 = rdf64(0x817fdf48u);
            wrf32d(r25 + 0xcu, f2);
            f0 = (f64)(f32)(f0 - f31);
            wrf32d(r25 + 0x10u, f1);
            wrf32d(r25 + 0x18cu, f0);
            wrf32d(r25 + 0x190u, f27);
            wrf32d(r25 + 0x20u, f28);
            wr32(r25 + 0x1c0u, 0x239du);
            wr32(r25 + 0x30u, 0x8080c5u);
            wrf32d(r25 + 0x24u, f30);
            a.r[0] = r25;
            a.r[1] = rd32(param_r3);
            (void)tc_call(0x801dc5acu, &a);
        }
        r24 = r24 + 1u;
    }
    return;
}
