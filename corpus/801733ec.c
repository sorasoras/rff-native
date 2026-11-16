#include "tc_rt.h"

void fn_801733ec(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804bf24cu;
    (void)tc_call(0x8016e370u, &a);
    a.r[0] = 0x804bf24cu;
    (void)tc_call(0x8016e298u, &a);
    return;
}
