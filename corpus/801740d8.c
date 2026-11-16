#include "tc_rt.h"

u32 fn_801740d8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800f41bcu, &a);
    wr32(param_1, 0x8036e300u);
    return param_1;
}
