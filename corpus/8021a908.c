#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8021a908(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r5 = param_2 + (((u32)param_3 << 2u) & 0xfffffffcu);
    r4 = rd32(r5 + 0x58u);
    if (r4 != 0u) {
        r0 = rd32(r5 + 0x14u);
        if (r0 != 0xffffffffu) {
            r0 = (r0 << 3u) & 0xfffffff8u;
            r29 = r4 + r0;
            r30 = (u32)(s16)rd16(r29 + 0x14u);
            if (r30 != 0xffffffffu) {
                a.r[0] = param_2;
                r3 = tc_call(0x80218678u, &a);
                r3 = rd32(r3 + 0x3e4u);
                r30 = r3 + ((r30 << 4u) & 0xfffffff0u);
                r28 = (u32)(s8)rd8(r30 + 0xfu);
                if (r28 != 0xffffffffu) {
                    r29 = (u32)(s16)rd16(r29 + 0x12u);
                    if (r29 != 0xffffffffu) {
                        a.r[0] = param_2;
                        r3 = tc_call(0x80218678u, &a);
                        r29 = (r29 << 2u) & 0xfffffffcu;
                        r3 = r3 + r29;
                        r3 = rd32(r3 + 0x290u);
                        if ((s32)r28 < (s32)rd32(r3)) {
                            a.r[0] = param_2;
                            r3 = tc_call(0x80218678u, &a);
                            r3 = r3 + r29;
                            f0 = (f64)rdf32(0x805769dcu);
                            r3 = rd32(r3 + 0x290u);
                            r3 = r3 + (r28 * 0x14u);
                            f2 = (f64)rdf32(r3 + 0xcu);
                            wrf32d(param_1, (f64)rdf32(r3 + 4u));
                            wrf32d(param_1 + 4u, f0);
                            wrf32d(param_1 + 8u, f2);
                            return;
                        }
                    }
                }
                f2 = rdf64(0x80576a00u);
                f3 = (f64)(f32)(px_b2f((u64)((u32)(s16)rd16(r30 + 6u) ^ 0x80000000u) | 0x4330000000000000ull) - f2);
                f1 = px_b2f((u64)((u32)(s16)rd16(r30 + 4u) ^ 0x80000000u) | 0x4330000000000000ull);
                wrf32d(param_1 + 4u, (f64)rdf32(0x805769dcu));
                wrf32d(param_1 + 8u, f3);
                wrf32d(param_1, (f64)(f32)(f1 - f2));
                return;
            }
        }
    }
    f0 = (f64)rdf32(0x805769dcu);
    wrf32d(param_1, f0);
    wrf32d(param_1 + 4u, f0);
    wrf32d(param_1 + 8u, f0);
    return;
}
