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

void fn_802f13f4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    if ((u32)param_3 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x802f1550u, &a);
        r5 = ((u32)param_2 << 4u) & 0xfffffff0u;
        r4 = (u32)param_1 + r5;
        r0 = rd32(r4 + 0x5cu);
        r3 = rd32(r4 + 0x60u);
        c0lt = (s32)r3 < (s32)r0;
        if (!c0lt) {
            return;
        }
        if (!c0lt) {
            f1 = (f64)rdf32(r4 + 0x58u);
        } else {
            r3 = r3 ^ 0x80000000u;
            r0 = r0 ^ 0x80000000u;
            f4 = rdf64(0x80577540u);
            f2 = (f64)rdf32(r4 + 0x54u);
            f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f4) * (f64)(f32)((f64)rdf32(r4 + 0x58u) - f2)), (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f4)));
        }
        r3 = (u32)param_1 + r5;
        f0 = (f64)rdf32(0x80577538u);
        wrf32d(r3 + 0x54u, f1);
        wrf32d(r3 + 0x58u, f0);
        wr32(r3 + 0x5cu, 0u);
        wr32(r3 + 0x60u, 0u);
    } else {
        r8 = ((u32)param_2 << 4u) & 0xfffffff0u;
        r6 = (u32)param_1 + r8;
        r7 = rd32(r6 + 0x5cu);
        r0 = rd32(r6 + 0x60u);
        if ((s32)r0 >= (s32)r7) {
            f0 = (f64)rdf32(r6 + 0x58u);
        } else {
            f4 = rdf64(0x80577540u);
            f2 = (f64)rdf32(r6 + 0x54u);
            f0 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)(r0 ^ 0x80000000u) | 0x4330000000000000ull) - f4) * (f64)(f32)((f64)rdf32(r6 + 0x58u) - f2)), (f64)(f32)(px_b2f((u64)(r7 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
        }
        r6 = (u32)param_1 + r8;
        wrf32d(r6 + 0x54u, f0);
        r4 = ppc_mulhw(1431655766, (s32)((u32)param_3 + 2u));
        wrf32d(r6 + 0x58u, (f64)rdf32(0x80577538u));
        wr32(r6 + 0x5cu, r4 + ((r4 >> 0x1fu) & 1u));
        wr32(r6 + 0x60u, 0u);
    }
    return;
}
