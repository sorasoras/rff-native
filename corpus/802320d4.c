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

void fn_802320d4(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r12 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x80571578u);
    r12 = rd32(r3 + 0x490u);
    if (r12 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        (void)tc_call(r12, &a);
    }
    if (rd32(rd32(0x80571578u) + 0x488u) == 0u) {
        r3 = tc_call(0x80242cb8u, &a);
        wr32(rd32(0x80571578u) + 0x484u, r3 - 0x80000000u);
    }
    r3 = rd32(0x80571578u);
    if (rd32(r3 + 0x488u) == 1u) {
        r3 = rd32(r3 + 0x484u);
        a.r[0] = r3;
        a.r[1] = 4u;
        (void)tc_call(0x8022770cu, &a);
        r4 = rd32(0x80571578u);
        r3 = rd32(r4 + 0x484u);
        r0 = (u32)(s16)rd16(r3);
        r3 = r3 + 2u;
        wr16(r4 + 0x48cu, (u16)r0);
        wr32(r4 + 0x484u, r3);
        r4 = rd32(0x80571578u);
        wr16(r4 + 0x48eu, rd16(rd32(r4 + 0x484u)));
    }
    r3 = rd32(0x80571578u);
    if (rd32(r3 + 0x488u) >= 1u) {
        r31 = r3 + (rd32(r3 + 0x480u) * 0x240u);
        r30 = r31;
        r3 = tc_call(0x80242cd0u, &a);
        r29 = r3;
        f2 = (f64)rdf32(0x80576b40u);
        f1 = rdf64(0x80576b48u);
        r5 = r3;
        while (r5 != 0u) {
            r5 = r5 - 4u;
            wr16(r30, rd16(rd32(0x80571578u) + 0x48cu));
            wr16(r30 + 2u, rd16(rd32(0x80571578u) + 0x48eu));
            r30 = r30 + 4u;
            r3 = rd32(0x80571578u);
            f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)((u32)(s16)rd16(r3 + 0x48cu) ^ 0x80000000u) | 0x4330000000000000ull) - f1) * f2);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wr16(r3 + 0x48cu, (u16)px_f2b(f0));
            r3 = rd32(0x80571578u);
            f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)((u32)(s16)rd16(r3 + 0x48eu) ^ 0x80000000u) | 0x4330000000000000ull) - f1) * f2);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wr16(r3 + 0x48eu, (u16)px_f2b(f0));
        }
        a.r[0] = r31;
        a.r[1] = r29;
        (void)tc_call(0x80227738u, &a);
        a.r[0] = r31;
        a.r[1] = r29;
        (void)tc_call(0x80242c04u, &a);
        r4 = rd32(0x80571578u);
        wr32(r4 + 0x480u, rd32(r4 + 0x480u) + 1u);
        r3 = rd32(0x80571578u);
        wr32(r3 + 0x480u, rd32(r3 + 0x480u) & 1u);
    }
    r4 = rd32(0x80571578u);
    wr32(r4 + 0x488u, rd32(r4 + 0x488u) + 1u);
    return;
}
