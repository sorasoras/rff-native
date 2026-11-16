#include "tc_rt.h"

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

void fn_800bc86c(s32 param_1)
{
    u32 r0 = 0, r28 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    f2 = rdf64(0x80572d08u);
    r31 = rd32(0x80499178u);
    f6 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(r31 ^ 0x80000000u) | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)((u32)rd8(((rd32(rd32(0x804863d8u) + 0x5c0u) - 0x1f8u) * 0x14u) - 0x7fb6082fu) ^ 0x80000000u) | 0x4330000000000000ull) - f2));
    if (r31 != 0u) {
        f5 = (f64)rdf32(0x80572ca0u);
        f4 = (f64)rdf32((u32)param_1 + 0x13f8u);
        f1 = (f64)(f32)(f5 - f6);
        f7 = (f64)(f32)(f4 * f6);
        f6 = (rdf64(0x80572e08u) * (rdf64(0x80572d70u) - f6)) + rdf64(0x80572e00u);
        f8 = ppc_fmadds(f4, f1, (f64)rdf32((u32)param_1 + 0x13ecu));
        f3 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x13f4u) * (f64)rdf32((u32)param_1 + 8u));
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x13e8u) + (f64)rdf32((u32)param_1 + 0x13fcu));
        f0 = (f64)rdf32(0x80572e10u);
        wrf32d((u32)param_1 + 0x13acu, (f64)rdf32(0x80572c98u));
        wrf32d((u32)param_1 + 0x13b0u, (f64)(f32)f6);
        wrf32d((u32)param_1 + 0x13b4u, f5);
        wrf32d((u32)param_1 + 0x13b8u, f0);
        wrf32d((u32)param_1 + 0x1384u, f3);
        wrf32d((u32)param_1 + 0x1380u, f7);
        wrf32d((u32)param_1 + 0x1374u, f1);
        wrf32d((u32)param_1 + 0x1378u, f8);
        a.r[0] = (u32)param_1 + 0x1370u;
        (void)tc_call(0x8005250cu, &a);
        wr32((u32)param_1 + 0x1398u, 1u);
    }
    r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r31) >> 2);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x1400u;
    a.r[2] = (u32)(s8)r0;
    (void)tc_call(0x800bac2cu, &a);
    r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r31) >> 2);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = r0 * 0xau;
    r0 = r31 - r0;
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + 0x1490u;
    a.r[2] = (u32)(s8)r0;
    (void)tc_call(0x800bac2cu, &a);
    a.r[0] = (u32)param_1 + 0x12e0u;
    (void)tc_call(0x8005250cu, &a);
    r0 = rd32((u32)param_1 + 0x10u);
    wr32((u32)param_1 + 0x1308u, 1u);
    if (r0 == 0u) {
        r28 = 0u;
        r31 = 0u;
        do {
            a.r[0] = (u32)param_1 + r31 + 0x1400u;
            (void)tc_call(0x8005250cu, &a);
            r28 = r28 + 1u;
            wr32((u32)param_1 + r31 + 0x1428u, 1u);
            r31 = r31 + 0x90u;
        } while ((s32)r28 < 2);
    }
    return;
}
