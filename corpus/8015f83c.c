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

void fn_8015f83c(u32 param_r3)
{
    u32 c1lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r21 = 0, r23 = 0;
    u32 r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0;
    f64 f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdcf0u, 0x817fe000u);
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
    wr32(0x817fdf30u, 0x43300000u);
    r5 = 0x817fdd9cu;
    wr32(0x817fdf38u, 0x43300000u);
    ctr = 0x32u;
    do {
        wr32(r5 + 4u, 0u);
        wr32(r5 + 8u, 0u);
        r5 = r5 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    f25 = (f64)rdf32(0x80574a38u);
    r23 = 0x817fdd70u;
    f26 = rdf64(0x80574a50u);
    r24 = 0u;
    wrf32d(0x817fdd78u, f25);
    r21 = 0x2du;
    f27 = (f64)rdf32(0x80574a3cu);
    wrf32d(0x817fdd74u, f25);
    f30 = (f64)rdf32(0x80574a40u);
    wrf32d(0x817fdd70u, f25);
    f29 = (f64)rdf32(0x80574a48u);
    wrf32d(0x817fdd84u, f25);
    f28 = (f64)rdf32(0x80574a44u);
    wrf32d(0x817fdd80u, f25);
    wrf32d(0x817fdd7cu, f25);
    wrf32d(0x817fdd90u, f25);
    wrf32d(0x817fdd8cu, f25);
    wrf32d(0x817fdd88u, f25);
    wrf32d(0x817fdd9cu, f25);
    wrf32d(0x817fdd98u, f25);
    wrf32d(0x817fdd94u, f25);
    f31 = (f64)rdf32(param_r3 + 0x128u);
    do {
        wr32(0x817fdf34u, r21 ^ 0x80000000u);
        f24 = (f64)(f32)px_fdiv((f64)(f32)(f27 * (f64)(f32)(rdf64(0x817fdf30u) - f26)), f30);
        if (!(f27 < f24)) {
            if ((f29 > f24) || (f29 == f24)) {
                f24 = (f64)(f32)(f28 + f24);
            }
        } else {
            f24 = (f64)(f32)(f24 - f28);
        }
        a.f[0] = f24;
        f1 = tc_callf(0x80262b10u, &a);
        wrf32d(r23, (f64)(f32)f1);
        wrf32d(r23 + 4u, f25);
        a.f[0] = f24;
        f1 = tc_callf(0x80262704u, &a);
        wrf32d(r23 + 8u, (f64)(f32)f1);
        a.f[0] = (f64)rdf32(param_r3 + 0x124u);
        a.r[0] = r23;
        a.r[1] = r23;
        (void)tc_call(0x802343c8u, &a);
        r24 = r24 + 1u;
        r23 = r23 + 0xcu;
        r21 = r21 + 0x5au;
    } while ((s32)r24 < 4);
    r6 = rd32(0x817fdd74u);
    r0 = rd32(0x817fdd78u);
    wr32(0x817fdd28u, rd32(0x817fdd70u));
    wr32(0x817fdd2cu, r6);
    wr32(0x817fdd30u, r0);
    a.r[0] = 0x817fdd28u;
    a.r[1] = 0x817fdd7cu;
    a.r[2] = 0x817fdd28u;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdd28u;
    f1 = tc_callf(0x80234440u, &a);
    r4 = tc_lastr4();
    r6 = 0u;
    r9 = 0u;
    f0 = (f64)(f32)px_fdiv(f1, f31);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdf40u, f0);
    r28 = rd32(0x817fdf44u);
    wrf64(0x817fdf48u, f0);
    r27 = rd32(0x817fdf4cu);
    if ((s32)r28 >= 10) {
        r28 = 9u;
    }
    if ((s32)r27 >= 10) {
        r27 = 9u;
    }
    r7 = 0x817fdda0u;
    r8 = 0u;
    while ((s32)r8 < (s32)r27) {
        c1lt = (s32)r28 < 0;
        r9 = 0u;
        if ((s32)r28 > 0) {
            r4 = r28 - 8u;
            if ((s32)r28 > 8) {
                r6 = 0u;
                if (!c1lt && (s32)r28 <= 2147483646) {
                    r6 = 1u;
                }
                if (r6 != 0u) {
                    r6 = r7;
                    ctr = ((r4 + 7u) >> 3u) & 0x1fffffffu;
                    if ((s32)r4 > 0) {
                        do {
                            wr32(r6, 1u);
                            r9 = r9 + 8u;
                            wr32(r6 + 4u, 1u);
                            wr32(r6 + 8u, 1u);
                            wr32(r6 + 0xcu, 1u);
                            wr32(r6 + 0x10u, 1u);
                            wr32(r6 + 0x14u, 1u);
                            wr32(r6 + 0x18u, 1u);
                            wr32(r6 + 0x1cu, 1u);
                            r6 = r6 + 0x20u;
                            ctr = ctr - 1u;
                        } while (ctr != 0u);
                    }
                }
            }
            r4 = r7 + ((r9 << 2u) & 0xfffffffcu);
            ctr = r28 - r9;
            if ((s32)r9 < (s32)r28) {
                do {
                    wr32(r4, 1u);
                    r4 = r4 + 4u;
                    r9 = r9 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
        r7 = r7 + 0x28u;
        r8 = r8 + 1u;
    }
    f0 = (f64)rdf32(0x80574a38u);
    wr8(0x817fdd3cu, (u8)rd32(param_r3 + 0x7cu));
    wr32(0x817fdd50u, 0u);
    wr32(0x817fdd54u, rd32(param_r3 + 0x138u));
    wr32(0x817fdd58u, rd32(param_r3 + 0x134u));
    wr32(0x817fdd5cu, 0u);
    wr32(0x817fdd60u, 0u);
    wrf32d(0x817fdd64u, f0);
    wrf32d(0x817fdd68u, f0);
    wrf32d(0x817fdd6cu, f0);
    a.r[0] = param_r3;
    a.r[1] = r4;
    a.r[2] = 0x80000000u;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
    r6 = rd32(0x817fdd8cu);
    r0 = rd32(0x817fdd90u);
    wr32(0x817fdd1cu, rd32(0x817fdd88u));
    wr32(0x817fdd20u, r6);
    wr32(0x817fdd24u, r0);
    a.r[0] = 0x817fdd1cu;
    a.r[1] = r3;
    a.r[2] = 0x817fdd1cu;
    (void)tc_call(0x80234380u, &a);
    r26 = 1u;
    f2 = (f64)(f32)(f31 * (f64)rdf32(0x80574a4cu));
    f28 = (f64)rdf32(0x80574a38u);
    f29 = rdf64(0x80574a50u);
    f30 = rdf64(0x80574a58u);
    f0 = (f64)(f32)((f64)rdf32(0x817fdd24u) + f2);
    wrf32d(0x817fdd1cu, (f64)(f32)((f64)rdf32(0x817fdd1cu) + f2));
    wrf32d(0x817fdd24u, f0);
    while (r26 < rd32(param_r3 + 0x130u)) {
        r0 = rd32(param_r3 + 0xf4u);
        r25 = 3u;
        wrf32d(0x817fdd18u, f28);
        r24 = 0u;
        r0 = r26 + r0;
        wr32(0x817fdd38u, r0);
        r0 = rd32(param_r3 + 0x12cu);
        wrf32d(0x817fdcfcu, f28);
        wr32(0x817fdd34u, r0);
        wrf32d(0x817fdd04u, f28);
        do {
            r3 = tc_call(0x80040b64u, &a);
            r23 = r3 - (ppc_divwu(r3, r27) * r27);
            r3 = tc_call(0x80040b64u, &a);
            r5 = r3 - (ppc_divwu(r3, r28) * r28);
            r4 = (r5 << 2u) & 0xfffffffcu;
            r3 = (r23 * 0x28u) - 0x7e802260u;
            if (rd32(r4 + r3) == 1u) {
                wr32(r4 + r3, 0u);
                r24 = 1u;
                break;
            }
            r25 = r25 - 1u;
        } while ((s32)r25 > 0);
        if (r24 != 0u) {
            wr32(0x817fdf3cu, r5 ^ 0x80000000u);
            f2 = (f64)rdf32(0x817fdd20u);
            wr32(0x817fdf34u, r23 ^ 0x80000000u);
            f4 = (f64)(f32)(rdf64(0x817fdf38u) - f29);
            f3 = (f64)rdf32(0x817fdd1cu);
            f1 = (f64)(f32)(rdf64(0x817fdf30u) - f29);
            f0 = (f64)rdf32(0x817fdd24u);
            wrf32d(0x817fdd44u, f2);
            f0 = ppc_fmadds(f1, f31, f0);
            wrf32d(0x817fdd40u, ppc_fmadds(f4, f31, f3));
            wrf32d(0x817fdd48u, f0);
            r3 = tc_call(0x80040b64u, &a);
            r5 = (r3 - (((ppc_mulhwu(0x88888889u, r3) >> 3u) & 0x1fffffffu) * 0xfu)) * 0x18u;
            r4 = ppc_mulhwu(0x6c16c16du, r5);
            wr32(0x817fdf3cu, r5 - (((((((r5 - r4) >> 1u) & 0x7fffffffu) + r4) >> 8u) & 0xffffffu) * 0x168u));
            wrf32d(0x817fdd4cu, (f64)(f32)(rdf64(0x817fdf38u) - f30));
            wr32(0x817fdd50u, rd32(param_r3 + 0x13cu));
            a.r[0] = 0x817fdd34u;
            (void)tc_call(0x800f4e20u, &a);
        }
        r26 = r26 + 1u;
    }
    return;
}
