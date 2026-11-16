#include "tc_rt.h"

u32 fn_8014bda4(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x8014bd7cu, &a);
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        r3 = tc_call(0x8014bd6cu, &a);
        r3 = rd32(r3 + 0x48u);
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
