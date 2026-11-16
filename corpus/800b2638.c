#include "tc_rt.h"

void fn_800b2638(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800b3c94u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x800b3dc0u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x800b3ce4u, &a);
    return;
}
