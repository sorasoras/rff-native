#include "tc_rt.h"

void fn_8003abc0(void)
{
    TcArgs a = {0};
    (void)tc_call(0x80044f70u, &a);
    (void)tc_call(0x8004c854u, &a);
    (void)tc_call(0x8004d69cu, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 5u;
    (void)tc_call(0x8004b358u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8004ca7cu, &a);
    return;
}
