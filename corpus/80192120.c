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

u32 fn_80192120(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, r31 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    r29 = 0u;
    r3 = (u32)rd16(param_2);
    r4 = ((r3 - 0x1f8u) * 0x14u) - 0x7fb60e50u;
    r30 = (u32)rd16(r4 + 0x618u);
    r31 = (u32)rd8(r4 + 0x61du);
    a.r[0] = r3;
    r3 = tc_call(0x800cd6e4u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r3 = r3 & 0xffu;
    r0 = r3 - 5u;
    if (r0 <= 0xbu) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32(r0 - 0x7fc8ff48u);
        sw_ = r3;
        switch (sw_) {
        case 0x8019223cu:
            break;
        case 0x801921a0u:
            r29 = (u32)rd8(0x804990b1u);
            break;
        case 0x801921b0u:
            r29 = (u32)rd8(0x804990aeu);
            break;
        case 0x801921c0u:
            r29 = (u32)rd8(0x804990aeu);
            break;
        case 0x801921d0u:
            r29 = (u32)rd8(0x804990aeu);
            break;
        case 0x801921e0u:
            r29 = (u32)rd8(0x804990afu);
            break;
        case 0x801921f0u:
            r29 = (u32)rd8(0x804990b0u);
            break;
        case 0x80192200u:
            r29 = (u32)rd8(0x804990acu);
            break;
        case 0x80192210u:
            r29 = (u32)rd8(0x804990acu);
            break;
        case 0x80192220u:
            r29 = (u32)rd8(0x804990acu);
            break;
        case 0x80192230u:
            r29 = (u32)rd8(0x804990adu);
            break;
        default:
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
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
            return r3;
        }
    }
    r3 = (u32)rd8(param_2 + 3u);
    wr32(0x817fdfb8u, 0x43300000u);
    f2 = rdf64(0x805753c8u);
    wr32(0x817fdfbcu, (r3 - 1u) ^ 0x80000000u);
    r28 = 1u;
    f2 = (f64)(f32)(rdf64(0x817fdfb8u) - f2);
    f30 = ppc_fnmsubs((f64)rdf32(0x805753bcu), f2, (f64)rdf32(0x805753b8u));
    if ((rd32(0x80499094u) & 8u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 8u;
        r3 = tc_call(0x801a8f18u, &a);
        if (r3 == 0u) {
            r28 = 0u;
        }
    }
    if (r28 == 0u) {
        f31 = (f64)rdf32(0x805753b8u);
    } else {
        f31 = (f64)rdf32(0x805753c0u);
    }
    r28 = 1u;
    if ((rd32(0x80499094u) & 4u) == 0u) {
        a.r[0] = 0x8049e140u;
        a.r[1] = 4u;
        r3 = tc_call(0x801a8f18u, &a);
        if (r3 == 0u) {
            r28 = 0u;
        }
    }
    if (r28 == 0u) {
        f0 = (f64)rdf32(0x805753b8u);
    } else {
        f0 = (f64)rdf32(0x805753c4u);
    }
    f2 = (f64)(f32)(f0 * f31);
    if (r29 <= r31) {
        r4 = r30 + ((r31 - r29) * 0x1eu);
        if ((s32)r4 >= 0) {
            if ((s32)r4 > 65535) {
                r4 = 0xffffu;
            }
        } else {
            r4 = 0u;
        }
        r30 = r4 & 0xffffu;
    }
    wr32(0x817fdfbcu, r30);
    f1 = rdf64(0x805753d0u);
    wr32(0x817fdfb8u, 0x43300000u);
    f0 = (f64)(f32)(f2 * (f64)(f32)((f64)(f32)(px_b2f((u64)r30 | 0x4330000000000000ull) - f1) * f30));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    return (u32)px_f2b(f0) & 0xffffu;
}
