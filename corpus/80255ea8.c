#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

u64 fn_80255ea8(f64 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r8 = 0, r9 = 0;
    r3 = (u32)(px_f2b(param_1) >> 0x20ull);
    r4 = (u32)px_f2b(param_1);
    r5 = (r3 >> 0x14u) & 0x7ffu;
    if (r5 < 0x3ffu) {
        r3 = 0u;
        r4 = 0u;
        return ((u64)r3 << 0x20ull) | (u64)r4;
    }
    if ((r3 & 0x80000000u) != 0u) {
        r3 = 0u;
        r4 = 0u;
        return ((u64)r3 << 0x20ull) | (u64)r4;
    }
    r3 = r3 & 0xfffffu;
    r3 = r3 | 0x100000u;
    r5 = r5 - 0x433u;
    if ((s32)r5 < 0) {
        r5 = 0u - r5;
        r8 = 0x20u - r5;
        r9 = r5 - 0x20u;
        r4 = ((r5 & 0x20u) != 0u) ? 0u : (r4 >> (r5 & 0x1fu));
        r4 = r4 | (((r8 & 0x20u) != 0u) ? 0u : (r3 << (r8 & 0x1fu)));
        r4 = r4 | (((r9 & 0x20u) != 0u) ? 0u : (r3 >> (r9 & 0x1fu)));
        r3 = ((r5 & 0x20u) != 0u) ? 0u : (r3 >> (r5 & 0x1fu));
    } else {
        if ((s32)r5 > 11) {
            r3 = 0xffffffffu;
            r4 = 0xffffffffu;
        } else {
            r8 = 0x20u - r5;
            r9 = r5 - 0x20u;
            r3 = ((r5 & 0x20u) != 0u) ? 0u : (r3 << (r5 & 0x1fu));
            r3 = r3 | (((r8 & 0x20u) != 0u) ? 0u : (r4 >> (r8 & 0x1fu)));
            r3 = r3 | (((r9 & 0x20u) != 0u) ? 0u : (r4 << (r9 & 0x1fu)));
            r4 = ((r5 & 0x20u) != 0u) ? 0u : (r4 << (r5 & 0x1fu));
        }
    }
    return ((u64)r3 << 0x20ull) | (u64)r4;
}
