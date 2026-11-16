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

void fn_80210928(s32 param_1)
{
    u32 r0 = 0, r10 = 0, r11 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0;
    TcArgs a = {0};
    f4 = (f64)rdf32(0x80576884u);
    f3 = rdf64(0x80576888u);
    f5 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x424u) + (f64)rdf32((u32)param_1 + 0x1214u));
    f2 = (f64)(f32)(f4 + (f64)rdf32((u32)param_1 + 0x420u));
    f1 = (f64)(f32)(f4 + f5);
    f0 = (f64)(f32)(f4 + (f64)rdf32((u32)param_1 + 0x428u));
    f2 = px_ctiw(f2, ppc_fctiwz(f2));
    f1 = px_ctiw(f1, ppc_fctiwz(f1));
    wrf32d((u32)param_1 + 0x424u, f5);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r28 = (u32)px_f2b(f2);
    r30 = (u32)px_f2b(f1);
    r10 = (u32)px_f2b(f0);
    r11 = (u32)((s32)(ppc_mulhw(-1240768329, (s32)r28) + r28) >> 8);
    r29 = r11 + ((r11 >> 0x1fu) & 1u);
    r11 = (u32)((s32)(ppc_mulhw(-1240768329, (s32)r30) + r30) >> 8);
    r0 = (u32)((s32)(ppc_mulhw(-1240768329, (s32)r10) + r10) >> 8);
    r11 = r11 + ((r11 >> 0x1fu) & 1u);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = r0 * 0x168u;
    r0 = r10 - r0;
    r0 = r0 ^ 0x80000000u;
    wrf32d((u32)param_1 + 0x424u, (f64)(f32)((f64)(f32)(px_b2f((u64)((r30 - (r11 * 0x168u)) ^ 0x80000000u) | 0x4330000000000000ull) - f3) - f4));
    wrf32d((u32)param_1 + 0x420u, (f64)(f32)((f64)(f32)(px_b2f((u64)((r28 - (r29 * 0x168u)) ^ 0x80000000u) | 0x4330000000000000ull) - f3) - f4));
    wrf32d((u32)param_1 + 0x428u, (f64)(f32)((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f3) - f4));
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x414u;
    a.r[2] = (u32)param_1 + 0x440u;
    a.r[3] = (u32)param_1 + 0x468u;
    a.r[4] = (u32)param_1 + 0x46cu;
    a.r[5] = 0u;
    (void)tc_call(0x802110acu, &a);
    if ((f64)rdf32(0x80576880u) == (f64)rdf32((u32)param_1 + 0x1214u)) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_1 + 0x420u;
        a.r[2] = (u32)param_1 + 0x44cu;
        a.r[3] = (u32)param_1 + 0x470u;
        a.r[4] = (u32)param_1 + 0x474u;
        a.r[5] = 1u;
        (void)tc_call(0x802110acu, &a);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x42cu;
    a.r[2] = (u32)param_1 + 0x458u;
    a.r[3] = (u32)param_1 + 0x478u;
    a.r[4] = (u32)param_1 + 0x47cu;
    a.r[5] = 0u;
    (void)tc_call(0x802110acu, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x414u;
    (void)tc_call(0x80210af8u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x420u;
    (void)tc_call(0x80210be4u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x42cu;
    (void)tc_call(0x80210c24u, &a);
    return;
}
