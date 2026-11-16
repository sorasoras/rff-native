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

void fn_802dc978(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    r6 = rd32((u32)param_1 + 0x14u);
    wr32(0x817fdfd8u, 0x43300000u);
    r4 = rd32(r6 + 0x18u);
    wr32(0x817fdfe0u, 0x43300000u);
    c0eq = (r4 - 0x80000000u) == 0u;
    if (!c0eq) {
        r5 = (u32)rd8((u32)param_1 + 0xeu);
        r3 = rd32(r6 + 0x28u);
        if (!c0eq) {
            if ((r3 - 0x80000000u) != 0u) {
                r4 = r4 ^ 0x80000000u;
                wr32(0x817fdfdcu, r3 ^ 0x80000000u);
                f4 = rdf64(0x80348b30u);
                f0 = rdf64(0x817fdfd8u);
                wr32(0x817fdfe4u, r4);
                f3 = (f64)(f32)(f0 - f4);
                f4 = (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f4);
                a.f[0] = rdf64(0x80348b18u);
                a.f[1] = (f64)(f32)px_fdiv((f64)(f32)(f4 + (f64)(f32)(f3 * (f64)rdf32(((r5 << 2u) & 0x3fcu) - 0x7fc640c0u))), (f64)rdf32(0x80348b28u));
                f1 = tc_callf(0x80262c74u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)(f32)((f64)rdf32(0x80348b24u) * f1);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                r4 = (u32)px_f2b(f0);
            } else {
                r0 = r4 ^ 0x80000000u;
                f3 = rdf64(0x80348b30u);
                wr32(0x817fdfdcu, r0);
                a.f[0] = rdf64(0x80348b18u);
                a.f[1] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3), (f64)rdf32(0x80348b20u));
                f1 = tc_callf(0x80262c74u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)(f32)((f64)rdf32(0x80348b24u) * f1);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                r4 = (u32)px_f2b(f0);
            }
        } else {
            r4 = 0u;
        }
        r3 = ppc_mulhw(1431655766, (s32)r4);
        r3 = r3 + ((r3 >> 0x1fu) & 1u);
        if (r3 == 0u) {
            wr32((u32)param_1 + 0x38u, 0u);
            wr32((u32)param_1 + 0x3cu, 0x640000u);
            wr32((u32)param_1 + 0x34u, 0xfc400000u);
            wr32((u32)param_1 + 0x30u, 0u);
        } else {
            r3 = (u32)ppc_divw(6553600, (s32)r3);
            wr32((u32)param_1 + 0x38u, 0u);
            wr32((u32)param_1 + 0x34u, 0xfc400000u);
            wr32((u32)param_1 + 0x30u, 0u);
            wr32((u32)param_1 + 0x3cu, r3);
        }
    } else {
        wr32((u32)param_1 + 0x30u, 1u);
        wr32((u32)param_1 + 0x34u, 0u);
        if ((rd32(r6 + 0x1cu) - 0x80000000u) == 0u) {
            wr32((u32)param_1 + 0x30u, 2u);
            wr32((u32)param_1 + 0x34u, rd32(r6 + 0x20u));
        }
    }
    if (rd32((u32)param_1 + 0x30u) < 2u) {
        r4 = rd32((u32)param_1 + 0x14u);
        r5 = (u32)rd8((u32)param_1 + 0xdu);
        r3 = rd32(r4 + 0x1cu);
        r4 = rd32(r4 + 0x2cu);
        if ((r3 - 0x80000000u) != 0u) {
            if ((r4 - 0x80000000u) != 0u) {
                r0 = r4 ^ 0x80000000u;
                r4 = r3 ^ 0x80000000u;
                wr32(0x817fdfe4u, r0);
                f4 = rdf64(0x80348b30u);
                f0 = rdf64(0x817fdfe0u);
                wr32(0x817fdfdcu, r4);
                f3 = (f64)(f32)(f0 - f4);
                f4 = (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f4);
                a.f[0] = rdf64(0x80348b18u);
                a.f[1] = (f64)(f32)px_fdiv((f64)(f32)(f4 + (f64)(f32)(f3 * (f64)rdf32(((r5 << 2u) & 0x3fcu) - 0x7fc640c0u))), (f64)rdf32(0x80348b28u));
                f1 = tc_callf(0x80262c74u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)(f32)((f64)rdf32(0x80348b24u) * f1);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                r4 = (u32)px_f2b(f0);
            } else {
                r0 = r3 ^ 0x80000000u;
                f3 = rdf64(0x80348b30u);
                wr32(0x817fdfe4u, r0);
                a.f[0] = rdf64(0x80348b18u);
                a.f[1] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3), (f64)rdf32(0x80348b20u));
                f1 = tc_callf(0x80262c74u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)(f32)((f64)rdf32(0x80348b24u) * f1);
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                r4 = (u32)px_f2b(f0);
            }
        } else {
            r4 = 0u;
        }
        r3 = ppc_mulhw(1431655766, (s32)r4);
        r3 = r3 + ((r3 >> 0x1fu) & 1u);
        if (r3 == 0u) {
            wr32((u32)param_1 + 0x40u, 0xfc400000u);
        } else {
            wr32((u32)param_1 + 0x40u, (u32)ppc_divw(-62914560, (s32)r3));
        }
    }
    r3 = rd32((u32)param_1 + 0x14u);
    wr32((u32)param_1 + 0x44u, rd32(r3 + 0x20u));
    wr32((u32)param_1 + 0x48u, rd32(r3 + 0x24u));
    return;
}
