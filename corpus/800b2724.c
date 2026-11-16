#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_800b2724(s32 param_1)
{
    u32 r3 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = 0x805711d0u;
    a.r[1] = (u32)param_1;
    a.r[2] = 0u;
    a.r[3] = 0u;
    (void)tc_call(0x80154f74u, &a);
    a.r[0] = (u32)param_1 + 0x428u;
    a.r[1] = 0u;
    (void)tc_call(0x8014c23cu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800b516cu, &a);
    f1 = (f64)px_w2f(rd32(0x804890ccu));
    f0 = (f64)px_w2f(rd32(0x804890d0u));
    wrf32d((u32)param_1 + 0xd18u, (f64)px_w2f(rd32(0x804890c8u)));
    wrf32d((u32)param_1 + 0xd1cu, f1);
    wrf32d((u32)param_1 + 0xd20u, f0);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8007f7d4u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800b0fa0u, &a);
    r3 = rd32((u32)param_1 + 0x148u) | 0x20000000u;
    wr32((u32)param_1 + 0x148u, r3);
    if ((u32)((s32)r3 >> 31) != 0u) {
        wr32((u32)param_1 + 0x270u, 0u);
    }
    r5 = rd32((u32)param_1 + 0xf78u);
    wr32((u32)param_1 + 0xed4u, 0u);
    r5 = r5 ^ (r5 & 1u);
    r5 = r5 ^ (r5 & 2u);
    r5 = r5 ^ (r5 & 4u);
    r5 = r5 ^ (r5 & 8u);
    r5 = r5 ^ (r5 & 0x10u);
    r5 = r5 ^ (r5 & 0x40u);
    r5 = r5 ^ (r5 & 0x80u);
    r5 = r5 ^ (r5 & 0x100u);
    r5 = r5 ^ (r5 & 0x800u);
    r5 = r5 ^ (r5 & 0x4000u);
    r5 = r5 ^ (r5 & 0x40000u);
    wr32((u32)param_1 + 0xf78u, r5 ^ (r5 & 0x80000u));
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x800b31dcu, &a);
    return;
}
