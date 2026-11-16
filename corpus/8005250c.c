#include "tc_rt.h"

void fn_8005250c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 0x803cb90cu;
    a.r[1] = param_1;
    (void)tc_call(0x8007b03cu, &a);
    return;
}
