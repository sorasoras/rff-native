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

f64 fn_802627d8(f64 param_1)
{
    u32 c1eq = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f1 = 0.0;
    f1 = param_1;
    r5 = (u32)(px_f2b(param_1) >> 0x20ull);
    r6 = (u32)px_f2b(param_1);
    r7 = ((r5 >> 0x14u) & 0x7ffu) - 0x3ffu;
    c1eq = r7 == 0x14u;
    if ((s32)r7 < 20) {
        if ((s32)r7 < 0) {
            if (!((rdf64(0x80577258u) + param_1) > rdf64(0x80577260u))) {
                f1 = px_b2f(((u64)r5 << 0x20ull) | (u64)r6);
                return f1;
            }
            if ((s32)r5 >= 0) {
                r6 = 0u;
                r5 = 0u;
                f1 = px_b2f(((u64)r5 << 0x20ull) | (u64)r6);
                return f1;
            }
            if (((r5 & 0x7fffffffu) | r6) == 0u) {
                f1 = px_b2f(((u64)r5 << 0x20ull) | (u64)r6);
                return f1;
            }
            r5 = 0xbff00000u;
            r6 = 0u;
            f1 = px_b2f(((u64)r5 << 0x20ull) | (u64)r6);
            return f1;
        }
        r4 = ((r7 & 0x20u) != 0u) ? 0u : (u32)(1048575 >> (s32)(r7 & 0x1fu));
        if ((r6 | (r5 & r4)) == 0u) {
            return f1;
        }
        if (!((rdf64(0x80577258u) + param_1) > rdf64(0x80577260u))) {
            f1 = px_b2f(((u64)r5 << 0x20ull) | (u64)r6);
            return f1;
        }
        if ((s32)r5 < 0) {
            r5 = r5 + (((r7 & 0x20u) != 0u) ? 0u : (u32)(1048576 >> (s32)(r7 & 0x1fu)));
        }
        r5 = r5 & ~r4;
        r6 = 0u;
    } else {
        if ((s32)r7 > 51) {
            if (r7 != 0x400u) {
                return f1;
            }
            f1 = param_1 + param_1;
            return f1;
        }
        r0 = r7 - 0x14u;
        r4 = ((r0 & 0x20u) != 0u) ? 0u : (0xffffffffu >> (r0 & 0x1fu));
        if ((r6 & r4) == 0u) {
            return f1;
        }
        if ((rdf64(0x80577258u) + param_1) > rdf64(0x80577260u)) {
            if ((s32)r5 < 0) {
                if (c1eq) {
                    r5 = r5 + 1u;
                } else {
                    r0 = 0x34u - r7;
                    r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
                    r0 = r6 + r0;
                    if (r0 < r6) {
                        r5 = r5 + 1u;
                    }
                    r6 = r0;
                }
            }
            r6 = r6 & ~r4;
        }
    }
    f1 = px_b2f(((u64)r5 << 0x20ull) | (u64)r6);
    return f1;
}
