#include "tc_rt.h"

u32 fn_800ae3f8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0x54u;
    (void)tc_call(0x8000443cu, &a);
    return param_1;
}
