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

void fn_8031c89c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, u32 param_6, u32 param_7, s32 param_8, f64 param_f1)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0;
    u32 r23 = 0, r25 = 0, r28 = 0, r29 = 0, r30 = 0, t1 = 0, t12 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, t8 = 0.0, t10 = 0.0;
    TcArgs a = {0};
    wr32(0x817fded0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfccu, 0u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdf98u, 0x43300000u);
    r25 = param_2;
    wr32(0x817fdfa0u, 0x43300000u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0xcu, 1u);
    if (param_2 == 0u) {
        r25 = 1u;
    }
    wr32(param_1 + 0xc8u, (u32)param_5);
    wr32((u32)param_5 + 0x10u, rd32((u32)param_5 + 0x10u) + 1u);
    wr32(param_1 + 0xd8u, 0u);
    wr16(param_1 + 0xe2u, 0u);
    (void)tc_call(0x8031f650u, &a);
    r4 = rd32((u32)param_5 + 0x24u);
    r4 = rd32(r4 + 4u) + r4;
    r4 = r4 + 0xcu;
    a.r[0] = param_1 + 0x20u;
    a.r[1] = r4;
    a.r[2] = (u32)param_5;
    (void)tc_call(0x8031c584u, &a);
    wrf32d(param_1 + 0xc4u, param_f1);
    f6 = (f64)rdf32(param_3);
    wr16(param_1 + 0xdcu, 0u);
    f5 = (f64)rdf32(param_3 + 4u);
    r5 = rd32((u32)param_5 + 0x20u);
    f4 = (f64)rdf32(param_3 + 8u);
    f3 = (f64)rdf32(param_4);
    f2 = (f64)rdf32(param_4 + 4u);
    f0 = (f64)rdf32(param_4 + 8u);
    f1 = (f64)rdf32(0x80577948u);
    r3 = (rd32(r5 + 0xecu) * 0x343fdu) + 0x269ec3u;
    wr32(r5 + 0xecu, r3);
    r3 = (r3 >> 0x10u) & 0xffffu;
    wr16(param_1 + 0xdeu, (u16)r3);
    wr16(param_1 + 0xe0u, (u16)r25);
    r5 = rd32((u32)param_5 + 0x20u);
    r3 = (rd32(r5 + 0xecu) * 0x343fdu) + 0x269ec3u;
    r4 = (r3 >> 0x10u) & 0xffffu;
    wr32(r5 + 0xecu, r3);
    wrf32d(param_1 + 0xacu, f6);
    wrf32d(param_1 + 0xb0u, f5);
    wrf32d(param_1 + 0xb4u, f4);
    r0 = (u32)((s32)(ppc_mulhw(-2130574327, (s32)r4) + r4) >> 7);
    wrf32d(param_1 + 0xb8u, f6);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = r0 * 0xfeu;
    wrf32d(param_1 + 0xbcu, f5);
    wrf32d(param_1 + 0xc0u, f4);
    r0 = r4 - r0 - 0x7eu;
    wrf32d(param_1 + 0xa0u, f3);
    wr8(param_1 + 0x99u, (u8)r0);
    wrf32d(param_1 + 0xa4u, f2);
    wrf32d(param_1 + 0xa8u, f0);
    r3 = rd32((u32)param_5 + 0x20u);
    r4 = rd32(r3 + 0xbcu);
    r23 = r4 + 0x84u;
    if (f1 != (f64)rdf32(r4 + 0x84u) || f1 != (f64)rdf32(r23 + 4u) || f1 != (f64)rdf32(r23 + 8u)) {
        a.r[0] = r3;
        a.r[1] = 0x817fdf68u;
        (void)tc_call(0x80313b9cu, &a);
        a.r[0] = 0x817fdf68u;
        a.r[1] = 0x817fdf68u;
        (void)tc_call(0x8023386cu, &a);
        f0 = (f64)rdf32(0x80577948u);
        wrf32d(0x817fdf94u, f0);
        wrf32d(0x817fdf84u, f0);
        wrf32d(0x817fdf74u, f0);
        a.r[0] = 0x817fdf68u;
        a.r[1] = r23;
        a.r[2] = 0x817fdef8u;
        (void)tc_call(0x8023411cu, &a);
        t1 = param_1 + 0xa0u;
        t8 = (f64)(f32)((f64)rdf32(t1 + 4u) + (f64)rdf32(0x817fdefcu));
        t10 = (f64)rdf32(param_1 + 0xa8u);
        t12 = param_1 + 0xa0u;
        wrf32d(t12, (f64)(f32)((f64)rdf32(t1) + (f64)rdf32(0x817fdef8u)));
        wrf32d(t12 + 4u, t8);
        wrf32d(param_1 + 0xa8u, (f64)(f32)(t10 + (f64)rdf32(0x817fdf00u)));
    }
    if (param_6 != 0u) {
        r4 = param_1 + 0xacu;
        a.r[0] = param_6;
        a.r[1] = r4;
        a.r[2] = r4;
        (void)tc_call(0x8023411cu, &a);
        r4 = param_1 + 0xa0u;
        r0 = rd32(param_6 + 4u);
        f0 = (f64)rdf32(0x80577948u);
        wr32(0x817fdf38u, rd32(param_6));
        wr32(0x817fdf3cu, r0);
        r0 = rd32(param_6 + 0xcu);
        wr32(0x817fdf40u, rd32(param_6 + 8u));
        wr32(0x817fdf44u, r0);
        r0 = rd32(param_6 + 0x14u);
        wr32(0x817fdf48u, rd32(param_6 + 0x10u));
        wr32(0x817fdf4cu, r0);
        r0 = rd32(param_6 + 0x1cu);
        wr32(0x817fdf50u, rd32(param_6 + 0x18u));
        wr32(0x817fdf54u, r0);
        r0 = rd32(param_6 + 0x24u);
        wr32(0x817fdf58u, rd32(param_6 + 0x20u));
        wr32(0x817fdf5cu, r0);
        r6 = rd32(param_6 + 0x28u);
        wr32(0x817fdf64u, rd32(param_6 + 0x2cu));
        wr32(0x817fdf60u, r6);
        wrf32d(0x817fdf64u, f0);
        wrf32d(0x817fdf54u, f0);
        wrf32d(0x817fdf44u, f0);
        a.r[0] = 0x817fdf38u;
        a.r[1] = r4;
        a.r[2] = r4;
        (void)tc_call(0x8023411cu, &a);
    }
    f0 = (f64)rdf32(0x80577948u);
    f1 = (f64)rdf32(0x8057791cu);
    wrf32d(0x817fdee4u, f0);
    wrf32d(0x817fdee0u, f1);
    wrf32d(0x817fdee8u, f0);
    wrf32d(param_1 + 0xccu, f1);
    wrf32d(param_1 + 0xd0u, f0);
    wrf32d(param_1 + 0xd4u, f0);
    if ((u32)param_8 != 0u && param_7 != 0u) {
        if ((u32)(s16)rd16(param_7) != 0u) {
            a.r[0] = rd32((u32)param_8 + 0xc8u);
            a.r[1] = 0x817fdf08u;
            (void)tc_call(0x8031efa8u, &a);
            f0 = (f64)rdf32(0x80577948u);
            wrf32d(0x817fdf34u, f0);
            wrf32d(0x817fdf24u, f0);
            wrf32d(0x817fdf14u, f0);
            a.r[0] = 0x817fdf08u;
            a.r[1] = (u32)param_8 + 0xa0u;
            a.r[2] = 0x817fdeecu;
            (void)tc_call(0x8023411cu, &a);
            a.r[0] = rd32(param_1 + 0xc8u);
            a.r[1] = 0x817fdf08u;
            (void)tc_call(0x8031efa8u, &a);
            f0 = (f64)rdf32(0x80577948u);
            wrf32d(0x817fdf34u, f0);
            wrf32d(0x817fdf24u, f0);
            wrf32d(0x817fdf14u, f0);
            a.r[0] = 0x817fdf08u;
            a.r[1] = 0x817fdf08u;
            (void)tc_call(0x8023386cu, &a);
            a.r[0] = 0x817fdf08u;
            a.r[1] = 0x817fdeecu;
            a.r[2] = 0x817fdeecu;
            (void)tc_call(0x8023411cu, &a);
            f6 = rdf64(0x80577958u);
            f3 = (f64)rdf32(0x817fdeecu);
            wr32(0x817fdf9cu, (u32)(s16)rd16(param_7) ^ 0x80000000u);
            f4 = (f64)rdf32(0x8057794cu);
            f1 = (f64)rdf32(param_1 + 0xa4u);
            f0 = (f64)rdf32(param_1 + 0xa8u);
            f3 = (f64)(f32)(f3 * (f64)(f32)(rdf64(0x817fdf98u) - f6));
            f3 = (f64)(f32)(f4 * f3);
            wrf32d(param_1 + 0xa0u, (f64)(f32)((f64)rdf32(param_1 + 0xa0u) + f3));
            f2 = (f64)rdf32(0x817fdef0u);
            wr32(0x817fdfa4u, (u32)(s16)rd16(param_7) ^ 0x80000000u);
            f2 = (f64)(f32)(f2 * (f64)(f32)(rdf64(0x817fdfa0u) - f6));
            f2 = (f64)(f32)(f4 * f2);
            f1 = (f64)(f32)(f1 + f2);
            wrf32d(param_1 + 0xa4u, f1);
            f1 = (f64)rdf32(0x817fdef4u);
            wr32(0x817fdf9cu, (u32)(s16)rd16(param_7) ^ 0x80000000u);
            f1 = (f64)(f32)(f1 * (f64)(f32)(rdf64(0x817fdf98u) - f6));
            f1 = (f64)(f32)(f4 * f1);
            f0 = (f64)(f32)(f0 + f1);
            wrf32d(param_1 + 0xa8u, f0);
        }
        r0 = (u32)rd8(param_7 + 2u);
        if (r0 != 0u) {
            f1 = (f64)rdf32((u32)param_8 + 0x30u);
            f0 = (f64)rdf32((u32)param_8 + 0x38u);
            wr32(0x817fdfa4u, r0);
            wrf32d(param_1 + 0x30u, (f64)(f32)((f64)rdf32(0x8057794cu) * (f64)(f32)((f64)(f32)(rdf64(0x817fdfa0u) - rdf64(0x80577938u)) * (f64)(f32)((f64)(f32)(f1 * f0) * (f64)rdf32(rd32((u32)param_8 + 0xc8u) + 0x58u)))));
            r4 = rd32((u32)param_8 + 0xc8u);
            r0 = (u32)rd16(rd32(r4 + 0x24u) + 0x9cu) & 0x6000u;
            c0lt = (s32)r0 < 16384;
            if (r0 == 0x4000u) {
                f1 = (f64)(f32)((f64)rdf32((u32)param_8 + 0x34u) * (f64)rdf32((u32)param_8 + 0x38u));
            } else if (!c0lt) {
                if (r0 == 0x6000u) {
                    f1 = (f64)(f32)((f64)rdf32((u32)param_8 + 0x30u) * (f64)rdf32((u32)param_8 + 0x38u));
                } else {
                    f1 = (f64)(f32)((f64)rdf32((u32)param_8 + 0x34u) * (f64)rdf32((u32)param_8 + 0x3cu));
                }
            } else if (r0 == 0x2000u) {
                f1 = (f64)(f32)((f64)rdf32((u32)param_8 + 0x30u) * (f64)rdf32((u32)param_8 + 0x3cu));
            } else {
                f1 = (f64)(f32)((f64)rdf32((u32)param_8 + 0x34u) * (f64)rdf32((u32)param_8 + 0x3cu));
            }
            f0 = (f64)rdf32(r4 + 0x5cu);
            wr32(0x817fdf9cu, (u32)rd8(param_7 + 2u));
            wrf32d(param_1 + 0x34u, (f64)(f32)((f64)rdf32(0x8057794cu) * (f64)(f32)((f64)(f32)(rdf64(0x817fdf98u) - rdf64(0x80577938u)) * (f64)(f32)(f1 * f0))));
        }
        if ((u32)rd8(param_7 + 3u) != 0u) {
            r11 = (u32)rd8(0x80577941u);
            r10 = (u32)rd8(0x80577942u);
            r9 = (u32)rd8(0x80577943u);
            r8 = (u32)rd8(0x80577944u);
            r7 = (u32)rd8(0x80577945u);
            r3 = (u32)rd8(0x80577946u);
            r0 = (u32)rd8(0x80577947u);
            wr8(0x817fdedcu, rd8(0x80577940u));
            wr8(0x817fdeddu, (u8)r11);
            wr8(0x817fdedeu, (u8)r10);
            wr8(0x817fdedfu, (u8)r9);
            wr8(0x817fded8u, (u8)r8);
            wr8(0x817fded9u, (u8)r7);
            wr8(0x817fdedau, (u8)r3);
            wr8(0x817fdedbu, (u8)r0);
            a.r[0] = rd32((u32)param_8 + 0xc8u);
            a.r[1] = (u32)param_8;
            a.r[2] = 0x817fdedcu;
            a.r[3] = 0x817fded8u;
            (void)tc_call(0x8031f22cu, &a);
            r30 = (u32)param_8;
            r29 = param_1;
            r28 = 0u;
            do {
                r4 = (u32)rd8(param_7 + 8u);
                if (r4 != 0u) {
                    r23 = 0xffu;
                    if ((r4 & 1u) != 0u) {
                        r3 = (u32)rd8(r30 + 0x23u) + 1u;
                        r23 = ((((r3 << 8u) & 0xffffff00u) - r3) >> 8u) & 0xffffffu;
                    }
                    if ((r4 & 2u) != 0u) {
                        r23 = (r23 * (u32)rd8(r30 + 0x27u)) + 0xffu;
                        r23 = (r23 >> 8u) & 0xffffffu;
                    }
                    if ((r4 & 4u) != 0u) {
                        a.r[0] = (u32)param_8;
                        r3 = tc_call(0x8031d110u, &a);
                        r3 = r3 & 0xffu;
                        r3 = r23 * r3;
                        r3 = r3 + 0xffu;
                        r3 = r3 * (u32)rd8(0x817fdedfu);
                        r23 = ((r3 + 0xffu) >> 0x10u) & 0xffffu;
                    }
                    wr8(r29 + 0x23u, (u8)((ppc_mulhwu(0x51eb851fu, r23 * (u32)rd8(param_7 + 3u)) >> 5u) & 0xffu));
                }
                r4 = (u32)rd8(param_7 + 9u);
                if (r4 != 0u) {
                    r23 = 0xffu;
                    if ((r4 & 1u) != 0u) {
                        r3 = (u32)rd8(r30 + 0x23u) + 1u;
                        r23 = ((((r3 << 8u) & 0xffffff00u) - r3) >> 8u) & 0xffffffu;
                    }
                    if ((r4 & 2u) != 0u) {
                        r23 = (r23 * (u32)rd8(r30 + 0x27u)) + 0xffu;
                        r23 = (r23 >> 8u) & 0xffffffu;
                    }
                    if ((r4 & 4u) != 0u) {
                        a.r[0] = (u32)param_8;
                        r3 = tc_call(0x8031d110u, &a);
                        r3 = r3 & 0xffu;
                        r3 = r23 * r3;
                        r3 = r3 + 0xffu;
                        r3 = r3 * (u32)rd8(0x817fdedfu);
                        r23 = ((r3 + 0xffu) >> 0x10u) & 0xffffu;
                    }
                    wr8(r29 + 0x27u, (u8)((ppc_mulhwu(0x51eb851fu, r23 * (u32)rd8(param_7 + 3u)) >> 5u) & 0xffu));
                }
                r28 = r28 + 1u;
                r29 = r29 + 8u;
                r30 = r30 + 8u;
            } while ((s32)r28 < 2);
        }
        if ((u32)rd8(param_7 + 4u) != 0u) {
            r3 = (u32)param_8;
            r4 = param_1;
            ctr = 2u;
            do {
                r7 = (u32)rd8(r3 + 0x21u);
                r8 = (u32)rd8(r3 + 0x22u);
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)((u32)rd8(r3 + 0x20u) * (u32)rd8(param_7 + 4u))) >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                wr8(r4 + 0x20u, (u8)r0);
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(r7 * (u32)rd8(param_7 + 4u))) >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                wr8(r4 + 0x21u, (u8)r0);
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(r8 * (u32)rd8(param_7 + 4u))) >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                wr8(r4 + 0x22u, (u8)r0);
                r7 = (u32)rd8(r3 + 0x25u);
                r0 = (u32)rd8(r3 + 0x24u) * (u32)rd8(param_7 + 4u);
                r8 = (u32)rd8(r3 + 0x26u);
                r3 = r3 + 8u;
                r0 = ppc_mulhw(1374389535, (s32)r0);
                r0 = (u32)((s32)r0 >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                wr8(r4 + 0x24u, (u8)r0);
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(r7 * (u32)rd8(param_7 + 4u))) >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                wr8(r4 + 0x25u, (u8)r0);
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)(r8 * (u32)rd8(param_7 + 4u))) >> 5);
                r0 = r0 + ((r0 >> 0x1fu) & 1u);
                wr8(r4 + 0x26u, (u8)r0);
                r4 = r4 + 8u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
        if (((u32)rd8(param_7 + 7u) & 2u) != 0u) {
            f1 = rdf64(0x80577938u);
            wr32(0x817fdfa4u, (u32)rd8((u32)param_8 + 0x9au));
            a.f[0] = (f64)(f32)((f64)(f32)((f64)rdf32(0x80577928u) * (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32((u32)param_8 + 0x40u) + (f64)(f32)((f64)rdf32(0x80577950u) * (f64)(f32)(rdf64(0x817fdfa0u) - f1))), (f64)rdf32(0x8057792cu))) - (f64)rdf32(0x80577930u));
            f1 = tc_callf(0x80262598u, &a);
            f0 = (f64)(f32)f1;
            f5 = rdf64(0x80577938u);
            f3 = (f64)rdf32(0x80577950u);
            f2 = (f64)rdf32(0x8057792cu);
            f4 = px_ctiw(f0, ppc_fctiwz(f0));
            f1 = (f64)rdf32(0x80577928u);
            f0 = (f64)rdf32(0x80577930u);
            wrf64(0x817fdfa8u, f4);
            r3 = rd32(0x817fdfacu);
            r0 = (r3 << 0x18u) & 0xff000000u;
            r3 = (r3 >> 0x1fu) & 1u;
            r0 = r0 - r3;
            r0 = (r0 << 8u) | (r0 >> 0x18u);
            r0 = r0 + r3;
            wr8(param_1 + 0x9au, (u8)r0);
            f6 = (f64)rdf32((u32)param_8 + 0x44u);
            wr32(0x817fdf9cu, (u32)rd8((u32)param_8 + 0x9bu));
            f3 = (f64)(f32)(f3 * (f64)(f32)(rdf64(0x817fdf98u) - f5));
            f6 = (f64)(f32)(f6 + f3);
            f2 = (f64)(f32)px_fdiv(f6, f2);
            f1 = (f64)(f32)(f1 * f2);
            f1 = (f64)(f32)(f1 - f0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262598u, &a);
            f0 = (f64)(f32)f1;
            f5 = rdf64(0x80577938u);
            f3 = (f64)rdf32(0x80577950u);
            f2 = (f64)rdf32(0x8057792cu);
            f4 = px_ctiw(f0, ppc_fctiwz(f0));
            f1 = (f64)rdf32(0x80577928u);
            f0 = (f64)rdf32(0x80577930u);
            wrf64(0x817fdfb0u, f4);
            r3 = rd32(0x817fdfb4u);
            r0 = (r3 << 0x18u) & 0xff000000u;
            r3 = (r3 >> 0x1fu) & 1u;
            r0 = r0 - r3;
            r0 = (r0 << 8u) | (r0 >> 0x18u);
            r0 = r0 + r3;
            wr8(param_1 + 0x9bu, (u8)r0);
            f6 = (f64)rdf32((u32)param_8 + 0x48u);
            wr32(0x817fdfa4u, (u32)rd8((u32)param_8 + 0x9cu));
            f3 = (f64)(f32)(f3 * (f64)(f32)(rdf64(0x817fdfa0u) - f5));
            f6 = (f64)(f32)(f6 + f3);
            f2 = (f64)(f32)px_fdiv(f6, f2);
            f1 = (f64)(f32)(f1 * f2);
            f1 = (f64)(f32)(f1 - f0);
            a.f[0] = f1;
            f1 = tc_callf(0x80262598u, &a);
            f0 = (f64)(f32)f1;
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wrf64(0x817fdfb8u, f0);
            r3 = rd32(0x817fdfbcu);
            r0 = (r3 << 0x18u) & 0xff000000u;
            r3 = (r3 >> 0x1fu) & 1u;
            r0 = r0 - r3;
            r0 = (r0 << 8u) | (r0 >> 0x18u);
            r0 = r0 + r3;
            wr8(param_1 + 0x9cu, (u8)r0);
        }
    }
    return;
}
