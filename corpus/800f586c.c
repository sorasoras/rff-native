#include "tc_rt.h"

void fn_800f586c(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x8007b03cu, &a);
    return;
}
