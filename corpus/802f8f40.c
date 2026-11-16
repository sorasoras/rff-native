#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_802f8f40(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r4 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f3 = 0.0;
    r4 = param_2;
    r0 = rd32(param_1);
    c0lt = (s32)r0 < 2;
    if (r0 != 2u) {
        if (!c0lt) {
            if (r0 == 4u) {
                r4 = param_2 ^ 0x80000000u;
                wr32(0x817fdff4u, r4);
                f3 = rdf64(0x805775f8u);
                wr32(0x817fdff0u, 0x43300000u);
                wrf32d(param_1 + 4u, (f64)(f32)((f64)rdf32(param_1 + 4u) - (f64)(f32)((f64)rdf32(param_1 + 0xcu) * (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f3))));
                return;
            }
            return;
        }
        c0lt = (s32)r0 < 0;
        if (r0 == 0u) {
            f0 = (f64)rdf32(0x805775f0u);
            ctr = param_2;
            if ((s32)param_2 <= 0) {
                return;
            }
            for (;;) {
                f1 = (f64)(f32)((f64)rdf32(param_1 + 4u) * (f64)rdf32(param_1 + 0x10u));
                wrf32d(param_1 + 4u, f1);
                if (f1 > f0) break;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    return;
                }
            }
            r0 = (u32)rd16(param_1 + 0x16u);
            wrf32d(param_1 + 4u, (f64)rdf32(0x805775ecu));
            wr32(param_1, 1u);
            wr16(param_1 + 0x18u, (u16)r0);
            return;
        }
        if (c0lt) {
            return;
        }
        r6 = (u32)rd16(param_1 + 0x18u);
        if ((s32)param_2 >= (s32)r6) {
            wr16(param_1 + 0x18u, 0u);
            r4 = param_2 - r6;
            wr32(param_1, 2u);
        } else {
            wr16(param_1 + 0x18u, (u16)(r6 - param_2));
        }
        if (rd32(param_1) != 2u) {
            return;
        }
    }
    r6 = (u32)rd8(param_1 + 0x14u);
    wr32(0x817fdff4u, r4 ^ 0x80000000u);
    f3 = rdf64(0x805775f8u);
    wr32(0x817fdff0u, 0x43300000u);
    f0 = (f64)(f32)((f64)rdf32(param_1 + 4u) - (f64)(f32)((f64)rdf32(param_1 + 8u) * (f64)(f32)(rdf64(0x817fdff0u) - f3)));
    f1 = (f64)(f32)(px_b2f((u64)((u32)(s16)rd16(((r6 << 1u) & 0xfffffffeu) - 0x7fcb6478u) ^ 0x80000000u) | 0x4330000000000000ull) - f3);
    wrf32d(param_1 + 4u, f0);
    if (f0 < f1) {
        wrf32d(param_1 + 4u, f1);
        wr32(param_1, 3u);
    }
    return;
}
