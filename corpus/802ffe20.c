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

void fn_802ffe20(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r27 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdfc0u, 0x43300000u);
    wr32(0x817fdfc8u, 0x43300000u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r0 = (u32)param_3 * (u32)rd8(param_1 + 0xb7u);
    r31 = rd32(param_1 + 0xecu);
    r30 = 0u;
    r0 = ppc_mulhw(-2130574327, (s32)r0) + r0;
    r0 = (u32)((s32)r0 >> 6);
    r27 = r0 + ((r0 >> 0x1fu) & 1u);
    if ((u32)param_5 != 0u) {
        r30 = rd32(param_1 + 0xf0u);
        if (r30 != 0u) {
            wr32(0x817fdfc4u, r27 ^ 0x80000000u);
            f0 = (f64)rdf32(0x805776d0u);
            f1 = (f64)(f32)(rdf64(0x817fdfc0u) - rdf64(0x805776f0u));
            wr32(r30 + 0xc4u, param_2 & 0xffu);
            f0 = (f64)(f32)px_fdiv(f1, f0);
            f0 = (f64)(f32)(f0 * f0);
            wrf32d(r30 + 0xacu, f0);
        }
    }
    if ((u32)rd8(param_1 + 0x5bu) != 0u) {
        r30 = rd32(param_1 + 0xf0u);
        if (r30 != 0u) {
            if (rd32(r30) == 4u) {
                a.r[0] = r30;
                (void)tc_call(0x802f80dcu, &a);
                r30 = 0u;
            } else {
                wr32(0x817fdfccu, r27 ^ 0x80000000u);
                f0 = (f64)rdf32(0x805776d0u);
                f1 = (f64)(f32)(rdf64(0x817fdfc8u) - rdf64(0x805776f0u));
                wr32(r30 + 0xc4u, param_2 & 0xffu);
                f0 = (f64)(f32)px_fdiv(f1, f0);
                f0 = (f64)(f32)(f0 * f0);
                wrf32d(r30 + 0xacu, f0);
                wr32(r30 + 0xccu, (u32)param_4);
            }
        }
    }
    if (r30 == 0u) {
        r0 = 0xffffffffu;
        r10 = rd32(0x80349eb4u);
        r9 = rd32(0x80349eb8u);
        r8 = rd32(0x80349ebcu);
        r7 = rd32(0x80349ec0u);
        r6 = rd32(0x80349ec4u);
        r5 = rd32(0x80349ec8u);
        r4 = rd32(0x80349eccu);
        r3 = rd32(0x80349ed0u);
        wr32(0x817fdf98u, rd32(0x80349eb0u));
        wr32(0x817fdf9cu, r10);
        wr32(0x817fdfa0u, r9);
        wr32(0x817fdfa4u, r8);
        wr32(0x817fdfa8u, r7);
        wr32(0x817fdfacu, r6);
        wr32(0x817fdfb0u, r5);
        wr32(0x817fdfb4u, r4);
        wr32(0x817fdfb8u, r3);
        wr32(0x817fdf98u, rd32(param_1 + 0x88u));
        wr32(0x817fdf9cu, param_2);
        wr32(0x817fdfa0u, r27);
        if ((u32)param_5 == 0u) {
            r0 = (u32)param_4;
        }
        wr32(0x817fdfa4u, r0);
        wr32(0x817fdfa8u, (u32)(s8)rd8(param_1 + 0xbau));
        wr32(0x817fdfacu, (u32)rd8(r31 + 0x105u) + (u32)rd8(param_1 + 0xbcu));
        wr32(0x817fdfb0u, rd32(rd32(param_1 + 0xecu) + 0x100u));
        wr32(0x817fdfb8u, param_1);
        a.r[0] = rd32(param_1 + 0xecu);
        a.r[1] = rd32(param_1 + 0x84u);
        a.r[2] = 0x817fdf98u;
        r3 = tc_call(0x802fe608u, &a);
        r30 = r3;
        if (r3 == 0u) {
            r3 = tc_call(0x80306860u, &a);
            r3 = r3 + 0x354u;
            a.r[0] = r3;
            (void)tc_call(0x8022d648u, &a);
            return;
        }
        if ((s32)rd32(r3 + 0xd8u) > 0) {
            r27 = rd32(param_1 + 0xf0u);
            while (r27 != 0u) {
                if (rd32(r27 + 0xd8u) == rd32(r30 + 0xd8u)) {
                    a.r[0] = r27;
                    (void)tc_call(0x802f8000u, &a);
                }
                r27 = rd32(r27 + 0xf0u);
            }
        }
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d56cu, &a);
        wr32(r30 + 0xf0u, rd32(param_1 + 0xf0u));
        wr32(param_1 + 0xf0u, r30);
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    }
    r4 = (u32)rd8(param_1 + 0xbfu);
    if (r4 <= 0x7fu) {
        a.r[0] = r30;
        a.r[1] = r4;
        (void)tc_call(0x802f909cu, &a);
    }
    r4 = (u32)rd8(param_1 + 0xc0u);
    if (r4 <= 0x7fu) {
        a.r[0] = r30;
        a.r[1] = r4;
        (void)tc_call(0x802f90ccu, &a);
    }
    r4 = (u32)rd8(param_1 + 0xc1u);
    if (r4 <= 0x7fu) {
        a.r[0] = r30;
        a.r[1] = r4;
        (void)tc_call(0x802f916cu, &a);
    }
    r4 = (u32)rd8(param_1 + 0xc2u);
    if (r4 <= 0x7fu) {
        a.r[0] = r30;
        a.r[1] = r4;
        (void)tc_call(0x802f9174u, &a);
    }
    r4 = (u32)(s16)rd16(param_1 + 0xc4u);
    if ((s32)r4 <= 127) {
        a.r[0] = r30;
        a.r[1] = r4;
        (void)tc_call(0x802f90b4u, &a);
    }
    f1 = (f64)rdf32(param_1 + 0xa0u);
    if ((u32)rd8(param_1 + 0x7fu) != 0u) {
        f2 = rdf64(0x805776f0u);
        wr32(0x817fdfc4u, ((u32)rd8(param_1 + 0xbdu) - param_2) ^ 0x80000000u);
        f1 = (f64)(f32)(f1 + (f64)(f32)(rdf64(0x817fdfc0u) - f2));
    }
    r0 = (u32)rd8(param_1 + 0xbeu);
    if (r0 == 0u) {
        a.f[0] = f1;
        a.r[0] = r30;
        a.r[1] = (u32)param_4;
        a.r[2] = 0u;
        (void)tc_call(0x802f8228u, &a);
    } else {
        f0 = (f64)rdf32(0x805776ccu);
        r0 = r0 * r0;
        if ((f1 > f0) || (f1 == f0)) {
            f3 = f1;
        } else {
            f3 = -f1;
        }
        r0 = r0 ^ 0x80000000u;
        f2 = rdf64(0x805776f0u);
        wr32(0x817fdfccu, r0);
        f0 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfc8u) - f2) * f3);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfd0u, f0);
        r4 = (u32)((s32)rd32(0x817fdfd4u) >> 5);
        r4 = ((r4 << 2u) & 0xfffffffcu) + r4;
        a.f[0] = f1;
        a.r[0] = r30;
        a.r[1] = r4;
        a.r[2] = 1u;
        (void)tc_call(0x802f8228u, &a);
    }
    wr8(param_1 + 0xbdu, (u8)param_2);
    r3 = (u32)rd8(param_1 + 0x7du);
    r5 = (u32)rd16(r30 + 0xbeu);
    r4 = (u32)rd16(r30 + 0xc0u);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    if (r4 >= r5) {
        r4 = (u32)rd8(r30 + 0xbdu);
    } else {
        r6 = (u32)rd8(r30 + 0xbcu);
        r4 = (r6 + (u32)ppc_divw((s32)(r4 * ((u32)rd8(r30 + 0xbdu) - r6)), (s32)r5)) & 0xffu;
    }
    wr8(r30 + 0xbcu, (u8)r4);
    r3 = ~(u32)((s32)((0u - r3) | r3) >> 31) & 0xffu;
    wr8(r30 + 0xbdu, (u8)r3);
    wr16(r30 + 0xbeu, 0u);
    wr16(r30 + 0xc0u, 0u);
    wr8(r30 + 0x39u, rd8(rd32(param_1 + 0xecu) + 0xebu));
    wr32(r30 + 0xd0u, rd32(rd32(param_1 + 0xecu) + 0x28u));
    wr32(r30 + 0xd4u, rd32(rd32(param_1 + 0xecu) + 0x2cu));
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
