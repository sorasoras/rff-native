#include "tc_rt.h"

s32 fn_8011aff4(void)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0u;
    r3 = tc_call(0x80038b80u, &a);
    r3 = (u32)(s8)r3;
    return (s32)r3;
}
