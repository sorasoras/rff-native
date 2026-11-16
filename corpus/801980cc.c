#include "tc_rt.h"

void fn_801980cc(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = param_1;
    (void)tc_call(0x80162024u, &a);
    return;
}
