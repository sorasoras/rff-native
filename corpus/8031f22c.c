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

void fn_8031f22c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r12 = 0, r27 = 0;
    u32 r29 = 0, t0 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, t7 = 0.0, t9 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r0 = (u32)rd8(param_1 + 0x6cu);
    c0lt = (s32)r0 < 2;
    if (r0 != 2u) {
        if (!c0lt) {
            return;
        }
        if ((s32)r0 < 1) {
            return;
        }
        r8 = (u32)rd8(param_3 + 1u);
        r7 = (u32)rd8(param_3 + 2u);
        r4 = (u32)rd8(param_3 + 3u);
        wr8(param_3, (u8)((s32)(((u32)rd8(param_3) * (u32)rd8(param_1 + 0x6du)) + 0x80u) >> 8));
        r8 = r8 * (u32)rd8(param_1 + 0x6eu);
        wr8(param_3 + 1u, (u8)((s32)(r8 + 0x80u) >> 8));
        r7 = r7 * (u32)rd8(param_1 + 0x6fu);
        wr8(param_3 + 2u, (u8)((s32)(r7 + 0x80u) >> 8));
        r4 = r4 * (u32)rd8(param_1 + 0x70u);
        wr8(param_3 + 3u, (u8)((s32)(r4 + 0x80u) >> 8));
        r7 = (u32)rd8(param_4 + 1u);
        r5 = (u32)rd8(param_4 + 2u);
        r4 = (u32)rd8(param_4 + 3u);
        wr8(param_4, (u8)((s32)(((u32)rd8(param_4) * (u32)rd8(param_1 + 0x6du)) + 0x80u) >> 8));
        r7 = r7 * (u32)rd8(param_1 + 0x6eu);
        wr8(param_4 + 1u, (u8)((s32)(r7 + 0x80u) >> 8));
        r5 = r5 * (u32)rd8(param_1 + 0x6fu);
        wr8(param_4 + 2u, (u8)((s32)(r5 + 0x80u) >> 8));
        wr8(param_4 + 3u, (u8)((s32)((r4 * (u32)rd8(param_1 + 0x70u)) + 0x80u) >> 8));
    } else {
        if ((f64)rdf32(param_1 + 0x78u) < (f64)rdf32(0x805779a8u)) {
            r8 = (u32)rd8(param_3 + 1u);
            r7 = (u32)rd8(param_3 + 2u);
            r4 = (u32)rd8(param_3 + 3u);
            wr8(param_3, (u8)((s32)(((u32)rd8(param_3) * (u32)rd8(param_1 + 0x6du)) + 0x80u) >> 8));
            r8 = r8 * (u32)rd8(param_1 + 0x6eu);
            wr8(param_3 + 1u, (u8)((s32)(r8 + 0x80u) >> 8));
            r7 = r7 * (u32)rd8(param_1 + 0x6fu);
            wr8(param_3 + 2u, (u8)((s32)(r7 + 0x80u) >> 8));
            r4 = r4 * (u32)rd8(param_1 + 0x70u);
            wr8(param_3 + 3u, (u8)((s32)(r4 + 0x80u) >> 8));
            r7 = (u32)rd8(param_4 + 1u);
            r5 = (u32)rd8(param_4 + 2u);
            r4 = (u32)rd8(param_4 + 3u);
            wr8(param_4, (u8)((s32)(((u32)rd8(param_4) * (u32)rd8(param_1 + 0x6du)) + 0x80u) >> 8));
            r7 = r7 * (u32)rd8(param_1 + 0x6eu);
            wr8(param_4 + 1u, (u8)((s32)(r7 + 0x80u) >> 8));
            r5 = r5 * (u32)rd8(param_1 + 0x6fu);
            wr8(param_4 + 2u, (u8)((s32)(r5 + 0x80u) >> 8));
            wr8(param_4 + 3u, (u8)((s32)((r4 * (u32)rd8(param_1 + 0x70u)) + 0x80u) >> 8));
        } else {
            a.r[0] = 0x8056ff40u;
            a.r[1] = param_2 + 0xacu;
            a.r[2] = 0x817fdfc8u;
            (void)tc_call(0x8023411cu, &a);
            t0 = param_1 + 0x7cu;
            t7 = (f64)(f32)((f64)rdf32(0x817fdfccu) - (f64)rdf32(t0 + 4u));
            t9 = (f64)rdf32(0x817fdfd0u);
            wrf32d(0x817fdfc8u, (f64)(f32)((f64)rdf32(0x817fdfc8u) - (f64)rdf32(t0)));
            wrf32d(0x817fdfccu, t7);
            wrf32d(0x817fdfd0u, (f64)(f32)(t9 - (f64)rdf32(param_1 + 0x84u)));
            a.r[0] = 0x817fdfc8u;
            f1 = tc_callf(0x80234440u, &a);
            f2 = (f64)rdf32(param_1 + 0x78u);
            if (f1 > f2) {
                r5 = (u32)rd8(param_3 + 1u);
                r4 = (u32)rd8(param_3 + 2u);
                r3 = (u32)rd8(param_3 + 3u);
                wr8(param_3, (u8)((s32)(((u32)rd8(param_3) * (u32)rd8(param_1 + 0x6du)) + 0x80u) >> 8));
                r5 = r5 * (u32)rd8(param_1 + 0x6eu);
                wr8(param_3 + 1u, (u8)((s32)(r5 + 0x80u) >> 8));
                r4 = r4 * (u32)rd8(param_1 + 0x6fu);
                wr8(param_3 + 2u, (u8)((s32)(r4 + 0x80u) >> 8));
                r3 = r3 * (u32)rd8(param_1 + 0x70u);
                wr8(param_3 + 3u, (u8)((s32)(r3 + 0x80u) >> 8));
                r5 = (u32)rd8(param_4 + 1u);
                r4 = (u32)rd8(param_4 + 2u);
                r3 = (u32)rd8(param_4 + 3u);
                wr8(param_4, (u8)((s32)(((u32)rd8(param_4) * (u32)rd8(param_1 + 0x6du)) + 0x80u) >> 8));
                r5 = r5 * (u32)rd8(param_1 + 0x6eu);
                wr8(param_4 + 1u, (u8)((s32)(r5 + 0x80u) >> 8));
                r4 = r4 * (u32)rd8(param_1 + 0x6fu);
                wr8(param_4 + 2u, (u8)((s32)(r4 + 0x80u) >> 8));
                r3 = r3 * (u32)rd8(param_1 + 0x70u);
                wr8(param_4 + 3u, (u8)((s32)(r3 + 0x80u) >> 8));
            } else {
                r4 = (u32)rd8(param_1 + 0x71u);
                r5 = (u32)rd8(param_1 + 0x72u);
                r27 = (r4 << 8u) & 0xffffff00u;
                r6 = (u32)rd8(param_1 + 0x6du) - r4;
                f0 = (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x805779acu) * f1), f2);
                r7 = (u32)rd8(param_1 + 0x73u);
                r9 = (u32)rd8(param_1 + 0x6eu) - r5;
                r8 = (u32)rd8(param_1 + 0x74u);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                r3 = (u32)rd8(param_1 + 0x6fu) - r7;
                r12 = (r7 << 8u) & 0xffffff00u;
                r4 = (u32)rd8(param_1 + 0x70u) - r8;
                wrf64(0x817fdfd8u, f0);
                r29 = rd32(0x817fdfdcu);
                r0 = r29 * r6;
                r7 = (u32)rd8(param_3 + 2u);
                r6 = (u32)rd8(param_3 + 3u);
                r10 = r29 * r9;
                r0 = r27 + r0;
                r0 = r0 & 0xffffu;
                r9 = r29 * r3;
                r3 = (((r5 << 8u) & 0xffffff00u) + r10) & 0xffffu;
                r10 = r29 * r4;
                r4 = (r12 + r9) & 0xffffu;
                r5 = (((r8 << 8u) & 0xffffff00u) + r10) & 0xffffu;
                r8 = (u32)rd8(param_3 + 1u) * r3;
                wr8(param_3, (u8)((s32)(((u32)rd8(param_3) * r0) + 0x80u) >> 16));
                r7 = r7 * r4;
                r8 = r8 + 0x80u;
                r8 = (u32)((s32)r8 >> 16);
                wr8(param_3 + 1u, (u8)r8);
                r6 = r6 * r5;
                r7 = r7 + 0x80u;
                r7 = (u32)((s32)r7 >> 16);
                wr8(param_3 + 2u, (u8)r7);
                r6 = r6 + 0x80u;
                r6 = (u32)((s32)r6 >> 16);
                wr8(param_3 + 3u, (u8)r6);
                r8 = (u32)rd8(param_4) * r0;
                r6 = (u32)rd8(param_4 + 2u);
                r0 = (u32)rd8(param_4 + 3u);
                r3 = (u32)rd8(param_4 + 1u) * r3;
                wr8(param_4, (u8)((s32)(r8 + 0x80u) >> 16));
                r3 = r3 + 0x80u;
                r3 = (u32)((s32)r3 >> 16);
                wr8(param_4 + 1u, (u8)r3);
                r4 = r6 * r4;
                wr8(param_4 + 2u, (u8)((s32)(r4 + 0x80u) >> 16));
                wr8(param_4 + 3u, (u8)((s32)((r0 * r5) + 0x80u) >> 16));
            }
        }
    }
    return;
}
