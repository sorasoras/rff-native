#include "tc_rt.h"

u32 fn_8025bbd4(void)
{
    u32 r0 = 0;
    r0 = (rd32(0x80570bf8u) * 0x41c64e6du) + 0x3039u;
    wr32(0x80570bf8u, r0);
    return (r0 >> 0x10u) & 0x7fffu;
}
