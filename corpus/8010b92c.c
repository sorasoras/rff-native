#include "tc_rt.h"

void fn_8010b92c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 1u;
    (void)tc_call(0x8014da9cu, &a);
    return;
}
