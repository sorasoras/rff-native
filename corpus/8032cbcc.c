#include "tc_rt.h"

u32 fn_8032cbcc(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80325c8cu, &a);
    wr32(param_1, 0x8039dc28u);
    return param_1;
}
