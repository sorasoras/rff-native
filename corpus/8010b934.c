#include "tc_rt.h"

void fn_8010b934(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = 1u;
    a.r[2] = param_1;
    (void)tc_call(0x8014dadcu, &a);
    return;
}
