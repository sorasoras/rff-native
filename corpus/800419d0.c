#include "tc_rt.h"

void fn_800419d0(void)
{
    TcArgs a = {0};
    a.r[0] = 0u;
    a.r[1] = 0u;
    (void)tc_call(0x80243e14u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x800456acu, &a);
    return;
}
