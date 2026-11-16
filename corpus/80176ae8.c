#include "tc_rt.h"

u32 fn_80176ae8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801f02a4u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x801769bcu, &a);
    return 0u;
}
