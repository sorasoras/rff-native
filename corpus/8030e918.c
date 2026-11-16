#include "tc_rt.h"

u32 fn_8030e918(void)
{
    u32 r0 = 0;
    r0 = (rd32(0x80570f48u) * 0x19660du) + 0x3c6ef35fu;
    wr32(0x80570f48u, r0);
    return (r0 >> 0x10u) & 0xffffu;
}
