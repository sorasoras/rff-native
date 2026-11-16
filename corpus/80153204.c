#include "tc_rt.h"

void fn_80153204(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x802558bcu, &a);
    return;
}
