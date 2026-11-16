#include "tc_rt.h"

u32 fn_801412bc(u32 param_1)
{
    u32 r3 = 0;
    if (param_1 >= rd32(0x804beb2cu)) {
        return 0u;
    }
    r3 = rd32(rd32(0x804beb34u) + ((param_1 << 5u) & 0xffffffe0u) + 0x18u);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
