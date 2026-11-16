#include "tc_rt.h"

u32 fn_80159028(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80159058u, &a);
    return param_1;
}
