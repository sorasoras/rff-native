#include "tc_rt.h"

void fn_802b6258(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1 + 8u;
    (void)tc_call(0x8028d290u, &a);
    wr8(param_1, 0u);
    return;
}
