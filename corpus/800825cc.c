#include "tc_rt.h"

void fn_800825cc(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x8049df80u;
    a.r[1] = param_1;
    (void)tc_call(0x800c92a4u, &a);
    return;
}
