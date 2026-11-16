#include "tc_rt.h"

void fn_80097bd8(void)
{
    TcArgs a = {0};
    a.r[0] = 0u;
    a.r[1] = 0x3cu;
    (void)tc_call(0x800a730cu, &a);
    a.r[0] = 2u;
    a.r[1] = 0x3cu;
    (void)tc_call(0x800a730cu, &a);
    return;
}
