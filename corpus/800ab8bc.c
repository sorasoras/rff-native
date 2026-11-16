#include "tc_rt.h"

u32 fn_800ab8bc(void)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800a7854u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r4 = rd32(r3 + 0x290u) - 0x18u;
        r3 = (((~r4 | 2u) - (((2u - r4) >> 1u) & 0x7fffffffu)) >> 0x1fu) & 1u;
    }
    return r3;
}
