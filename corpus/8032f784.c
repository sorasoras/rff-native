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

void fn_8032f784(u32 param_1, u32 param_2, s32 param_3)
{
    u32 c0eq = 0, c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r12 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f11 = 0.0, f31 = 0.0;
    f64 t7 = 0.0, t8 = 0.0, t10 = 0.0, t16 = 0.0, t22 = 0.0, t24 = 0.0, t31 = 0.0, t32 = 0.0, t34 = 0.0, t40 = 0.0, t46 = 0.0, t48 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdd50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r30 = (u32)rd16((u32)param_3 + 0x50u);
    r31 = rd32((u32)param_3 + 0x24u) + 0x9cu;
    if (r30 != 0u) {
        r25 = rd32(param_2 + 4u);
        c0eq = (f64)rdf32(0x80577cc8u) == (f64)rdf32(param_2 + 0x88u);
        r12 = rd32(param_2 + 8u);
        r11 = rd32(param_2 + 0xcu);
        r10 = rd32(param_2 + 0x10u);
        r9 = rd32(param_2 + 0x14u);
        r8 = rd32(param_2 + 0x18u);
        r7 = rd32(param_2 + 0x1cu);
        r6 = rd32(param_2 + 0x20u);
        r5 = rd32(param_2 + 0x24u);
        r3 = rd32(param_2 + 0x28u);
        r0 = rd32(param_2 + 0x2cu);
        wr32(0x817fdec0u, rd32(param_2));
        wr32(0x817fdec4u, r25);
        wr32(0x817fdec8u, r12);
        wr32(0x817fdeccu, r11);
        wr32(0x817fded0u, r10);
        wr32(0x817fded4u, r9);
        wr32(0x817fded8u, r8);
        wr32(0x817fdedcu, r7);
        wr32(0x817fdee0u, r6);
        wr32(0x817fdee4u, r5);
        wr32(0x817fdee8u, r3);
        wr32(0x817fdeecu, r0);
        if (!c0eq) {
            a.r[0] = 0x817fde10u;
            (void)tc_call(0x80254460u, &a);
            f0 = (f64)rdf32(0x817fde10u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfc8u, f0);
            r0 = rd32(0x817fdfccu);
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                wrf32d(0x817fdeecu, (f64)(f32)((f64)rdf32(0x817fdeecu) + (f64)rdf32(param_2 + 0x88u)));
            } else if (c0lt && (s32)r0 >= 0) {
                a.r[0] = param_2;
                a.r[1] = param_2 + 0x8cu;
                a.r[2] = 0x817fdd88u;
                (void)tc_call(0x8023411cu, &a);
                a.r[0] = 0x817fdd88u;
                a.r[1] = 0x817fdd88u;
                r3 = tc_call(0x80320984u, &a);
                if (r3 == 0u) {
                    wrf32d(0x817fdeecu, (f64)(f32)((f64)rdf32(0x817fdeecu) + (f64)rdf32(param_2 + 0x88u)));
                } else {
                    f1 = (f64)rdf32(0x817fdd90u);
                    f0 = (f64)rdf32(0x80577cc8u);
                    if (!((f1 > f0) || (f1 == f0))) {
                        f3 = (f64)rdf32(param_2 + 0x88u);
                        f1 = (f64)(f32)(f1 * f3);
                        f5 = (f64)(f32)((f64)rdf32(0x817fdd88u) * f3);
                        f3 = (f64)(f32)((f64)rdf32(0x817fdd8cu) * f3);
                        f2 = (f64)(f32)((f64)rdf32(0x817fdedcu) - f3);
                        f0 = (f64)(f32)((f64)rdf32(0x817fdeecu) - f1);
                        wrf32d(0x817fdeccu, (f64)(f32)((f64)rdf32(0x817fdeccu) - f5));
                        wrf32d(0x817fdedcu, f2);
                        wrf32d(0x817fdeecu, f0);
                    } else {
                        f3 = (f64)rdf32(param_2 + 0x88u);
                        f1 = (f64)(f32)(f1 * f3);
                        f5 = (f64)(f32)((f64)rdf32(0x817fdd88u) * f3);
                        f3 = (f64)(f32)((f64)rdf32(0x817fdd8cu) * f3);
                        f2 = (f64)(f32)((f64)rdf32(0x817fdedcu) + f3);
                        f0 = (f64)(f32)((f64)rdf32(0x817fdeecu) + f1);
                        wrf32d(0x817fdeccu, (f64)(f32)((f64)rdf32(0x817fdeccu) + f5));
                        wrf32d(0x817fdedcu, f2);
                        wrf32d(0x817fdeecu, f0);
                    }
                }
            }
        }
        a.r[0] = 0x817fdef0u;
        a.r[1] = 0x817fdec0u;
        a.r[2] = (u32)param_3;
        (void)tc_call(0x80327b38u, &a);
        f0 = (f64)rdf32(0x817fdf18u);
        f1 = (f64)rdf32(0x817fdf08u);
        f2 = (f64)rdf32(0x817fdef8u);
        wr32(0x817fdfc4u, 0u);
        wrf32d(0x817fdd7cu, f2);
        wrf32d(0x817fdd80u, f1);
        wrf32d(0x817fdd84u, f0);
        a.r[0] = 0x817fdfacu;
        a.r[1] = 0x817fdf58u;
        a.r[2] = 0x817fdd7cu;
        (void)tc_call(0x802f031cu, &a);
        a.r[0] = 0x817fdde8u;
        a.r[1] = param_1;
        a.r[2] = r31;
        a.r[3] = 0x817fdef0u;
        (void)tc_call(0x80330010u, &a);
        r3 = rd32((u32)param_3 + 0x3cu);
        f1 = (f64)rdf32(0x80577cb4u);
        while (r3 != 0u) {
            f0 = (f64)rdf32(r3 + 0xccu);
            if ((f0 < f1) || (f0 == f1)) break;
            wrf32d(r3 + 0xccu, (f64)rdf32(0x817fdde8u));
            wrf32d(r3 + 0xd0u, (f64)rdf32(0x817fddecu));
            wrf32d(r3 + 0xd4u, (f64)rdf32(0x817fddf0u));
            r3 = rd32(r3 + (u32)rd16((u32)param_3 + 0x42u));
        }
        r4 = (u32)rd8(r31 + 0xadu);
        r12 = rd32(param_2 + 4u);
        r11 = rd32(param_2 + 8u);
        r10 = rd32(param_2 + 0xcu);
        r29 = ((u32)((s32)~((r4 - 2u) | (2u - r4)) >> 31) & 2u) | ((0u - (((u32)rd16(r31) >> 0xbu) & 1u)) & 4u);
        r9 = rd32(param_2 + 0x10u);
        c0eq = (f64)rdf32(0x80577cc8u) == (f64)rdf32(param_2 + 0x88u);
        r8 = rd32(param_2 + 0x14u);
        r7 = rd32(param_2 + 0x18u);
        r6 = rd32(param_2 + 0x1cu);
        r5 = rd32(param_2 + 0x20u);
        r4 = rd32(param_2 + 0x24u);
        r3 = rd32(param_2 + 0x28u);
        r0 = rd32(param_2 + 0x2cu);
        wr32(0x817fde90u, rd32(param_2));
        wr32(0x817fde94u, r12);
        wr32(0x817fde98u, r11);
        wr32(0x817fde9cu, r10);
        wr32(0x817fdea0u, r9);
        wr32(0x817fdea4u, r8);
        wr32(0x817fdea8u, r7);
        wr32(0x817fdeacu, r6);
        wr32(0x817fdeb0u, r5);
        wr32(0x817fdeb4u, r4);
        wr32(0x817fdeb8u, r3);
        wr32(0x817fdebcu, r0);
        if (!c0eq) {
            a.r[0] = 0x817fddf4u;
            (void)tc_call(0x80254460u, &a);
            f0 = (f64)rdf32(0x817fddf4u);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfc8u, f0);
            r0 = rd32(0x817fdfccu);
            c0lt = (s32)r0 < 1;
            if (r0 == 1u) {
                wrf32d(0x817fdebcu, (f64)(f32)((f64)rdf32(0x817fdebcu) + (f64)rdf32(param_2 + 0x88u)));
            } else if (c0lt && (s32)r0 >= 0) {
                a.r[0] = param_2;
                a.r[1] = param_2 + 0x8cu;
                a.r[2] = 0x817fdd70u;
                (void)tc_call(0x8023411cu, &a);
                a.r[0] = 0x817fdd70u;
                a.r[1] = 0x817fdd70u;
                r3 = tc_call(0x80320984u, &a);
                if (r3 == 0u) {
                    wrf32d(0x817fdebcu, (f64)(f32)((f64)rdf32(0x817fdebcu) + (f64)rdf32(param_2 + 0x88u)));
                } else {
                    f1 = (f64)rdf32(0x817fdd78u);
                    f0 = (f64)rdf32(0x80577cc8u);
                    if (!((f1 > f0) || (f1 == f0))) {
                        f3 = (f64)rdf32(param_2 + 0x88u);
                        f1 = (f64)(f32)(f1 * f3);
                        f5 = (f64)(f32)((f64)rdf32(0x817fdd70u) * f3);
                        f3 = (f64)(f32)((f64)rdf32(0x817fdd74u) * f3);
                        f2 = (f64)(f32)((f64)rdf32(0x817fdeacu) - f3);
                        f0 = (f64)(f32)((f64)rdf32(0x817fdebcu) - f1);
                        wrf32d(0x817fde9cu, (f64)(f32)((f64)rdf32(0x817fde9cu) - f5));
                        wrf32d(0x817fdeacu, f2);
                        wrf32d(0x817fdebcu, f0);
                    } else {
                        f3 = (f64)rdf32(param_2 + 0x88u);
                        f1 = (f64)(f32)(f1 * f3);
                        f5 = (f64)(f32)((f64)rdf32(0x817fdd70u) * f3);
                        f3 = (f64)(f32)((f64)rdf32(0x817fdd74u) * f3);
                        f2 = (f64)(f32)((f64)rdf32(0x817fdeacu) + f3);
                        f0 = (f64)(f32)((f64)rdf32(0x817fdebcu) + f1);
                        wrf32d(0x817fde9cu, (f64)(f32)((f64)rdf32(0x817fde9cu) + f5));
                        wrf32d(0x817fdeacu, f2);
                        wrf32d(0x817fdebcu, f0);
                    }
                }
            }
        }
        a.r[0] = 0x817fde90u;
        a.r[1] = 0x817fdf28u;
        a.r[2] = 0x817fde90u;
        f1 = tc_callf(0x802337a0u, &a);
        f2 = 0.0;
        r24 = r29 & 2u;
        if (r24 != 0u) {
            a.r[0] = 0x817fde90u;
            a.r[1] = 0x817fde60u;
            r3 = tc_call(0x8023386cu, &a);
            f2 = 0.0;
            if (r3 == 0u) {
                f1 = (f64)rdf32(0x80577cc8u);
                f0 = (f64)rdf32(0x80577cb4u);
                wrf32d(0x817fddc4u, f1);
                wrf32d(0x817fddc8u, f1);
                wrf32d(0x817fddccu, f0);
                wrf32d(0x817fdfb8u, f1);
                wrf32d(0x817fdfbcu, f1);
                wrf32d(0x817fdfc0u, f0);
            } else {
                f2 = (f64)rdf32(0x817fde88u);
                f1 = (f64)rdf32(0x817fde78u);
                f0 = (f64)rdf32(0x817fde68u);
                wrf32d(0x817fddd4u, f1);
                wrf32d(0x817fddd0u, f0);
                wrf32d(0x817fddd8u, f2);
                wrf32d(0x817fdfb8u, f0);
                wrf32d(0x817fdfbcu, f1);
                wrf32d(0x817fdfc0u, f2);
            }
        }
        r0 = (u32)rd8(r31 + 0xb2u) & 7u;
        if ((r0 != 1u || (s32)r30 >= 3) && (r0 != 0u || (s32)r30 >= 2)) {
            a.r[0] = param_1;
            a.r[1] = (u32)param_3;
            a.r[2] = rd32((u32)param_3 + 0x24u) + 0x9cu;
            a.r[3] = param_2;
            (void)tc_call(0x80325f9cu, &a);
            a.r[0] = 0u;
            a.r[1] = 1u;
            a.r[2] = 1u;
            (void)tc_call(0x80250e00u, &a);
            (void)tc_call(0x8024f870u, &a);
            a.r[0] = 9u;
            a.r[1] = 1u;
            (void)tc_call(0x8024f27cu, &a);
            if ((u32)rd8(param_1 + 0xc0u) != 0u) {
                a.r[0] = 0xdu;
                a.r[1] = 1u;
                (void)tc_call(0x8024f27cu, &a);
            }
            a.r[0] = 0u;
            a.r[1] = 9u;
            a.r[2] = 1u;
            a.r[3] = 4u;
            a.r[4] = 0u;
            (void)tc_call(0x8024f8a4u, &a);
            a.r[0] = 0u;
            a.r[1] = 0xdu;
            a.r[2] = 1u;
            a.r[3] = 4u;
            a.r[4] = 0u;
            (void)tc_call(0x8024f8a4u, &a);
            a.r[0] = 0u;
            (void)tc_call(0x80254548u, &a);
            a.r[0] = 0x817fde90u;
            a.r[1] = 0u;
            f1 = tc_callf(0x802544a0u, &a);
            r5 = (u32)rd8(param_1 + 0xc0u);
            r5 = (((0u - r5) | r5) >> 0x1fu) & 1u;
            r29 = r29 | r5;
            a.r[0] = param_1;
            a.r[1] = (u32)rd16(r31) & 0x800u;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x10u), &a);
            f1 = tc_lastf();
            a.r[0] = (u32)param_3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r3, &a);
            r24 = r3;
            a.r[0] = param_1;
            a.r[1] = r3;
            a.r[2] = r31;
            a.r[3] = param_2;
            a.r[4] = 1u;
            (void)tc_call(0x80326730u, &a);
            if ((u32)rd8(r31 + 0xadu) == 3u) {
                r6 = 0u;
                if (((u32)rd16(r31) & 8u) != 0u || (u32)rd8(rd32(rd32(rd32(rd32(r24 + 0xc8u) + 0x20u) + 0xbcu) + 0x20u) + 0xc064u) == 0u) {
                    r6 = 1u;
                }
                a.r[0] = param_1;
                a.r[1] = 0x817fdef0u;
                a.r[2] = r29;
                a.r[3] = r6;
                (void)tc_call(0x8032efccu, &a);
            } else {
                f1 = (f64)rdf32(0x80577cc8u);
                f0 = (f64)rdf32(0x80577cb4u);
                wrf32d(0x817fddacu, (f64)rdf32(0x80577ce0u));
                wrf32d(0x817fddb0u, f1);
                wrf32d(0x817fddb4u, f1);
                wrf32d(0x817fddb8u, f0);
                wrf32d(0x817fddbcu, f1);
                wrf32d(0x817fddc0u, f1);
                a.r[0] = param_1;
                a.r[1] = 0x817fdef0u;
                a.r[2] = r29;
                a.r[3] = 0x817fddb8u;
                a.r[4] = 0x817fddacu;
                (void)tc_call(0x8032d638u, &a);
                if ((u32)rd8(r31 + 0xadu) == 1u) {
                    f2 = (f64)rdf32(0x80577cc8u);
                    f1 = (f64)rdf32(0x80577cb4u);
                    f0 = (f64)rdf32(0x80577ce0u);
                    wrf32d(0x817fdd94u, f2);
                    wrf32d(0x817fdd98u, f2);
                    wrf32d(0x817fdd9cu, f1);
                    wrf32d(0x817fdda0u, f2);
                    wrf32d(0x817fdda4u, f2);
                    wrf32d(0x817fdda8u, f0);
                    a.r[0] = param_1;
                    a.r[1] = 0x817fdef0u;
                    a.r[2] = r29;
                    a.r[3] = 0x817fdda0u;
                    a.r[4] = 0x817fdd94u;
                    (void)tc_call(0x8032d638u, &a);
                }
            }
        } else {
            r25 = (u32)rd16(r31) & 0x800u;
            a.r[0] = param_1;
            a.r[1] = (u32)param_3;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x18u), &a);
            f1 = tc_lastf();
            r27 = r3;
            a.r[0] = param_1;
            a.r[1] = r25;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x10u), &a);
            f1 = tc_lastf();
            r29 = r3;
            a.r[0] = param_1;
            a.r[1] = r25;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x14u), &a);
            f1 = tc_lastf();
            r26 = r3;
            a.r[0] = (u32)param_3;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r29, &a);
            f1 = tc_lastf();
            r29 = r3;
            if (r3 != 0u) {
                f31 = (f64)rdf32(0x80577cc0u);
                while (r3 != 0u) {
                    a.r[0] = 0x817fdddcu;
                    a.r[1] = 0x817fdef0u;
                    a.r[2] = r3;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    (void)tc_call(r27, &a);
                    if (r24 != 0u) {
                        a.r[0] = 0x817fdddcu;
                        a.r[1] = 0x817fdfb8u;
                        a.r[2] = 0x817fdd58u;
                        (void)tc_call(0x80234484u, &a);
                    } else {
                        a.r[0] = 0x817fdddcu;
                        a.r[1] = r29 + 0xccu;
                        a.r[2] = 0x817fdd58u;
                        (void)tc_call(0x80234484u, &a);
                    }
                    t7 = (f64)rdf32(0x817fdd5cu);
                    t8 = (f64)rdf32(0x817fdd60u);
                    t10 = (f64)rdf32(0x817fdd58u);
                    t16 = (f64)(f32)(ppc_fmadds(t10, t10, (f64)(f32)(t7 * t7)) + (f64)(f32)(t8 * t8));
                    if (!(t16 < f31)) {
                        a.f[0] = t16;
                        f1 = tc_callf(0x802eff54u, &a);
                        r0 = 1u;
                        t22 = (f64)(f32)((f64)rdf32(0x817fdd5cu) * f1);
                        t24 = (f64)rdf32(0x817fdd60u);
                        wrf32d(0x817fdd58u, (f64)(f32)((f64)rdf32(0x817fdd58u) * f1));
                        wrf32d(0x817fdd5cu, t22);
                        wrf32d(0x817fdd60u, (f64)(f32)(t24 * f1));
                    } else {
                        r0 = 0u;
                    }
                    if (r0 == 0u) {
                        f1 = (f64)rdf32(0x817fdfb0u);
                        f0 = (f64)rdf32(0x817fdfb4u);
                        wrf32d(0x817fdd58u, (f64)rdf32(0x817fdfacu));
                        wrf32d(0x817fdd5cu, f1);
                        wrf32d(0x817fdd60u, f0);
                    }
                    a.r[0] = 0x817fdd58u;
                    a.r[1] = 0x817fdddcu;
                    a.r[2] = 0x817fdd64u;
                    (void)tc_call(0x80234484u, &a);
                    t31 = (f64)rdf32(0x817fdd68u);
                    t32 = (f64)rdf32(0x817fdd6cu);
                    t34 = (f64)rdf32(0x817fdd64u);
                    t40 = (f64)(f32)(ppc_fmadds(t34, t34, (f64)(f32)(t31 * t31)) + (f64)(f32)(t32 * t32));
                    if (!(t40 < f31)) {
                        a.f[0] = t40;
                        f1 = tc_callf(0x802eff54u, &a);
                        t46 = (f64)(f32)((f64)rdf32(0x817fdd68u) * f1);
                        t48 = (f64)rdf32(0x817fdd6cu);
                        wrf32d(0x817fdd64u, (f64)(f32)((f64)rdf32(0x817fdd64u) * f1));
                        wrf32d(0x817fdd68u, t46);
                        wrf32d(0x817fdd6cu, (f64)(f32)(t48 * f1));
                    }
                    wrf32d(r29 + 0xccu, (f64)rdf32(0x817fdd64u));
                    wrf32d(r29 + 0xd0u, (f64)rdf32(0x817fdd68u));
                    wrf32d(r29 + 0xd4u, (f64)rdf32(0x817fdd6cu));
                    f0 = (f64)rdf32(r29 + 0xb4u);
                    f1 = (f64)rdf32(0x817fdd6cu);
                    f2 = (f64)rdf32(0x817fdde4u);
                    f3 = (f64)rdf32(0x817fdd60u);
                    f4 = (f64)rdf32(r29 + 0xb0u);
                    f5 = (f64)rdf32(0x817fdd68u);
                    f6 = (f64)rdf32(0x817fdde0u);
                    f7 = (f64)rdf32(0x817fdd5cu);
                    f8 = (f64)rdf32(r29 + 0xacu);
                    f9 = (f64)rdf32(0x817fdd64u);
                    f11 = (f64)rdf32(0x817fdd58u);
                    wrf32d(0x817fde34u, (f64)rdf32(0x817fdddcu));
                    wrf32d(0x817fde30u, f11);
                    wrf32d(0x817fde38u, f9);
                    wrf32d(0x817fde3cu, f8);
                    wrf32d(0x817fde40u, f7);
                    wrf32d(0x817fde44u, f6);
                    wrf32d(0x817fde48u, f5);
                    wrf32d(0x817fde4cu, f4);
                    wrf32d(0x817fde50u, f3);
                    wrf32d(0x817fde54u, f2);
                    wrf32d(0x817fde58u, f1);
                    wrf32d(0x817fde5cu, f0);
                    a.r[0] = (u32)param_3;
                    a.r[1] = r29;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    a.f[4] = f5;
                    a.f[5] = f6;
                    a.f[6] = f7;
                    a.f[7] = f8;
                    r3 = tc_call(r26, &a);
                    f1 = tc_lastf();
                    r29 = r3;
                }
            }
        }
    }
    return;
}
