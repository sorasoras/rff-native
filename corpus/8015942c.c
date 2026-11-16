#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8015942c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r30 = rd32(param_1);
    a.r[0] = r30;
    r3 = tc_call(0x8015a89cu, &a);
    if (r3 != 0u) {
        a.r[0] = r30;
        (void)tc_call(0x8015a95cu, &a);
    }
    a.r[0] = param_1;
    r3 = tc_call(0x80159860u, &a);
    if (r3 != 0u || (u32)((s32)((rd32(param_1 + 0x34u) << 1u) & 0xc0000000u) >> 31) != 0u) {
        a.r[0] = param_1;
        r3 = tc_call(0x801597c4u, &a);
        if (r3 != 0u) {
            if ((u32)((s32)((rd32(param_1 + 0x34u) << 1u) & 0xc0000000u) >> 31) != 0u) {
                f1 = (f64)rdf32(param_1 + 0x24u);
                f0 = (f64)rdf32(0x80574960u);
                if ((f1 < f0) || (f1 == f0)) {
                    a.r[0] = param_1;
                    (void)tc_call(0x80159058u, &a);
                    return;
                }
            }
            a.r[0] = param_1;
            r3 = tc_call(0x8015981cu, &a);
            if (r3 != 0u) {
                a.r[0] = param_1;
                a.r[1] = 0u;
                (void)tc_call(0x80159888u, &a);
                wr16(param_1 + 0x2au, 0u);
            }
            wrf32d(param_1 + 0x18u, (f64)rdf32(param_1 + 0x1cu));
        } else {
            wrf32d(param_1 + 0x18u, (f64)(f32)((f64)rdf32(param_1 + 0x18u) + (f64)rdf32(param_1 + 0x20u)));
        }
        a.r[0] = rd32(param_1);
        r3 = tc_call(0x8015a9dcu, &a);
        if (r3 == 0u) {
            a.r[0] = param_1;
            r3 = tc_call(0x8015981cu, &a);
            if (r3 == 0u) {
                a.r[0] = (u32)rd8(param_1 + 0x28u) + (u32)(s16)rd16(param_1 + 0x2au);
                a.r[1] = 0u;
                a.r[2] = 0xffu;
                r3 = tc_call(0x800adf14u, &a);
                wr8(param_1 + 0x28u, (u8)r3);
            }
        }
    } else {
        r3 = rd32(param_1 + 0x14u);
        if ((s32)r3 >= 0) {
            r0 = r3 - 1u;
            wr32(param_1 + 0x14u, r0);
            if ((s32)r0 < 0) {
                a.r[0] = param_1;
                a.r[1] = 1u;
                (void)tc_call(0x80159390u, &a);
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0x30u);
                a.r[0] = r3;
                a.r[1] = 1u;
                (void)tc_call(0x8015d874u, &a);
            }
        }
    }
    a.r[0] = 0x8033a678u;
    r3 = tc_call(0x8011df4cu, &a);
    r30 = r3;
    if ((u32)((s32)((rd32(param_1 + 0x34u) << 1u) & 0xc0000000u) >> 31) != 0u) {
        r3 = tc_call(0x8003c9c8u, &a);
        r3 = r3 ^ 0x80000000u;
        wrf32d(param_1 + 0x24u, (f64)(f32)((f64)rdf32(param_1 + 0x24u) - (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80574980u))));
    } else {
        r3 = tc_call(0x8003c9c8u, &a);
        r3 = r3 ^ 0x80000000u;
        wrf32d(param_1 + 0x24u, (f64)(f32)((f64)rdf32(param_1 + 0x24u) + (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80574980u))));
    }
    a.r[0] = r30;
    f1 = tc_callf(0x8011c8fcu, &a);
    a.f[0] = (f64)rdf32(param_1 + 0x24u);
    a.f[1] = (f64)rdf32(0x80574960u);
    a.f[2] = f1;
    f1 = tc_callf(0x800acaf8u, &a);
    wrf32d(param_1 + 0x24u, f1);
    return;
}
