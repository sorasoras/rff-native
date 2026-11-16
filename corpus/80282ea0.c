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

void fn_80282ea0(u32 param_r3, u32 param_r4)
{
    u32 c0eq = 0, ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r30 = rd32(((param_r3 << 2u) & 0x3fcu) - 0x7faf46b0u);
    c0eq = (u32)rd8(param_r3 - 0x7fa8e4f8u) == 0u;
    wr32(0x817fdfc8u, 0x43300000u);
    r0 = (u32)rd8(r30 + 0x8c8u);
    wr32(0x817fdfd0u, 0x43300000u);
    r0 = r0 * 0x60u;
    r29 = r30 + r0 + 0xa0u;
    if (c0eq && (u32)rd8(param_r3 - 0x7fa8e4f4u) == 0u) {
        r6 = 0u;
        ctr = 2u;
        do {
            wr8(r29 + r6, 0u);
            r5 = r29 + r6;
            r6 = r6 + 8u;
            wr8(r5 + 1u, 0u);
            wr8(r5 + 2u, 0u);
            wr8(r5 + 3u, 0u);
            wr8(r5 + 4u, 0u);
            wr8(r5 + 5u, 0u);
            wr8(r5 + 6u, 0u);
            wr8(r5 + 7u, 0u);
            r5 = r29 + r6;
            wr8(r29 + r6, 0u);
            r6 = r6 + 8u;
            wr8(r5 + 1u, 0u);
            wr8(r5 + 2u, 0u);
            wr8(r5 + 3u, 0u);
            wr8(r5 + 4u, 0u);
            wr8(r5 + 5u, 0u);
            wr8(r5 + 6u, 0u);
            wr8(r5 + 7u, 0u);
            r5 = r29 + r6;
            wr8(r29 + r6, 0u);
            r6 = r6 + 8u;
            wr8(r5 + 1u, 0u);
            wr8(r5 + 2u, 0u);
            wr8(r5 + 3u, 0u);
            wr8(r5 + 4u, 0u);
            wr8(r5 + 5u, 0u);
            wr8(r5 + 6u, 0u);
            wr8(r5 + 7u, 0u);
            r5 = r29 + r6;
            wr8(r29 + r6, 0u);
            r6 = r6 + 8u;
            wr8(r5 + 1u, 0u);
            wr8(r5 + 2u, 0u);
            wr8(r5 + 3u, 0u);
            wr8(r5 + 4u, 0u);
            wr8(r5 + 5u, 0u);
            wr8(r5 + 6u, 0u);
            wr8(r5 + 7u, 0u);
            r5 = r29 + r6;
            wr8(r29 + r6, 0u);
            r6 = r6 + 8u;
            wr8(r5 + 1u, 0u);
            wr8(r5 + 2u, 0u);
            wr8(r5 + 3u, 0u);
            wr8(r5 + 4u, 0u);
            wr8(r5 + 5u, 0u);
            wr8(r5 + 6u, 0u);
            wr8(r5 + 7u, 0u);
            r5 = r29 + r6;
            wr8(r29 + r6, 0u);
            r6 = r6 + 8u;
            wr8(r5 + 1u, 0u);
            wr8(r5 + 2u, 0u);
            wr8(r5 + 3u, 0u);
            wr8(r5 + 4u, 0u);
            wr8(r5 + 5u, 0u);
            wr8(r5 + 6u, 0u);
            wr8(r5 + 7u, 0u);
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    wr16(r29, (u16)((((u32)rd8(param_r4 + 1u) & 0xffff00ffu) | (((u32)rd8(param_r4 + 2u) << 8u) & 0xff00u)) & 0x9f1fu));
    r0 = rd32(r30 + 0x8b8u);
    if ((r0 == 0u || r0 == 1u) || r0 == 9u) {
        wr8(r29 + 0x29u, 0u);
    } else {
        wr8(r29 + 0x29u, 0xfcu);
    }
    wr8(r29 + 0x28u, rd8(r30 + 0x8c1u));
    wr32(r30 + 0x848u, 0u);
    wr16(r29 + 2u, (u16)((u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8(param_r4 + 3u) << 2u) & 0xfffffffcu) & 0xfffffffcu) | (u32)(s16)(((u32)rd8(param_r4 + 1u) >> 6u) & 2u)) - (u32)(s16)rd16(r30 + 0x874u)));
    wr16(r29 + 6u, (u16)((u32)(s16)rd16(r29 + 6u) | (u32)(s16)((u32)(s16)((u32)(s16)(((u32)rd8(param_r4 + 2u) << 3u) & 0xfffffff8u) & 0xffffff00u) | (((u32)rd8(param_r4 + 1u) << 1u) & 0xc0u))));
    wr16(r29 + 8u, (u16)((u32)rd8(param_r4 + 4u) | (((u32)rd8(param_r4 + 6u) << 4u) & 0x300u)));
    wr16(r29 + 0xau, (u16)(0x2ffu - (u32)(s16)((u32)rd8(param_r4 + 5u) | (((u32)rd8(param_r4 + 6u) << 2u) & 0x300u))));
    wr16(r29 + 0x32u, (u16)((((u32)(s16)(((u32)rd8(param_r4 + 0xbu) << 8u) & 0xff00u) | (u32)rd8(param_r4 + 0xcu)) << 6u) & 0xffc0u));
    wr8(r29 + 0x34u, (u8)((u32)rd8(param_r4 + 6u) & 0xfu));
    r6 = (u32)rd8(param_r4 + 7u);
    r5 = (u32)(s8)r6;
    wr16(r29 + 0x2au, (u16)(r6 & ~(u32)((s32)~((r5 + 1u) | (0xffffffffu - r5)) >> 31)));
    r6 = (u32)rd8(param_r4 + 8u);
    r5 = (u32)(s8)r6;
    wr16(r29 + 0x2cu, (u16)(r6 & ~(u32)((s32)~((r5 + 1u) | (0xffffffffu - r5)) >> 31)));
    r6 = (u32)rd8(param_r4 + 9u);
    r5 = (u32)(s8)r6;
    f3 = rdf64(0x80577318u);
    f0 = (f64)rdf32(0x80577320u);
    r0 = r6 & ~(u32)((s32)~((r5 + 1u) | (0xffffffffu - r5)) >> 31);
    wr16(r29 + 0x2eu, (u16)r0);
    r0 = (u32)(s16)r0;
    r7 = (u32)rd8(param_r4 + 0xau);
    wr16(r29 + 0x2au, (u16)(((u32)(s16)rd16(r29 + 0x2au) << 3u) & 0xfffffff8u));
    r5 = (u32)(s8)r7;
    r6 = r5 + 1u;
    r5 = 0xffffffffu - r5;
    r5 = ~(r6 | r5);
    r5 = (u32)((s32)r5 >> 31);
    r5 = r7 & ~r5;
    wr16(r29 + 0x2cu, (u16)(0x2ffu - (u32)(s16)(((u32)(s16)rd16(r29 + 0x2cu) << 3u) & 0xfffffff8u)));
    wr16(r29 + 0x2eu, (u16)((r0 << 3u) & 0xfffffff8u));
    wr16(r29 + 0x30u, (u16)(0x2ffu - (u32)(s16)(((u32)(s16)r5 << 3u) & 0xfffffff8u)));
    r0 = (u32)(s8)rd8(r29 + 0x34u) ^ 0x80000000u;
    wr32(0x817fdfccu, r0);
    wr32(0x817fdfd4u, r0);
    f0 = (f64)(f32)(f0 * (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3) * (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3)));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r3 = (u32)px_f2b(f0);
    wr16(r29 + 0xcu, (u16)r3);
    if (((r3 & 0xffffu) == 0u || (u32)(s16)rd16(r29 + 8u) == 0x3ffu) || ((u32)(s16)rd16(r29 + 0xau) == 0x2ffu || (u32)rd8(r29 + 0x34u) == 0xfu)) {
        wr16(r29 + 8u, 0u);
        wr16(r29 + 0xau, 0x2ffu);
        wr16(r29 + 0xcu, 0u);
        wr16(r29 + 0x32u, 0u);
        wr8(r29 + 0x34u, 0u);
    }
    f3 = rdf64(0x80577318u);
    wr8(r29 + 0xeu, 0u);
    f0 = (f64)rdf32(0x80577320u);
    wr16(r29 + 0x10u, (u16)((u32)rd8(param_r4 + 0xdu) | (((u32)rd8(param_r4 + 0xfu) << 4u) & 0x300u)));
    wr16(r29 + 0x12u, (u16)(0x2ffu - (u32)(s16)((u32)rd8(param_r4 + 0xeu) | (((u32)rd8(param_r4 + 0xfu) << 2u) & 0x300u))));
    wr16(r29 + 0x3eu, (u16)((((u32)(s16)(((u32)rd8(param_r4 + 0x14u) << 8u) & 0xff00u) | (u32)rd8(param_r4 + 0x15u)) << 6u) & 0xffc0u));
    r0 = (u32)rd8(param_r4 + 0xfu) & 0xfu;
    wr8(r29 + 0x40u, (u8)r0);
    r0 = r0 ^ 0x80000000u;
    r6 = (u32)rd8(param_r4 + 0x10u);
    wr32(0x817fdfccu, r0);
    r5 = (u32)(s8)r6;
    wr32(0x817fdfd4u, r0);
    f2 = (f64)(f32)(rdf64(0x817fdfc8u) - f3);
    r0 = r6 & ~(u32)((s32)~((r5 + 1u) | (0xffffffffu - r5)) >> 31);
    f1 = (f64)(f32)(rdf64(0x817fdfd0u) - f3);
    wr16(r29 + 0x36u, (u16)r0);
    r0 = (u32)(s16)r0;
    r7 = (r0 << 3u) & 0xfffffff8u;
    r6 = (u32)rd8(param_r4 + 0x11u);
    f1 = (f64)(f32)(f2 * f1);
    r5 = (u32)(s8)r6;
    f0 = (f64)(f32)(f0 * f1);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r0 = r6 & ~(u32)((s32)~((r5 + 1u) | (0xffffffffu - r5)) >> 31);
    wr16(r29 + 0x38u, (u16)r0);
    r0 = (u32)(s16)r0;
    r0 = (r0 << 3u) & 0xfffffff8u;
    r9 = (u32)rd8(param_r4 + 0x12u);
    r6 = (u32)(s16)r0;
    r8 = (u32)(s8)r9;
    r3 = (u32)px_f2b(f0);
    r0 = r9 & ~(u32)((s32)~((r8 + 1u) | (0xffffffffu - r8)) >> 31);
    wr16(r29 + 0x3au, (u16)r0);
    r0 = (u32)(s16)r0;
    r9 = (u32)rd8(param_r4 + 0x13u);
    r8 = (u32)(s8)r9;
    wr16(r29 + 0x36u, (u16)r7);
    wr16(r29 + 0x38u, (u16)(0x2ffu - r6));
    wr16(r29 + 0x3au, (u16)((r0 << 3u) & 0xfffffff8u));
    wr16(r29 + 0x3cu, (u16)(0x2ffu - (u32)(s16)(((u32)(s16)(r9 & ~(u32)((s32)~((r8 + 1u) | (0xffffffffu - r8)) >> 31)) << 3u) & 0xfffffff8u)));
    wr16(r29 + 0x14u, (u16)r3);
    if (((r3 & 0xffffu) == 0u || (u32)(s16)rd16(r29 + 0x10u) == 0x3ffu) || ((u32)(s16)rd16(r29 + 0x12u) == 0x2ffu || (u32)rd8(r29 + 0x40u) == 0xfu)) {
        wr16(r29 + 0x10u, 0u);
        wr16(r29 + 0x12u, 0x2ffu);
        wr16(r29 + 0x14u, 0u);
        wr16(r29 + 0x3eu, 0u);
        wr8(r29 + 0x40u, 0u);
    }
    wr8(r29 + 0x16u, 1u);
    r3 = tc_call(0x8022c2b0u, &a);
    wr8(param_r3 - 0x7fa8e4f8u, 1u);
    if ((u32)rd8(param_r3 - 0x7fa8e4f4u) != 0u) {
        wr16(r29 + 6u, (u16)((u32)(s16)rd16(r29 + 6u) - (u32)(s16)rd16(r30 + 0x878u)));
        wr8(r30 + 0x8c8u, (u8)((ppc_cntlzw((u32)rd8(r30 + 0x8c8u)) >> 5u) & 0xffu));
        wr8(param_r3 - 0x7fa8e4f4u, 0u);
        wr8(param_r3 - 0x7fa8e4f8u, 0u);
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
