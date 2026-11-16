#include "tc_rt.h"

void fn_8004c854(void)
{
    TcArgs a = {0};
    a.r[0] = 7u;
    a.r[1] = 0x8034f978u;
    (void)tc_call(0x8024fa44u, &a);
    (void)tc_call(0x8024ff34u, &a);
    (void)tc_call(0x8024f870u, &a);
    return;
}
