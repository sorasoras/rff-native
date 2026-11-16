#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_802cc3d0(u32 param_1, s32 param_2, u32 param_3, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    r6 = rd32((u32)param_2 + 8u);
    if (r6 < 0x80000000u) {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = (u32)param_2;
        a.r[3] = r6;
        a.r[4] = param_r7;
        a.r[5] = param_r8;
        a.r[6] = param_r9;
        a.r[7] = param_r10;
        (void)tc_call(0x802ddfb4u, &a);
    }
    a.r[0] = (u32)param_2;
    a.r[1] = param_3;
    r3 = tc_call(0x802de0c8u, &a);
    r9 = rd32(r3);
    r30 = r3;
    r5 = (u32)rd8(r9 + 0x21u);
    r4 = (u32)rd8(r9 + 0x22u);
    r10 = (((r4 - r5) | (r5 - r4)) >> 0x1fu) & 1u;
    if (rd32(r3 + 4u) != 0u) {
        r4 = rd32(r9 + 8u);
        r5 = (u32)rd16(r9 + 2u);
        r6 = (u32)rd16(r9);
        r7 = rd32(r9 + 4u);
        r8 = rd32(r9 + 0xcu);
        r9 = rd32(r9 + 0x10u);
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x80252348u, &a);
        a.r[0] = param_1;
        a.r[1] = rd32(r30 + 4u);
        (void)tc_call(0x80252550u, &a);
    } else {
        r4 = rd32(r9 + 8u);
        r5 = (u32)rd16(r9 + 2u);
        r6 = (u32)rd16(r9);
        r7 = rd32(r9 + 4u);
        r8 = rd32(r9 + 0xcu);
        r9 = rd32(r9 + 0x10u);
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        (void)tc_call(0x8025213cu, &a);
    }
    r9 = rd32(r30);
    f2 = rdf64(0x80348a10u);
    f1 = (f64)(f32)(px_b2f((u64)rd8(r9 + 0x21u) | 0x4330000000000000ull) - f2);
    f2 = (f64)(f32)(px_b2f((u64)rd8(r9 + 0x22u) | 0x4330000000000000ull) - f2);
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = (f64)rdf32(r9 + 0x1cu);
    a.r[0] = param_1;
    a.r[1] = rd32(r9 + 0x14u);
    a.r[2] = rd32(r9 + 0x18u);
    a.r[3] = 0u;
    a.r[4] = (u32)rd8(r9 + 0x20u);
    a.r[5] = 0u;
    (void)tc_call(0x80252390u, &a);
    return;
}
