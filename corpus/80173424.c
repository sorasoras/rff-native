#include "tc_rt.h"

void fn_80173424(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804bf24cu;
    (void)tc_call(0x8016e2c0u, &a);
    return;
}
