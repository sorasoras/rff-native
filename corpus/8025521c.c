#include "tc_rt.h"

void fn_8025521c(void)
{
    TcArgs a = {0};
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(0x80570be0u), &a);
    return;
}
