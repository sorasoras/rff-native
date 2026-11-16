#include "tc_rt.h"

s32 fn_80286d1c(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = (u32)rd8(0x8050f808u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return (s32)(s8)r31;
}
