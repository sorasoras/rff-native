#include "tc_rt.h"

u32 fn_80176f44(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80176d44u, &a);
    wr32(param_1 + 0x144u, 3u);
    wr32(param_1, 0x8036ebe8u);
    return param_1;
}
