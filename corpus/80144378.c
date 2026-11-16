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

u32 fn_80144378(u32 param_1, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r6 = param_r6;
    r7 = param_r7;
    r8 = param_r8;
    r9 = param_r9;
    wr32(0x817fdcf0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    f0 = (f64)rdf32(0x80574490u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    r5 = rd32(0x80571100u);
    wr32(0x817fdfc0u, 0x43300000u);
    wr32(0x817fdfc8u, 0x43300000u);
    wrf32d(0x804879c4u, f0);
    wrf32d(0x80488b5cu, f0);
    if (r5 != 1u) {
        f0 = (f64)rdf32(0x805744f0u);
    } else {
        f0 = (f64)rdf32(0x805744f4u);
    }
    r4 = rd32(param_1 + 0xa4u);
    wrf32d(param_1 + 0xbcu, f0);
    if (r4 != 0u) {
        a.r[0] = 0x803cb934u;
        a.r[1] = r4;
        f1 = tc_callf(0x8007b03cu, &a);
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
    }
    r4 = rd32(param_1);
    r0 = rd32(r4 + 0x48u);
    c0lt = (s32)r0 < 5;
    if (r0 == 5u) {
        if (rd32(param_1 + 0xa4u) == 0u) {
            r4 = rd32(r4 + 0x28u);
            a.r[0] = 0x80472f48u;
            a.r[1] = r4;
            r3 = tc_call(0x800bede4u, &a);
            r29 = r3;
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x48u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x48u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x48u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = r29;
                (void)tc_call(0x800514a0u, &a);
            }
            wr32(param_1 + 0xa4u, r30);
            f4 = (f64)rdf32(param_1 + 0xa8u);
            f2 = (f64)rdf32(param_1 + 0xacu);
            f7 = (f64)rdf32(0x80574500u);
            f1 = (f64)rdf32(0x80574504u);
            r8 = (rd32(rd32(param_1) + 0x28u) * 0x34u) - 0x7fb60e50u;
            r5 = rd32(r8 + 0x286cu);
            wr32(0x817fdd28u, rd32(r8 + 0x2868u));
            r7 = rd32(r8 + 0x2874u);
            wr32(0x817fdd2cu, r5);
            r0 = rd32(r8 + 0x2870u);
            r6 = rd32(r8 + 0x2878u);
            r5 = rd32(r8 + 0x287cu);
            f0 = (f64)rdf32(0x817fdd2cu);
            f3 = (f64)(f32)(f4 + (f64)rdf32(0x817fdd28u));
            wr32(0x817fdd34u, r7);
            f2 = (f64)(f32)(f2 + f0);
            wr32(0x817fdd30u, r0);
            f4 = (f64)rdf32(0x817fdd34u);
            wr32(0x817fdd38u, r6);
            f0 = (f64)rdf32(0x817fdd30u);
            f6 = (f64)(f32)(f7 * f4);
            wr32(0x817fdd3cu, r5);
            f5 = (f64)rdf32(0x817fdd38u);
            f4 = (f64)rdf32(0x817fdd3cu);
            wrf32d(param_1 + 0xa8u, f3);
            f5 = (f64)(f32)(f7 * f5);
            wrf32d(param_1 + 0xacu, f2);
            wrf32d(param_1 + 0xb0u, f0);
            r6 = rd32(r8 + 0x2880u);
            r5 = rd32(r8 + 0x2884u);
            r0 = rd32(r8 + 0x2888u);
            wrf32d(0x817fdd34u, f6);
            wrf32d(0x817fdd38u, f5);
            wrf32d(0x817fdd3cu, (f64)(f32)(f7 * f4));
            wr32(0x817fdd04u, r6);
            wr32(0x817fdd08u, r5);
            wr32(0x817fdd0cu, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdd04u;
            a.r[1] = 0x817fdd04u;
            (void)tc_call(0x802343c8u, &a);
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r3 = rd32(param_1 + 0xa4u);
            f2 = (f64)rdf32(0x817fdd34u);
            wrf32d(r3 + 0x1cu, (f64)rdf32(0x817fdd04u));
            f1 = (f64)rdf32(0x817fdd38u);
            f0 = (f64)rdf32(0x817fdd3cu);
            wrf32d(r3 + 0x20u, (f64)rdf32(0x817fdd08u));
            f3 = (f64)rdf32(0x817fdd0cu);
            wrf32d(r3 + 0x24u, f3);
            r3 = rd32(param_1 + 0xa4u);
            wrf32d(r3 + 0x10u, f2);
            wrf32d(r3 + 0x14u, f1);
            wrf32d(r3 + 0x18u, f0);
            f2 = (f64)rdf32(param_1 + 0xb0u);
            f1 = (f64)rdf32(param_1 + 0xacu);
            r3 = rd32(param_1 + 0xa4u);
            wrf32d(r3 + 4u, (f64)(f32)((f64)rdf32(param_1 + 0xa8u) + (f64)rdf32(param_1 + 0xb4u)));
            wrf32d(r3 + 8u, f1);
            wrf32d(r3 + 0xcu, f2);
        }
        r3 = rd32(param_1 + 0x24u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x8004c630u, &a);
            f1 = tc_lastf();
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            if ((s32)r3 > 1) {
                wr32(param_1 + 0x28u, 1u);
            }
        }
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = 0x817fdd80u;
        a.r[1] = 0x8033a540u;
        a.r[2] = rd32(rd32(param_1) + 0x2cu);
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x8025b994u, &a);
        a.f[0] = (f64)(f32)((rdf64(0x80574510u) * (rdf64(0x80574518u) - (f64)rdf32(param_1 + 0xbcu))) + rdf64(0x80574508u));
        a.f[1] = (f64)rdf32(0x80574520u);
        a.f[2] = (f64)rdf32(0x805744fcu);
        a.f[3] = (f64)rdf32(0x805744f8u);
        a.r[0] = 0x817fdd80u;
        a.r[1] = 3u;
        (void)tc_call(0x80052904u, &a);
        a.r[0] = rd32(rd32(param_1) + 0x28u);
        r3 = tc_call(0x800cd694u, &a);
        a.r[0] = 0x817fdf40u;
        a.r[1] = r3;
        (void)tc_call(0x8025e7c0u, &a);
        a.r[0] = 0x817fdf40u;
        r3 = tc_call(0x8025e7a4u, &a);
        r4 = rd32(param_1);
        wr32(0x817fdfc4u, r3);
        r7 = rd32(r4 + 0x28u);
        r4 = rd32(r4 + 0x2cu) & 0xffu;
        f0 = rdf64(0x817fdfc0u);
        f4 = rdf64(0x805744b0u);
        wr32(0x817fdfc4u, (r4 - 1u) ^ 0x80000000u);
        f31 = (f64)(f32)(f0 - f4);
        f1 = rdf64(0x805744c0u);
        f0 = rdf64(0x817fdfc0u);
        wr32(0x817fdfccu, (u32)rd8((((r7 - 0x55u) << 3u) & 0xfffffff8u) - 0x7fb5e9c8u));
        f2 = f0 - f1;
        f1 = rdf64(0x80574530u);
        f3 = rdf64(0x817fdfc8u) - f4;
        f0 = f3 * ((f1 * f2) + rdf64(0x80574528u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfd0u, f0);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fdec0u;
        a.r[1] = 0x40u;
        a.r[2] = 0x80364474u;
        a.r[3] = rd32(0x817fdfd4u) & 0xffffu;
        a.r[4] = r7;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8025e640u, &a);
        a.r[0] = 0x817fdec0u;
        r3 = tc_call(0x8025e7a4u, &a);
        wr32(0x817fdfccu, r3);
        f31 = ppc_fmadds((f64)(f32)(rdf64(0x817fdfc8u) - rdf64(0x805744b0u)), (f64)rdf32(0x805744e4u), f31);
        a.r[0] = 0x817fdf40u;
        a.r[1] = 0x817fdec0u;
        (void)tc_call(0x8025e820u, &a);
        f4 = (f64)rdf32(0x805744f8u);
        a.f[0] = ppc_fnmsubs((f64)(f32)(f31 * (f64)rdf32(0x805744e4u)), (f64)(f32)(f4 * (f64)rdf32(param_1 + 0xbcu)), (f64)rdf32(0x80574538u));
        a.f[1] = (f64)rdf32(0x8057453cu);
        a.f[2] = (f64)rdf32(0x805744fcu);
        a.f[3] = f4;
        a.r[0] = 0x817fdf40u;
        a.r[1] = 3u;
        (void)tc_call(0x80052a08u, &a);
        a.r[0] = 0x15u;
        a.r[1] = 5u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.r[0] = r3;
        r3 = tc_call(0x8025e7a4u, &a);
        wr32(0x817fdfc4u, r3);
        f31 = (f64)(f32)(rdf64(0x817fdfc0u) - rdf64(0x805744b0u));
        a.r[0] = 0x15u;
        a.r[1] = 5u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        f4 = (f64)rdf32(0x80574540u);
        a.f[0] = ppc_fnmsubs((f64)(f32)(f31 * (f64)rdf32(0x805744e4u)), (f64)(f32)(f4 * (f64)rdf32(param_1 + 0xbcu)), (f64)rdf32(0x80574538u));
        a.f[1] = (f64)rdf32(0x80574544u);
        a.f[2] = (f64)rdf32(0x805744fcu);
        a.f[3] = f4;
        a.r[0] = r3;
        a.r[1] = 3u;
        (void)tc_call(0x80052a08u, &a);
    } else if (!c0lt) {
        if ((s32)r0 < 7) {
            a.r[0] = 0x15u;
            a.r[1] = 6u;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            a.r[0] = r3;
            r3 = tc_call(0x8025e7a4u, &a);
            r30 = r3;
            a.r[0] = 0x15u;
            a.r[1] = 6u;
            a.r[2] = 0u;
            r3 = tc_call(0x801412f8u, &a);
            wr32(0x817fdfc4u, r30);
            f4 = (f64)rdf32(0x805744f8u);
            f3 = (f64)(f32)(rdf64(0x817fdfc0u) - rdf64(0x805744b0u));
            f0 = (f64)rdf32(param_1 + 0xbcu);
            f2 = (f64)rdf32(0x805744e4u);
            wr32(0x817fdfccu, 0x80000140u);
            a.f[0] = ppc_fnmsubs((f64)(f32)(f3 * f2), (f64)(f32)(f4 * f0), (f64)(f32)(rdf64(0x817fdfc8u) - rdf64(0x805744c0u)));
            a.f[1] = (f64)rdf32(0x805744ecu);
            a.f[2] = (f64)rdf32(0x805744fcu);
            a.f[3] = f4;
            a.r[0] = r3;
            a.r[1] = 3u;
            (void)tc_call(0x80052a08u, &a);
        }
    } else if ((s32)r0 >= 4) {
        if (rd32(param_1 + 0xa4u) == 0u) {
            r4 = rd32(r4 + 0x28u);
            a.r[0] = 0x80472f48u;
            a.r[1] = r4;
            r3 = tc_call(0x800bede4u, &a);
            r29 = r3;
            r3 = tc_call(0x800545e4u, &a);
            r4 = r3;
            if (rd32(r3 + 0x10u) == 0u) {
                if (rd32(r3 + 0x20u) == 0u) {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0x48u;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040cd8u, &a);
                } else {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = 0x20u;
                    a.r[2] = 0x48u;
                    r3 = tc_call(0x80094e80u, &a);
                }
                r30 = r3;
            } else {
                r3 = rd32(r3);
                a.r[0] = r3;
                a.r[1] = 0x48u;
                a.r[2] = rd32(r4 + 0xcu);
                a.r[3] = r4 + 0x18u;
                r3 = tc_call(0x80040db8u, &a);
                r30 = r3;
            }
            if (r3 != 0u) {
                r3 = r3;
                a.r[0] = r3;
                a.r[1] = r29;
                (void)tc_call(0x800514a0u, &a);
            }
            wr32(param_1 + 0xa4u, r30);
            f4 = (f64)rdf32(param_1 + 0xa8u);
            f2 = (f64)rdf32(param_1 + 0xacu);
            f7 = (f64)rdf32(0x80574500u);
            f1 = (f64)rdf32(0x80574504u);
            r8 = (rd32(rd32(param_1) + 0x28u) * 0x34u) - 0x7fb60e50u;
            r5 = rd32(r8 + 0x286cu);
            wr32(0x817fdd10u, rd32(r8 + 0x2868u));
            r7 = rd32(r8 + 0x2874u);
            wr32(0x817fdd14u, r5);
            r0 = rd32(r8 + 0x2870u);
            r6 = rd32(r8 + 0x2878u);
            r5 = rd32(r8 + 0x287cu);
            f0 = (f64)rdf32(0x817fdd14u);
            f3 = (f64)(f32)(f4 + (f64)rdf32(0x817fdd10u));
            wr32(0x817fdd1cu, r7);
            f2 = (f64)(f32)(f2 + f0);
            wr32(0x817fdd18u, r0);
            f4 = (f64)rdf32(0x817fdd1cu);
            wr32(0x817fdd20u, r6);
            f0 = (f64)rdf32(0x817fdd18u);
            f6 = (f64)(f32)(f7 * f4);
            wr32(0x817fdd24u, r5);
            f5 = (f64)rdf32(0x817fdd20u);
            f4 = (f64)rdf32(0x817fdd24u);
            wrf32d(param_1 + 0xa8u, f3);
            f5 = (f64)(f32)(f7 * f5);
            wrf32d(param_1 + 0xacu, f2);
            wrf32d(param_1 + 0xb0u, f0);
            r6 = rd32(r8 + 0x2880u);
            r5 = rd32(r8 + 0x2884u);
            r0 = rd32(r8 + 0x2888u);
            wrf32d(0x817fdd1cu, f6);
            wrf32d(0x817fdd20u, f5);
            wrf32d(0x817fdd24u, (f64)(f32)(f7 * f4));
            wr32(0x817fdcf8u, r6);
            wr32(0x817fdcfcu, r5);
            wr32(0x817fdd00u, r0);
            a.f[0] = f1;
            a.r[0] = 0x817fdcf8u;
            a.r[1] = 0x817fdcf8u;
            (void)tc_call(0x802343c8u, &a);
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            r3 = rd32(param_1 + 0xa4u);
            f2 = (f64)rdf32(0x817fdd1cu);
            wrf32d(r3 + 0x1cu, (f64)rdf32(0x817fdcf8u));
            f1 = (f64)rdf32(0x817fdd20u);
            f0 = (f64)rdf32(0x817fdd24u);
            wrf32d(r3 + 0x20u, (f64)rdf32(0x817fdcfcu));
            f3 = (f64)rdf32(0x817fdd00u);
            wrf32d(r3 + 0x24u, f3);
            r3 = rd32(param_1 + 0xa4u);
            wrf32d(r3 + 0x10u, f2);
            wrf32d(r3 + 0x14u, f1);
            wrf32d(r3 + 0x18u, f0);
            f2 = (f64)rdf32(param_1 + 0xb0u);
            f1 = (f64)rdf32(param_1 + 0xacu);
            r3 = rd32(param_1 + 0xa4u);
            wrf32d(r3 + 4u, (f64)(f32)((f64)rdf32(param_1 + 0xa8u) + (f64)rdf32(param_1 + 0xb4u)));
            wrf32d(r3 + 8u, f1);
            wrf32d(r3 + 0xcu, f2);
        }
        r3 = rd32(param_1 + 0x24u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x8004c630u, &a);
            f1 = tc_lastf();
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            if ((s32)r3 > 0) {
                wr32(param_1 + 0x28u, 0u);
            }
        }
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = f5;
        a.f[5] = f6;
        a.f[6] = f7;
        a.f[7] = f8;
        a.r[0] = 0x817fdd40u;
        a.r[1] = 0x8033a540u;
        a.r[2] = rd32(rd32(param_1) + 0x2cu);
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x8025b994u, &a);
        a.f[0] = (f64)(f32)((rdf64(0x80574510u) * (rdf64(0x80574518u) - (f64)rdf32(param_1 + 0xbcu))) + rdf64(0x80574508u));
        a.f[1] = (f64)rdf32(0x80574520u);
        a.f[2] = (f64)rdf32(0x805744fcu);
        a.f[3] = (f64)rdf32(0x805744f8u);
        a.r[0] = 0x817fdd40u;
        a.r[1] = 3u;
        (void)tc_call(0x80052904u, &a);
        a.r[0] = rd32(rd32(param_1) + 0x28u);
        r3 = tc_call(0x800cd694u, &a);
        a.r[0] = 0x817fde40u;
        a.r[1] = r3;
        (void)tc_call(0x8025e7c0u, &a);
        a.r[0] = 0x817fde40u;
        r3 = tc_call(0x8025e7a4u, &a);
        r4 = rd32(param_1);
        wr32(0x817fdfccu, r3);
        r7 = rd32(r4 + 0x28u);
        r4 = rd32(r4 + 0x2cu) & 0xffu;
        f0 = rdf64(0x817fdfc8u);
        f4 = rdf64(0x805744b0u);
        wr32(0x817fdfccu, (r4 - 1u) ^ 0x80000000u);
        f31 = (f64)(f32)(f0 - f4);
        f1 = rdf64(0x805744c0u);
        f0 = rdf64(0x817fdfc8u);
        wr32(0x817fdfc4u, (u32)rd8((((r7 - 0x55u) << 3u) & 0xfffffff8u) - 0x7fb5e9c8u));
        f2 = f0 - f1;
        f1 = rdf64(0x80574530u);
        f3 = rdf64(0x817fdfc0u) - f4;
        f0 = f3 * ((f1 * f2) + rdf64(0x80574528u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfd0u, f0);
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = f3;
        a.f[3] = f4;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x817fddc0u;
        a.r[1] = 0x40u;
        a.r[2] = 0x80364474u;
        a.r[3] = rd32(0x817fdfd4u) & 0xffffu;
        a.r[4] = r7;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8025e640u, &a);
        a.r[0] = 0x817fddc0u;
        r3 = tc_call(0x8025e7a4u, &a);
        wr32(0x817fdfc4u, r3);
        f31 = ppc_fmadds((f64)(f32)(rdf64(0x817fdfc0u) - rdf64(0x805744b0u)), (f64)rdf32(0x805744e4u), f31);
        a.r[0] = 0x817fde40u;
        a.r[1] = 0x817fddc0u;
        (void)tc_call(0x8025e820u, &a);
        f4 = (f64)rdf32(0x805744f8u);
        a.f[0] = ppc_fnmsubs((f64)(f32)(f31 * (f64)rdf32(0x805744e4u)), (f64)(f32)(f4 * (f64)rdf32(param_1 + 0xbcu)), (f64)rdf32(0x80574538u));
        a.f[1] = (f64)rdf32(0x8057453cu);
        a.f[2] = (f64)rdf32(0x805744fcu);
        a.f[3] = f4;
        a.r[0] = 0x817fde40u;
        a.r[1] = 3u;
        (void)tc_call(0x80052a08u, &a);
        a.r[0] = 0x15u;
        a.r[1] = 4u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        r30 = r3;
        r3 = tc_call(0x80052c30u, &a);
        a.r[0] = r3;
        a.r[1] = r30;
        f1 = tc_callf(0x80079bf8u, &a);
        a.r[0] = 0x15u;
        a.r[1] = 4u;
        a.r[2] = 0u;
        r3 = tc_call(0x801412f8u, &a);
        a.f[0] = ppc_fnmsubs((f64)(f32)(f1 * (f64)rdf32(0x805744e4u)), (f64)(f32)((f64)rdf32(0x80574548u) * (f64)rdf32(param_1 + 0xbcu)), (f64)rdf32(0x80574538u));
        a.f[1] = (f64)rdf32(0x80574544u);
        a.f[2] = (f64)rdf32(0x805744fcu);
        a.f[3] = (f64)rdf32(0x80574540u);
        a.r[0] = r3;
        a.r[1] = 3u;
        (void)tc_call(0x80052a08u, &a);
    }
    wr8(param_1 + 0x38u, rd8(param_1 + 0xa0u));
    a.r[0] = param_1 + 0xcu;
    (void)tc_call(0x8005250cu, &a);
    r3 = (u32)rd8(param_1 + 0xa0u);
    wr32(param_1 + 0x34u, 1u);
    if (r3 < 0xffu) {
        r3 = r3 + 0xau;
        r0 = 0xffu;
        if ((s32)r3 <= 255) {
            r0 = r3;
        }
        wr8(param_1 + 0xa0u, (u8)r0);
    }
    return 1u;
}
