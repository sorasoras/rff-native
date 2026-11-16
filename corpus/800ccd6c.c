#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

u32 fn_800ccd6c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)rd16(param_2) == 0u) {
        r3 = 0u;
    } else {
        r30 = param_2;
        r31 = 0u;
        for (;;) {
            r4 = (u32)rd16(r30);
            if (r4 == 0u) break;
            r31 = r31 * 0xau;
            a.r[0] = param_1;
            a.r[1] = r4;
            r3 = tc_call(0x800ccd30u, &a);
            if ((s32)r3 < 0) {
                r3 = 0u;
                return r3;
            }
            r31 = r31 + r3;
            r30 = r30 + 2u;
        }
        r3 = 1u;
        wrf32d(param_3, (f64)(f32)(px_b2f((u64)r31 | 0x4330000000000000ull) - rdf64(0x80572f98u)));
    }
    return r3;
}
