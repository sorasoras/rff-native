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

void fn_8004e498(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r28 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r31 = param_1 + 0x18u;
    r30 = param_1 + 0x98u;
    r28 = (u32)param_3;
    if (param_3 < 2) {
        r28 = 2u;
    }
    f0 = (f64)rdf32(0x80572228u);
    wr32(param_1 + 0x14u, (u32)param_2);
    wr8(param_1 + 0x11u, (u8)r28);
    wr8(param_1 + 0x10u, 0x40u);
    wrf32d(param_1 + 0xcu, f0);
    wr8(param_1 + 0xb8u, 0u);
    wr8(param_1, 0xc4u);
    wr8(param_1 + 1u, 0xc4u);
    wr8(param_1 + 2u, 0xc4u);
    wr8(param_1 + 3u, 0xffu);
    wr8(param_1 + 8u, 0xffu);
    wr8(param_1 + 9u, 0xffu);
    wr8(param_1 + 0xau, 0xffu);
    wr8(param_1 + 0xbu, 0xffu);
    wr8(param_1 + 4u, 0xffu);
    wr8(param_1 + 5u, 0xffu);
    wr8(param_1 + 6u, 0xffu);
    wr8(param_1 + 7u, 0xffu);
    a.r[0] = r30;
    a.r[1] = 6u;
    a.r[2] = 0x280u;
    a.r[3] = 0x1e0u;
    a.r[4] = 0u;
    a.r[5] = (u32)param_2;
    (void)tc_call(0x8004b72cu, &a);
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = r30;
    a.r[3] = 0u;
    (void)tc_call(0x8004b7a0u, &a);
    a.r[0] = r31 + 0x20u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x80252494u, &a);
    a.r[0] = r31 + 0x20u;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x802524b0u, &a);
    f2 = rdf64(0x80572230u);
    f0 = (f64)(f32)(px_b2f((u64)((u32)ppc_divw(640, (s32)r28) ^ 0x80000000u) | 0x4330000000000000ull) - f2);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdfd8u, f0);
    f0 = (f64)(f32)(px_b2f((u64)((u32)ppc_divw(480, (s32)r28) ^ 0x80000000u) | 0x4330000000000000ull) - f2);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    a.r[0] = r30 + 0x10u;
    a.r[1] = 4u;
    a.r[2] = rd32(0x817fdfdcu);
    a.r[3] = (u32)px_f2b(f0);
    a.r[4] = 0u;
    a.r[5] = (u32)param_2 + 0x12c000u;
    (void)tc_call(0x8004b72cu, &a);
    a.r[0] = r31 + 0x40u;
    a.r[1] = 0u;
    a.r[2] = r30 + 0x10u;
    a.r[3] = 0u;
    (void)tc_call(0x8004b7a0u, &a);
    r31 = r31 + 0x60u;
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x80252494u, &a);
    a.r[0] = r31;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x802524b0u, &a);
    return;
}
