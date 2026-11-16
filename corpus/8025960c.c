#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

u32 fn_8025960c(f64 param_1)
{
    u32 c0lt = 0, r3 = 0, r4 = 0;
    r4 = (u32)(px_f2b(param_1) >> 0x20ull);
    r3 = r4 & 0x7ff00000u;
    c0lt = (s32)r3 < 2146435072;
    if (r3 == 0x7ff00000u) {
        if ((r4 & 0xfffffu) != 0u || (u32)px_f2b(param_1) != 0u) {
            r3 = 1u;
        } else {
            r3 = 2u;
        }
    } else {
        if (c0lt && r3 == 0u) {
            if ((r4 & 0xfffffu) != 0u || (u32)px_f2b(param_1) != 0u) {
                r3 = 5u;
                return r3;
            }
            r3 = 3u;
            return r3;
        }
        r3 = 4u;
    }
    return r3;
}
