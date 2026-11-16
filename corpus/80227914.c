#include "tc_rt.h"

void fn_80227914(void)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    (void)tc_call(0x80227848u, &a);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
