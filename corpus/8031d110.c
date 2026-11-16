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

u32 fn_8031d110(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0, r9 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    r31 = rd32(rd32((u32)param_1 + 0xc8u) + 0x24u);
    r9 = (u32)rd8(r31 + 0x10du);
    if (r9 != 0u) {
        r8 = (u32)rd16(r31 + 0x10eu);
        r0 = 0xffffu;
        r4 = (u32)((s32)ppc_mulhw(346302875, (s32)((u32)rd8(r31 + 0x110u) * r8 * (u32)(s8)rd8((u32)param_1 + 0x99u))) >> 10);
        r4 = r4 + ((r4 >> 0x1fu) & 1u);
        r4 = r8 + r4;
        if (r4 <= 0xffffu) {
            r0 = r4 & 0xffffu;
        }
        r4 = r0 & 0xffffu;
        c0lt = (s32)r9 < 3;
        r5 = 0u;
        r3 = (u32)rd16((u32)param_1 + 0xdcu) - 1u;
        r6 = (r3 - ((u32)ppc_divw((s32)r3, (s32)r4) * r4)) & 0xffffu;
        if (r9 == 3u) {
            r3 = (u32)rd8(r31 + 0x111u);
            r0 = r3 * ((r6 << 1u) & 0x1fffeu);
            r3 = 0x80u - r3;
            r0 = (u32)ppc_divw((s32)r0, (s32)r4);
            r0 = r3 + r0;
            r5 = (u32)(s16)r0;
        } else if (!c0lt) {
            c0lt = (s32)r9 < 5;
            if (r9 == 5u) {
                f4 = rdf64(0x80577938u);
                a.f[0] = (f64)(f32)((f64)rdf32(0x80577960u) * (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32(0x80577964u) * (f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f4)), (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f4)));
                f1 = tc_callf(0x802eff78u, &a);
                f1 = (f64)(f32)((f64)(f32)(px_b2f((u64)rd8(r31 + 0x111u) | 0x4330000000000000ull) - rdf64(0x80577938u)) * f1);
                f0 = (f64)(f32)((f64)rdf32(0x80577928u) + f1);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                r5 = (u32)px_f2b(f0);
            } else if (c0lt) {
                if ((s32)((r6 << 1u) & 0x1fffeu) > (s32)r4) {
                    r5 = (u32)(s16)(0x80u - (u32)rd8(r31 + 0x111u));
                } else {
                    r5 = (u32)(s16)((u32)rd8(r31 + 0x111u) + 0x80u);
                }
            }
        } else {
            c0lt = (s32)r9 < 1;
            if (r9 == 1u) {
                if ((s32)((r6 << 1u) & 0x1fffeu) > (s32)r4) {
                    r5 = (u32)rd8(r31 + 0x111u);
                    r5 = (u32)(s16)(((r5 << 2u) & 0xfffffffcu) - r5 + (u32)ppc_divw((s32)(0u - (((r5 * r6) << 2u) & 0xfffffffcu)), (s32)r4) + 0x80u);
                } else {
                    r3 = (u32)rd8(r31 + 0x111u);
                    r0 = r3 * ((r6 << 2u) & 0x3fffcu);
                    r3 = 0x80u - r3;
                    r0 = (u32)ppc_divw((s32)r0, (s32)r4);
                    r0 = r3 + r0;
                    r5 = (u32)(s16)r0;
                }
            } else if (!c0lt) {
                r3 = (u32)rd8(r31 + 0x111u);
                r3 = r3 + (u32)ppc_divw((s32)(0u - (((r3 * r6) << 1u) & 0xfffffffeu)), (s32)r4);
                r5 = (u32)(s16)(r3 + 0x80u);
            }
        }
        if ((s32)(s16)r5 < 0) {
            r5 = 0u;
        }
        if ((s32)(s16)r5 > 255) {
            r5 = 0xffu;
        }
        r3 = r5 & 0xffu;
    } else {
        r3 = 0xffu;
    }
    return r3;
}
