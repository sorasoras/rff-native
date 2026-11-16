#include "tc_rt.h"

void fn_80045674(void)
{
    TcArgs a = {0};
    (void)tc_call(0x8004f1fcu, &a);
    (void)tc_call(0x8004553cu, &a);
    (void)tc_call(0x80249958u, &a);
    (void)tc_call(0x80243198u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x80242bc0u, &a);
    (void)tc_call(0x80242e68u, &a);
    return;
}
