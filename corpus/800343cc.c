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

void fn_800343cc(f64 param_1, u32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_1;
    r3 = tc_call(0x802558e4u, &a);
    r6 = rd32(param_2 + 0xcu);
    r7 = 0u;
    r5 = (u32)rd16(param_2);
    r4 = r6;
    ctr = r5;
    if ((s32)r5 > 0) {
        do {
            if (r3 < (u32)rd16(r4)) {
                r0 = r7 - 1u;
                wr32(param_3, r0);
                f3 = rdf64(0x80571e80u);
                wr32(param_3 + 4u, r7);
                f0 = (f64)rdf32(0x80571e4cu);
                r5 = (u32)rd16(r6 + ((r0 << 1u) & 0xfffffffeu));
                r4 = (u32)rd16(r6 + ((r7 << 1u) & 0xfffffffeu));
                wr32(0x817fdfe0u, 0x43300000u);
                r4 = r4 - r5;
                wr32(0x817fdfe4u, r5 ^ 0x80000000u);
                f1 = (f64)(f32)(param_1 - (f64)(f32)(rdf64(0x817fdfe0u) - f3));
                f2 = (f64)(f32)(px_b2f((u64)(r4 ^ 0x80000000u) | 0x4330000000000000ull) - f3);
                wrf32d(param_3 + 0x20u, f1);
                f1 = (f64)(f32)px_fdiv(f1, f2);
                wrf32d(param_3 + 0x24u, f2);
                f0 = (f64)(f32)(f1 - f0);
                wrf32d(param_3 + 0x18u, f1);
                wrf32d(param_3 + 0x1cu, f0);
                return;
            }
            r4 = r4 + 2u;
            r7 = r7 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    f1 = (f64)rdf32(0x80571e50u);
    f0 = (f64)rdf32(0x80571e78u);
    wr32(param_3, r5 - 1u);
    wr32(param_3 + 4u, 0u);
    wrf32d(param_3 + 0x18u, f1);
    wrf32d(param_3 + 0x20u, f1);
    wrf32d(param_3 + 0x1cu, f0);
    return;
}
