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

void fn_80082068(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r23 = 0, r24 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr16(param_3, 0u);
    wr16(param_4, 0u);
    r28 = 0u;
    r29 = (u32)rd16(0x8049e196u);
    r31 = (u32)rd8(0x8049e1a0u);
    if (param_1 <= 9u) {
        r5 = rd32(((param_1 << 2u) & 0xfffffffcu) - 0x7fcaefd8u);
        sw_ = r5;
        switch (sw_) {
        case 0x800820d8u:
            r28 = (u32)rd8(0x804990acu);
            break;
        case 0x800820e8u:
            r28 = (u32)rd8(0x804990adu);
            break;
        case 0x800820f8u:
            r28 = (u32)rd8(0x804990aeu);
            break;
        case 0x80082108u:
            r28 = (u32)rd8(0x804990afu);
            break;
        case 0x80082118u:
            r28 = (u32)rd8(0x804990b0u);
            break;
        case 0x80082128u:
            r28 = (u32)rd8(0x804990b1u);
            break;
        case 0x80082138u:
            r28 = (u32)rd8(0x804990b2u);
            break;
        case 0x80082148u:
            r28 = (u32)rd8(0x804990b3u);
            break;
        case 0x80082158u:
            r28 = (u32)rd8(0x804990b4u);
            break;
        case 0x80082168u:
            r28 = (u32)rd8(0x804990b5u);
            break;
        default:
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = param_4;
            a.r[4] = (u32)param_5;
            a.r[5] = 0x8049e140u;
            a.f[0] = 0.0;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            r3 = tc_call(sw_, &a);
            r0 = 0u;
            r4 = tc_lastr4();
            r5 = 0u;
            r6 = 0u;
            r7 = 0u;
            r8 = 0u;
            r9 = 0u;
            r10 = 0u;
            r11 = 0u;
            r12 = 0u;
            f0 = 0.0;
            f2 = 0.0;
            f3 = 0.0;
            f4 = 0.0;
            f5 = 0.0;
            f6 = 0.0;
            f7 = 0.0;
            f8 = 0.0;
            f9 = 0.0;
            f10 = 0.0;
            f11 = 0.0;
            f12 = 0.0;
            f13 = 0.0;
            ctr = 0u;
            return;
        }
    }
    wr32(0x817fdfacu, (param_2 - 1u) ^ 0x80000000u);
    f2 = rdf64(0x805728c0u);
    r23 = 1u;
    wr32(0x817fdfa8u, 0x43300000u);
    f2 = (f64)(f32)(rdf64(0x817fdfa8u) - f2);
    r24 = (u32)rd16(0x8049908cu);
    r30 = (u32)rd16(0x8049908au);
    f30 = ppc_fnmsubs((f64)rdf32(0x805728d0u), f2, (f64)rdf32(0x805728ccu));
    if ((rd32(0x80499094u) & 8u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 8u;
        r3 = tc_call(0x801a8f18u, &a);
        if (r3 == 0u) {
            r23 = 0u;
        }
    }
    if (r23 == 0u) {
        f31 = (f64)rdf32(0x805728ccu);
    } else {
        f31 = (f64)rdf32(0x805728d4u);
    }
    r23 = 1u;
    if ((rd32(0x80499094u) & 4u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 4u;
        r3 = tc_call(0x801a8f18u, &a);
        if (r3 == 0u) {
            r23 = 0u;
        }
    }
    if (r23 == 0u) {
        f0 = (f64)rdf32(0x805728ccu);
    } else {
        f0 = (f64)rdf32(0x805728d8u);
    }
    f3 = (f64)(f32)(f0 * f31);
    if (r28 <= r31) {
        r4 = r29 + ((r31 - r28) * 0x1eu);
        if ((s32)r4 >= 0) {
            if ((s32)r4 > 65535) {
                r4 = 0xffffu;
            }
        } else {
            r4 = 0u;
        }
        r29 = r4 & 0xffffu;
    }
    if ((u32)param_5 == 0u) {
        f2 = (f64)rdf32(0x805728ccu);
    } else {
        f2 = (f64)rdf32(0x805728d4u);
    }
    wr32(0x817fdfacu, r29);
    r3 = 0xffffu;
    f1 = rdf64(0x805728e0u);
    wr32(0x817fdfa8u, 0x43300000u);
    f0 = (f64)(f32)((f64)(f32)(f3 * (f64)(f32)((f64)(f32)(px_b2f((u64)r29 | 0x4330000000000000ull) - f1) * f30)) * f2);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r0 = (u32)px_f2b(f0);
    if ((s32)r0 <= 65535) {
        r3 = r0;
    }
    r29 = r3 & 0xffffu;
    if (r24 <= r29) {
        if (r24 == 0u) {
            r0 = ((r29 << 2u) & 0x3fffcu) + r29;
            if (r30 >= r0) {
                r30 = r0;
            }
            wr16(param_4, (u16)r30);
        } else {
            wr16(param_3, (u16)r24);
        }
    } else {
        wr16(param_3, (u16)r29);
    }
    return;
}
