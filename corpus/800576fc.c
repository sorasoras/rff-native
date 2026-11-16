#include "tc_rt.h"

u32 fn_800576fc(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8007ae0cu, &a);
    a.r[0] = param_1;
    (void)tc_call(0x800577f0u, &a);
    return param_1;
}
