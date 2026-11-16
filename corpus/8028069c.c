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

void fn_8028069c(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r9 = 0, r12 = 0, r22 = 0, r23 = 0, r25 = 0, r26 = 0;
    u32 r27 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f27 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if ((u32)param_3 == 3u) {
        f3 = rdf64(0x80577328u);
        f1 = (f64)rdf32(0x80577320u);
        r5 = 0u;
        ctr = 4u;
        do {
            r9 = ((r5 << 2u) & 0x3fcu) - (r5 & 0xffu);
            if ((s32)(r9 + 2u) < param_5) {
                r12 = (u32)param_4 + r9;
                r22 = (u32)rd8(r12 + 2u);
                r0 = (r5 << 3u) & 0x7f8u;
                r26 = (u32)rd8(r12);
                r12 = (u32)rd8(r12 + 1u);
                r26 = (u32)(s16)r26;
                r12 = (u32)(s16)r12;
                wr16(rd32(param_2) + r0 + 8u, (u16)(r26 | ((r22 << 4u) & 0x300u)));
                wr16(rd32(param_2) + r0 + 0xau, (u16)(0x2ffu - (u32)(s16)(r12 | ((r22 << 2u) & 0x300u))));
                wr16(rd32(param_2) + r0 + 0xcu, (u16)(r22 & 0xfu));
                r12 = rd32(param_2) + r0;
                r9 = (u32)rd16(r12 + 0xcu);
                f0 = (f64)(f32)(f1 * (f64)(f32)((f64)(f32)(px_b2f((u64)r9 | 0x4330000000000000ull) - f3) * (f64)(f32)(px_b2f((u64)r9 | 0x4330000000000000ull) - f3)));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wr16(r12 + 0xcu, (u16)((u32)px_f2b(f0) & 0xffu));
                r12 = rd32(param_2) + r0;
                if (((u32)rd16(r12 + 0xcu) == 0u || (u32)(s16)rd16(r12 + 8u) == 0x3ffu) || (u32)(s16)rd16(r12 + 0xau) == 0x2ffu) {
                    wr16(r12 + 8u, 0u);
                    wr16(rd32(param_2) + r0 + 0xau, 0x2ffu);
                    wr16(rd32(param_2) + r0 + 0xcu, 0u);
                }
                wr8(rd32(param_2) + r0 + 0xeu, (u8)r5);
            } else {
                r12 = (r5 << 3u) & 0x7f8u;
                wr16(rd32(param_2) + r12 + 8u, 0u);
                wr16(rd32(param_2) + r12 + 0xau, 0x2ffu);
                wr16(rd32(param_2) + r12 + 0xcu, 0u);
                wr8(rd32(param_2) + r12 + 0xeu, (u8)r5);
            }
            r5 = r5 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    } else {
        if ((u32)param_3 == 1u) {
            r5 = 0u;
            ctr = 4u;
            do {
                r23 = r5 & 0xffu;
                r7 = (r23 >> 0x1fu) & 1u;
                r23 = ((r5 << 2u) & 0x3fcu) - r23;
                r25 = (r5 >> 1u) & 0x7fu;
                r23 = (u32)param_4 + r23;
                r23 = r23 - r25;
                r26 = (u32)rd8(r23);
                r22 = (u32)rd8(r23 + 1u);
                r25 = (u32)rd8((u32)param_4 + (((r5 << 1u) & 0x1fcu) + r25) + 2u);
                if ((((r5 & 1u) ^ r7) - r7) == 0u) {
                    r0 = (r5 << 3u) & 0x7f8u;
                    wr16(rd32(param_2) + r0 + 8u, (u16)((u32)(s16)r26 | ((r25 << 4u) & 0x300u)));
                    wr16(rd32(param_2) + r0 + 0xau, (u16)(0x2ffu - (u32)(s16)((u32)(s16)r22 | ((r25 << 2u) & 0x300u))));
                } else {
                    r0 = (r5 << 3u) & 0x7f8u;
                    wr16(rd32(param_2) + r0 + 8u, (u16)((u32)(s16)r26 | ((r25 << 8u) & 0x300u)));
                    wr16(rd32(param_2) + r0 + 0xau, (u16)(0x2ffu - (u32)(s16)((u32)(s16)r22 | ((r25 << 6u) & 0x300u))));
                }
                r12 = rd32(param_2) + r0;
                if ((u32)(s16)rd16(r12 + 8u) == 0x3ffu || (u32)(s16)rd16(r12 + 0xau) == 0x2ffu) {
                    wr16(r12 + 8u, 0u);
                    wr16(rd32(param_2) + r0 + 0xau, 0x2ffu);
                    wr16(rd32(param_2) + r0 + 0xcu, 0u);
                } else {
                    wr16(r12 + 0xcu, 0xcu);
                }
                wr8(rd32(param_2) + r0 + 0xeu, (u8)r5);
                r5 = r5 + 1u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    f30 = rdf64(0x80577318u);
    r27 = (param_1 << 2u) & 0xfffffffcu;
    f31 = (f64)rdf32(0x80577308u);
    r25 = 0u;
    do {
        r5 = rd32(param_2);
        r26 = (r25 << 3u) & 0x7f8u;
        r3 = r5 + r26;
        r4 = (u32)(s16)rd16(r3 + 8u);
        if (r4 != 0u || (u32)(s16)rd16(r3 + 0xau) != 0x2ffu) {
            r22 = r5 + r26;
            f29 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)(r4 ^ 0x80000000u) | 0x4330000000000000ull) - f30) + (f64)rdf32(r27 - 0x7faf0fb8u)) - (f64)rdf32(r27 - 0x7faf0f98u));
            f27 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)((u32)(s16)rd16(r22 + 0xau) ^ 0x80000000u) | 0x4330000000000000ull) - f30) + (f64)rdf32(r27 - 0x7faf0fa8u)) - (f64)rdf32(r27 - 0x7faf0f88u));
            a.f[0] = (f64)(f32)(f31 * (f64)rdf32(r27 - 0x7faf0f78u));
            f1 = tc_callf(0x80262b10u, &a);
            f2 = (f64)(f32)f1;
            a.f[0] = (f64)(f32)(f31 * (f64)rdf32(r27 - 0x7faf0f78u));
            f1 = tc_callf(0x80262704u, &a);
            f1 = (f64)(f32)f1;
            f1 = (f64)(f32)(f29 * f1);
            f1 = (f64)(f32)(f1 - (f64)(f32)(f27 * f2));
            f0 = (f64)(f32)((f64)rdf32(r27 - 0x7faf0f98u) + f1);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wr16(r22 + 8u, (u16)px_f2b(f0));
            a.f[0] = (f64)(f32)(f31 * (f64)rdf32(r27 - 0x7faf0f78u));
            f1 = tc_callf(0x80262704u, &a);
            f2 = (f64)(f32)f1;
            a.f[0] = (f64)(f32)(f31 * (f64)rdf32(r27 - 0x7faf0f78u));
            f1 = tc_callf(0x80262b10u, &a);
            f1 = (f64)(f32)f1;
            f1 = (f64)(f32)(f29 * f1);
            f1 = (f64)(f32)(f1 + (f64)(f32)(f27 * f2));
            f0 = (f64)(f32)((f64)rdf32(r27 - 0x7faf0f88u) + f1);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wr16(rd32(param_2) + r26 + 0xau, (u16)px_f2b(f0));
        }
        r25 = r25 + 1u;
    } while (r25 < 4u);
    return;
}
