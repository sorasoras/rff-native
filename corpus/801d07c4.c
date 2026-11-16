#include "tc_rt.h"

u32 fn_801d07c4(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801d0208u, &a);
    wr32(param_1 + 0x348u, param_2);
    wr32(param_1, 0x80374158u);
    return param_1;
}
