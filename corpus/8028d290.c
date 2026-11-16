#include "tc_rt.h"

void fn_8028d290(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x8053d470u;
    a.r[1] = param_1;
    (void)tc_call(0x8028b46cu, &a);
    return;
}
