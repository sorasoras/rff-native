#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801df164(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0, f5 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
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
    wr32(0x817fdf9cu, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) | 0x2000000u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        (void)tc_call(0x801df708u, &a);
        a.r[0] = param_1;
        (void)tc_call(0x801dfaf0u, &a);
        a.r[0] = rd32(param_1 + 0xd0cu);
        (void)tc_call(0x801dd8e0u, &a);
        a.r[0] = rd32(param_1 + 0xd0cu);
        r3 = tc_call(0x801dd8a8u, &a);
        if (r3 != 0u) {
            a.r[0] = param_1;
            a.r[1] = r3;
            (void)tc_call(0x801e048cu, &a);
            wrf32d(param_1 + 0xd48u, (f64)rdf32(0x804890c8u));
            wrf32d(param_1 + 0xd4cu, (f64)rdf32(0x804890ccu));
            wrf32d(param_1 + 0xd50u, (f64)rdf32(0x804890d0u));
        }
    }
    a.r[0] = param_1;
    f1 = tc_callf(0x8007e314u, &a);
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
    r3 = tc_call(rd32(rd32(param_1) + 0x70u), &a);
    if (r3 == 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x801e0558u, &a);
        f1 = tc_lastf();
        if (r3 == 0u) {
            a.r[0] = param_1;
            f1 = tc_callf(0x801df0ccu, &a);
        }
        a.r[0] = param_1;
        a.r[1] = param_1 + 0xd24u;
        a.r[2] = 0x15u;
        a.r[3] = 0x804890c8u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x34u), &a);
        a.r[0] = param_1;
        a.r[1] = param_1 + 0xd3cu;
        a.r[2] = 0x14u;
        a.r[3] = 0x804890c8u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        f1 = tc_callf(rd32(rd32(param_1) + 0x34u), &a);
        a.r[0] = param_1;
        a.r[1] = param_1 + 0xd30u;
        a.r[2] = 9u;
        a.r[3] = 0x804890c8u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x34u), &a);
        f26 = (f64)rdf32(param_1 + 0xd64u);
        f1 = tc_callf(0x801dc328u, &a);
        f1 = (f64)(f32)(f26 - f1);
        f0 = (f64)rdf32(0x805761f0u);
        if (!(f0 > f1)) {
            f0 = f1;
        }
        wrf32d(param_1 + 0xd64u, f0);
        a.r[0] = rd32(param_1 + 0xd10u);
        (void)tc_call(0x801dcd40u, &a);
        (void)tc_call(0x801dd688u, &a);
        r31 = rd32(param_1 + 0xd18u);
        r30 = 0u;
        f27 = (f64)rdf32(0x805761f0u);
        f29 = (f64)rdf32(0x805761f4u);
        f30 = (f64)rdf32(0x8057621cu);
        f31 = (f64)rdf32(0x8057627cu);
        do {
            r3 = rd32(r31 + 0x2cu);
            if (r3 != 0u) {
                r4 = rd32(r31 + 0x28u);
                r0 = (((0u - r4) | r4) >> 0x1fu) & 1u;
            } else {
                r0 = 0u;
            }
            if (r0 != 0u) {
                r4 = rd32(r31 + 0x28u);
                f1 = (f64)rdf32(r4 + 0x188u);
                f0 = (f64)rdf32(r4 + 0x18cu);
                if ((((((f1 < f0) << 0x1fu) | ((f1 > f0) << 0x1eu) | ((f1 == f0) << 0x1du) | (((f1 != f1) || (f0 != f0)) << 0x1cu)) >> 0x1fu) & 1u) == 0u) {
                    a.r[0] = r3;
                    r3 = tc_call(0x801df0bcu, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    if (r3 == 0u) {
                        a.r[0] = rd32(r31 + 0x2cu);
                        (void)tc_call(0x801df11cu, &a);
                        a.r[0] = 0x804b9da0u;
                        a.r[1] = 0x2396u;
                        f1 = tc_callf(0x8010a75cu, &a);
                        r4 = tc_lastr4();
                    }
                    r3 = rd32(r31 + 0x2cu);
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                    r0 = rd32(r3 + 4u);
                    wr32(0x817fdf64u, rd32(r3));
                    wr32(0x817fdf68u, r0);
                    wr32(0x817fdf6cu, rd32(r3 + 8u));
                    a.r[0] = 0x817fdf64u;
                    a.r[1] = r31;
                    a.r[2] = 0x817fdf64u;
                    (void)tc_call(0x802343a4u, &a);
                    wrf32d(0x817fdf78u, f27);
                    wrf32d(0x817fdf74u, f27);
                    wrf32d(0x817fdf70u, f27);
                    a.r[0] = 0x817fdf64u;
                    f1 = tc_callf(0x80234440u, &a);
                    f0 = (f64)rdf32(0x817fdf64u);
                    f28 = f1;
                    wrf32d(0x817fdf68u, f27);
                    r0 = 0u;
                    if (f27 == f0 && f27 == f27 && f27 == (f64)rdf32(0x817fdf6cu)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x817fdf64u;
                        a.r[1] = 0x817fdf64u;
                        (void)tc_call(0x802343e4u, &a);
                    }
                    f1 = (f64)rdf32(0x817fdf68u);
                    f0 = (f64)rdf32(0x817fdf6cu);
                    wrf32d(0x817fdf70u, (f64)rdf32(0x817fdf64u));
                    wrf32d(0x817fdf74u, f1);
                    wrf32d(0x817fdf78u, f0);
                    if (rd32(r31 + 0x24u) == 0u) {
                        f26 = (f64)rdf32(0x80576274u);
                    } else {
                        f26 = (f64)rdf32(0x80576270u);
                    }
                    r3 = rd32(0x817fdf68u);
                    r0 = rd32(0x817fdf6cu);
                    wr32(0x817fdf7cu, rd32(0x817fdf64u));
                    wr32(0x817fdf80u, r3);
                    wr32(0x817fdf84u, r0);
                    a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(f29 * f26), f30);
                    f1 = tc_callf(0x80262704u, &a);
                    f0 = (f64)(f32)(f29 * f26);
                    f26 = (f64)(f32)f1;
                    a.f[0] = (f64)(f32)px_fdiv(f0, f30);
                    f1 = tc_callf(0x80262b10u, &a);
                    f5 = (f64)(f32)f1;
                    f2 = (f64)rdf32(0x817fdf84u);
                    f4 = (f64)rdf32(0x817fdf7cu);
                    f1 = (f64)rdf32(0x80576278u);
                    wrf32d(0x817fdf64u, ppc_fmadds(f4, f26, (f64)(f32)(f2 * f5)));
                    wrf32d(0x817fdf6cu, ppc_fmadds(f4, -f5, (f64)(f32)(f2 * f26)));
                    a.f[0] = f1;
                    a.r[0] = 0x817fdf70u;
                    a.r[1] = 0x817fdf70u;
                    (void)tc_call(0x802343c8u, &a);
                    if (f28 < f31) {
                        a.f[0] = (f64)rdf32(0x80576200u);
                        a.r[0] = 0x817fdf70u;
                        a.r[1] = 0x817fdf70u;
                        (void)tc_call(0x802343c8u, &a);
                    }
                    a.r[0] = 0x817fdf64u;
                    a.r[1] = 0x817fdf70u;
                    a.r[2] = 0x817fdf64u;
                    (void)tc_call(0x80234380u, &a);
                    r0 = 0u;
                    if (f27 == (f64)rdf32(0x817fdf64u) && f27 == (f64)rdf32(0x817fdf68u) && f27 == (f64)rdf32(0x817fdf6cu)) {
                        r0 = 1u;
                    }
                    if (r0 == 0u) {
                        a.r[0] = 0x817fdf64u;
                        a.r[1] = 0x817fdf64u;
                        (void)tc_call(0x802343e4u, &a);
                    }
                    a.f[0] = (f64)rdf32(0x80576280u);
                    a.r[0] = 0x817fdf64u;
                    a.r[1] = 0x817fdf64u;
                    (void)tc_call(0x802343c8u, &a);
                    a.r[0] = 0x817fdf64u;
                    a.r[1] = r31 + 0x18u;
                    a.r[2] = 0x817fdf64u;
                    (void)tc_call(0x80234380u, &a);
                    a.f[0] = (f64)rdf32(0x80576284u);
                    a.r[0] = 0x817fdf64u;
                    a.r[1] = 0x817fdf64u;
                    (void)tc_call(0x802343c8u, &a);
                    wrf32d(r31 + 0x18u, (f64)rdf32(0x817fdf64u));
                    wrf32d(r31 + 0x1cu, (f64)rdf32(0x817fdf68u));
                    wrf32d(r31 + 0x20u, (f64)rdf32(0x817fdf6cu));
                    a.r[0] = 0x817fdf64u;
                    a.r[1] = r31 + 0xcu;
                    a.r[2] = 0x817fdf64u;
                    (void)tc_call(0x80234380u, &a);
                    a.f[0] = (f64)rdf32(0x80576284u);
                    a.r[0] = 0x817fdf64u;
                    a.r[1] = 0x817fdf64u;
                    (void)tc_call(0x802343c8u, &a);
                    wrf32d(r31 + 0xcu, (f64)rdf32(0x817fdf64u));
                    wrf32d(r31 + 0x10u, (f64)rdf32(0x817fdf68u));
                    wrf32d(r31 + 0x14u, (f64)rdf32(0x817fdf6cu));
                    a.r[0] = 0x817fdf64u;
                    a.r[1] = r31;
                    a.r[2] = 0x817fdf64u;
                    (void)tc_call(0x80234380u, &a);
                    wrf32d(r31, (f64)rdf32(0x817fdf64u));
                    wrf32d(r31 + 4u, (f64)rdf32(0x817fdf68u));
                    wrf32d(r31 + 8u, (f64)rdf32(0x817fdf6cu));
                    r3 = rd32(r31 + 0x28u);
                    wrf32d(r3 + 8u, (f64)rdf32(0x817fdf64u));
                    wrf32d(r3 + 0xcu, (f64)rdf32(0x817fdf68u));
                    wrf32d(r3 + 0x10u, (f64)rdf32(0x817fdf6cu));
                }
            }
            r30 = r30 + 1u;
            r31 = r31 + 0x30u;
        } while ((s32)r30 < 64);
        r28 = rd32(param_1 + 0xd1cu);
        f1 = (f64)rdf32(0x80576200u);
        wrf32d(r28 + 0x18u, (f64)(f32)((f64)(f32)((f64)(f32)((f64)rdf32(r28 + 0x18u) - f1) * (f64)rdf32(0x80576288u)) + f1));
        r30 = rd32(r28 + 0x1cu);
        if (r30 != 0u && rd32(r30 + 0x114u) != 0u) {
            r0 = rd32(r28 + 4u);
            wr32(0x817fdf58u, rd32(r28));
            wr32(0x817fdf5cu, r0);
            wr32(0x817fdf60u, rd32(r28 + 8u));
            a.r[0] = rd32(r30 + 0x114u);
            a.r[1] = 0x817fdf58u;
            (void)tc_call(0x8015811cu, &a);
            a.f[0] = (f64)rdf32(r28 + 0x18u);
            a.r[0] = rd32(r30 + 0x114u);
            (void)tc_call(0x80157f78u, &a);
        }
        a.r[0] = param_1;
        r3 = tc_call(0x801dfcbcu, &a);
        f1 = tc_lastf();
        r28 = r3;
        a.r[0] = param_1;
        a.r[1] = r3;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0xd4u), &a);
        if (r28 == 0u) {
            a.r[0] = rd32(param_1 + 0xd14u);
            (void)tc_call(0x801dd3b8u, &a);
            a.r[0] = param_1;
            f1 = tc_callf(0x8007f7e4u, &a);
            a.r[0] = param_1;
            a.r[1] = 0u;
            a.r[2] = 1u;
            a.r[3] = 8u;
            a.r[4] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x18cu), &a);
        }
    }
    return;
}
