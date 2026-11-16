#include "tc_rt.h"

u32 fn_800a7b68(u32 param_r3)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x800a4500u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r4 = (u32)rd8(r3 + 0x205u) - 1u;
        r3 = (((~r4 | 1u) - (((1u - r4) >> 1u) & 0x7fffffffu)) >> 0x1fu) & 1u;
    }
    return r3;
}
