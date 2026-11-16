#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801aeccc(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r24 = 0, r25 = 0, r26 = 0;
    f64 f0 = 0.0, f1 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf40u, 0x817fe000u);
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
    wr32(0x817fdf80u, 0u);
    wr32(0x817fdf84u, 0u);
    wr32(0x817fdf88u, 0u);
    wr32(0x817fdf8cu, 0u);
    wr32(0x817fdf90u, 0u);
    wr32(0x817fdf94u, 0u);
    wr32(0x817fdf98u, 0u);
    wr32(0x817fdf9cu, 0u);
    r0 = rd32(param_r3 + 8u);
    wr32(0x817fdf68u, 0x43300000u);
    c0lt = (s32)r0 < 2;
    wr32(0x817fdf70u, 0x43300000u);
    if (r0 == 2u) {
        f0 = (f64)rdf32(0x80575b48u);
        f1 = (f64)rdf32(rd32(param_r4 + 0x70u) + 0x54u);
        if ((f1 > f0) || (f1 == f0)) {
            a.r[0] = param_r3 + 0x18u;
            (void)tc_call(0x801c257cu, &a);
            a.r[0] = param_r3 + 0x104u;
            (void)tc_call(0x801c257cu, &a);
            if (rd32(param_r3 + 0x238u) == 0u) {
                a.r[0] = param_r3 + 0x1f0u;
                (void)tc_call(0x8006ff58u, &a);
            }
            wr32(param_r3 + 8u, rd32(param_r3 + 8u) + 1u);
        }
    } else if (!c0lt) {
        c0lt = (s32)r0 < 4;
        if (r0 == 4u) {
            if (rd32(param_r4 + 0x110u) != 0u) {
                r4 = rd32(param_r3 + 0xcu);
                r0 = r4 - 1u;
                wr32(param_r3 + 0xcu, r0);
                if ((s32)r0 > 0) {
                    wr32(param_r3 + 8u, 0u);
                } else {
                    a.r[0] = param_r4;
                    a.r[1] = r4;
                    a.r[2] = 0x43300000u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = 0.0;
                    a.f[1] = 0.0;
                    r3 = tc_call(rd32(rd32(param_r4) + 0x208u), &a);
                    a.r[0] = param_r4;
                    a.r[1] = r3;
                    a.r[2] = 1u;
                    a.r[3] = 1u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.f[0] = (f64)rdf32(0x80575af8u);
                    a.f[1] = 0.0;
                    (void)tc_call(rd32(rd32(param_r4) + 0x54u), &a);
                }
            }
        } else if (c0lt) {
            f0 = (f64)rdf32(0x80575b24u);
            f1 = (f64)rdf32(rd32(param_r4 + 0x70u) + 0x54u);
            if ((f1 > f0) || (f1 == f0)) {
                a.r[0] = param_r3 + 0x18u;
                (void)tc_call(0x801c2590u, &a);
                a.r[0] = param_r3 + 0x104u;
                (void)tc_call(0x801c2590u, &a);
                if (rd32(param_r3 + 0x238u) != 0u) {
                    a.r[0] = param_r3 + 0x1f0u;
                    (void)tc_call(0x80070068u, &a);
                }
                wr32(param_r3 + 8u, rd32(param_r3 + 8u) + 1u);
            }
        }
    } else {
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            a.r[0] = param_r4;
            a.r[1] = param_r4;
            a.r[2] = 0x43300000u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_r4) + 0x1d8u), &a);
            a.r[0] = param_r4;
            a.r[1] = r3;
            a.r[2] = 0u;
            a.r[3] = 1u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = (f64)rdf32(0x80575af8u);
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_r4) + 0x54u), &a);
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0x24bdu;
            (void)tc_call(0x8010a75cu, &a);
            wr32(param_r3 + 8u, rd32(param_r3 + 8u) + 1u);
        } else if (!c0lt) {
            f0 = (f64)rdf32(0x80575b38u);
            f1 = (f64)rdf32(rd32(param_r4 + 0x70u) + 0x54u);
            if ((f1 > f0) || (f1 == f0)) {
                wr32(0x817fdf4cu, rd32(param_r4 + 0x150u));
                wr32(0x817fdf48u, 0xau);
                a.r[0] = 0x817fdf48u;
                a.r[1] = 5u;
                f1 = tc_callf(0x8014a130u, &a);
                f27 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80575b24u));
                r3 = tc_call(0x80040b64u, &a);
                wr32(param_r3 + 0x10u, r3 & 3u);
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0x24bfu;
                (void)tc_call(0x8010a75cu, &a);
                f0 = (f64)rdf32(0x80575af4u);
                f28 = rdf64(0x80575ae8u);
                wr32(0x817fdf6cu, rd32(param_r3 + 0x10u) ^ 0x80000000u);
                r25 = param_r3;
                f26 = (f64)rdf32(0x80575b3cu);
                r26 = param_r3 + 0x18u;
                f29 = (f64)rdf32(0x80575b2cu);
                f1 = (f64)(f32)(rdf64(0x817fdf68u) - f28);
                wrf32d(0x817fdf64u, f0);
                f30 = (f64)rdf32(0x80575b00u);
                r24 = 0u;
                wrf32d(0x817fdf60u, f0);
                f26 = ppc_fmadds(f29, f1, f26);
                wrf32d(0x817fdf5cu, f0);
                f31 = (f64)rdf32(0x80575afcu);
                wrf32d(0x817fdf50u, f0);
                wrf32d(0x817fdf54u, f0);
                wrf32d(0x817fdf58u, f0);
                do {
                    a.r[0] = 0x817fdf4cu;
                    r3 = tc_call(0x80149604u, &a);
                    r3 = r3 ^ 0x80000000u;
                    r0 = rd32(param_r3 + 0x10u);
                    wr32(0x817fdf74u, r3);
                    r0 = (r0 << 2u) & 0xfffffffcu;
                    r0 = rd32(r0 - 0x7fcc4cb0u);
                    a.f[0] = (f64)rdf32(0x80575b40u);
                    a.f[1] = (f64)(f32)(f27 * (f64)(f32)(rdf64(0x817fdf70u) - f28));
                    a.r[0] = r26;
                    a.r[1] = 0u;
                    a.r[2] = 0x804890c8u;
                    a.r[3] = param_r4;
                    a.r[4] = 0u;
                    a.r[5] = r0 | 0x8047u;
                    (void)tc_call(0x801c2390u, &a);
                    f1 = (f64)rdf32(0x80575b04u);
                    wr32(0x817fdf6cu, r24 ^ 0x80000000u);
                    wrf32d(r25 + 0xfcu, ppc_fnmsubs(f30, (f64)(f32)(rdf64(0x817fdf68u) - f28), f26));
                    wrf32d(r25 + 0x100u, f29);
                    wrf32d(0x817fdf54u, f26);
                    a.f[0] = f1;
                    a.r[0] = rd32(((rd32(param_r3 + 0x10u) << 2u) & 0xfffffffcu) - 0x7fcc4cc0u);
                    a.r[1] = 0x817fdf5cu;
                    a.r[2] = 0x817fdf50u;
                    a.r[3] = 0x804890c8u;
                    (void)tc_call(0x800d783cu, &a);
                    r24 = r24 + 1u;
                    f26 = (f64)(f32)(f26 + f31);
                    r26 = r26 + 0xecu;
                    r25 = r25 + 0xecu;
                } while ((s32)r24 < 2);
                a.r[0] = 0x817fdf4cu;
                r3 = tc_call(0x80149604u, &a);
                r3 = r3 ^ 0x80000000u;
                r0 = rd32(param_r3 + 0x10u);
                wr32(0x817fdf74u, r3);
                r0 = (r0 << 2u) & 0xfffffffcu;
                r0 = rd32(r0 - 0x7fcc4cb0u);
                a.f[0] = (f64)rdf32(0x80575b44u);
                a.f[1] = (f64)(f32)(rdf64(0x817fdf70u) - rdf64(0x80575ae8u));
                a.r[0] = param_r3 + 0x1f0u;
                a.r[1] = 0u;
                a.r[2] = 0x804890c8u;
                a.r[3] = param_r4;
                a.r[4] = 0u;
                a.r[5] = r0 | 0x8047u;
                (void)tc_call(0x8006f570u, &a);
                wr32(param_r3 + 8u, rd32(param_r3 + 8u) + 1u);
            }
        }
    }
    return;
}
