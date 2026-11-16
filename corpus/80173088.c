#include "tc_rt.h"

void fn_80173088(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804bf24cu;
    (void)tc_call(0x801702c0u, &a);
    return;
}
