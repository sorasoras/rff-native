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

void fn_801e0fb8(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = 5u;
    f1 = tc_callf(0x801dc57cu, &a);
    f2 = (f64)(f32)px_fdiv(f1, (f64)rdf32(0x80576298u));
    r0 = (u32)rd16(0x8049908cu);
    if ((s32)r0 <= 0) {
        r4 = (u32)rd16(0x8049908au);
        r5 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
        if ((s32)r5 <= 0) {
            r5 = 0u;
        }
        if ((s32)r5 >= 65535) {
            r5 = 0xffffu;
        }
        if ((s32)r5 <= 0) {
            r5 = 0x64u;
        }
        f0 = (f64)(f32)(f2 * (f64)(f32)(px_b2f((u64)(r5 & 0xffffu) | 0x4330000000000000ull) - rdf64(0x805762c0u)));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r0 = r4 - (u32)px_f2b(f0);
        if ((s32)r0 < 1) {
            r0 = 1u;
        }
        r0 = r0 & 0xffffu;
        if (r0 >= 0xffffu) {
            r0 = 0xffffu;
        }
        wr16(0x8049908au, (u16)r0);
    } else {
        f0 = (f64)(f32)((f64)rdf32(0x805762b4u) * f2);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r0 = r0 - (u32)px_f2b(f0);
        if ((s32)r0 < 0) {
            r0 = 0u;
        }
        r0 = r0 & 0xffffu;
        if (r0 >= 0x2710u) {
            r0 = 0x2710u;
        }
        wr16(0x8049908cu, (u16)r0);
    }
    a.r[0] = rd32((u32)param_2 + 0x2cu);
    (void)tc_call(0x801dfd48u, &a);
    a.r[0] = rd32((u32)param_2 + 0x2cu);
    r3 = tc_call(0x801e00fcu, &a);
    r4 = tc_lastr4();
    r29 = r3;
    if (r3 != 0u) {
        r3 = rd32(r3 + 0x114u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            r4 = tc_lastr4();
            if (r3 != 0u) {
                a.r[0] = rd32(r29 + 0x114u);
                (void)tc_call(0x80157f30u, &a);
                r4 = tc_lastr4();
            }
        }
        wr32(r29 + 0x114u, 0u);
        f2 = (f64)rdf32(0x80576200u);
        wr32(r29 + 0x118u, 0xffffffffu);
        f1 = (f64)rdf32(0x8057621cu);
        wrf32d(r29 + 0x11cu, f2);
        f0 = (f64)rdf32(0x80576204u);
        wr32(r29 + 0x118u, 0xb3u);
        wrf32d(r29 + 0x11cu, f2);
        wrf32d(r29 + 0x120u, f1);
        wr32(r29 + 0x128u, 0u);
        wrf32d(r29 + 0x124u, f0);
        r3 = rd32((u32)param_2 + 0x2cu);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
        f2 = (f64)rdf32(0x80570998u);
        wrf32d(r29 + 8u, (f64)rdf32(r3));
        f0 = (f64)rdf32(0x805762b8u);
        wrf32d(r29 + 0xcu, (f64)rdf32(r3 + 4u));
        wrf32d(r29 + 0x10u, (f64)rdf32(r3 + 8u));
        wr32(r29 + 0x180u, rd32((u32)param_2 + 0x2cu) + 0x1ecu);
        wrf32d(r29 + 0x18cu, f2);
        wrf32d(r29 + 0x190u, f0);
        wr32(r29 + 0x30u, 0u);
        a.r[0] = r29;
        a.r[1] = 0u;
        (void)tc_call(0x801dc5acu, &a);
    }
    return;
}
