#include "tc_rt.h"

u32 fn_8015aa9c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8015aaccu, &a);
    return param_1;
}
