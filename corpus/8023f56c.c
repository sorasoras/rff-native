#include "tc_rt.h"

u32 fn_8023f56c(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = (u32)rd16(0xcc00206eu) & 3u;
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return r31 & 1u;
}
