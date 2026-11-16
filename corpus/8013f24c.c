#include "tc_rt.h"

void fn_8013f24c(void)
{
    TcArgs a = {0};
    a.r[0] = 4u;
    (void)tc_call(0x80141274u, &a);
    a.r[0] = 5u;
    (void)tc_call(0x80141274u, &a);
    a.r[0] = 6u;
    (void)tc_call(0x80141274u, &a);
    a.r[0] = 7u;
    (void)tc_call(0x80141274u, &a);
    return;
}
