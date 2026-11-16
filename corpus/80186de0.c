#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

f64 fn_80186de0(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r5 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    r5 = (u32)rd8(0x8049909bu);
    r0 = rd32(0x8049e148u);
    wr32(0x817fdfe8u, 0x43300000u);
    r0 = r5 + r0;
    if ((s32)r0 <= 0) {
        r0 = 0u;
    }
    if ((s32)r0 >= 999) {
        r0 = 0x3e7u;
    }
    if ((s32)r0 < 0) {
        r0 = 0u;
    }
    r5 = rd32((u32)param_1 + 0x5c0u);
    r0 = r0 & 0xffffu;
    wr32(0x817fdfecu, r0);
    f2 = rdf64(0x805751e0u);
    f1 = (f64)(f32)(rdf64(0x817fdfe8u) - f2);
    r0 = (u32)rd8(((r5 - 0x1f8u) * 0x14u) - 0x7fb60831u);
    c0lt = (s32)r0 < 3;
    if (r0 == 3u) {
        f1 = (f64)(f32)(f1 + (f64)(f32)(px_b2f((u64)rd16((rd32((u32)param_1 + 0xa08u) * 0x58u) - 0x7fb97208u) | 0x4330000000000000ull) - f2));
    } else if (!c0lt) {
        if ((s32)r0 < 5) {
            r0 = (u32)rd16((rd32((u32)param_1 + 0xa08u) * 0x58u) - 0x7fb97206u);
            wr32(0x817fdfecu, r0);
            f1 = (f64)(f32)(f1 + (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2));
        }
    } else {
        c0lt = (s32)r0 < 1;
        if (r0 == 1u) {
            f1 = (f64)(f32)(f1 + (f64)(f32)(px_b2f((u64)rd16((rd32((u32)param_1 + 0xa08u) * 0x58u) - 0x7fb9720cu) | 0x4330000000000000ull) - f2));
        } else if (!c0lt) {
            r0 = (u32)rd16((rd32((u32)param_1 + 0xa08u) * 0x58u) - 0x7fb9720au);
            wr32(0x817fdfecu, r0);
            f1 = (f64)(f32)(f1 + (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2));
        }
    }
    return f1;
}
