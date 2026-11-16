#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8007c600(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r28 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f2 = rdf64(0x80572848u);
    f0 = (f64)rdf32(0x80572844u);
    wr32((u32)param_2 + 0x64u, param_3);
    wr16(param_3, (u16)((u32)rd8(rd32((u32)param_2 + 0x3cu) + 0x62u) & 0xfu));
    f0 = (f64)(f32)(f0 * (f64)(f32)(px_b2f((u64)((u32)((s32)rd8(rd32((u32)param_2 + 0x3cu) + 0x62u) >> 4) ^ 0x80000000u) | 0x4330000000000000ull) - f2));
    wrf32d(param_3 + 8u, f0);
    a.r[0] = param_3;
    r3 = tc_call(0x8007c4f4u, &a);
    wr32((u32)param_2 + 0x58u, r3);
    f0 = (f64)rdf32(0x80572840u);
    wr16(param_3 + 4u, 0u);
    wrf32d(param_3 + 0x14u, f0);
    wrf32d(param_3 + 0x10u, f0);
    wrf32d(param_3 + 0xcu, f0);
    wr16(param_3 + 2u, 0u);
    wr16(param_3 + 6u, 0u);
    if (rd32(rd32((u32)param_2 + 0x3cu) + 0x74u) != 0u) {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x8007c5c4u, &a);
        r28 = r3;
        r5 = (u32)(s16)rd16(rd32(rd32((u32)param_2 + 0x3cu) + 0x74u) + 4u);
        if ((s32)r5 < 0 || r5 >= rd32((u32)param_1 + 0x34u)) {
            r0 = 0u;
        } else {
            r0 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r5);
        }
        wr32(r3, r0);
        a.r[0] = r0;
        a.r[1] = (u32)param_2;
        f1 = tc_callf(0x8007c568u, &a);
        wrf32d(r28 + 4u, f1);
    }
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    r3 = tc_call(0x8007c424u, &a);
    if (r3 != 0u) {
        wr16(param_3 + 4u, (u16)((u32)rd16(param_3 + 4u) | 1u));
    }
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_3;
    r3 = tc_call(0x8007c48cu, &a);
    if (r3 != 0u) {
        wr16(param_3 + 4u, (u16)((u32)rd16(param_3 + 4u) | 4u));
    }
    return;
}
