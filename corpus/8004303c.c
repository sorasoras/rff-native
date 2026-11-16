#include "tc_rt.h"

u32 fn_8004303c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = 1u;
    a.r[1] = param_1;
    a.r[2] = 0x52434f4eu;
    a.r[3] = rd32(0x80570688u);
    (void)tc_call(0x80040e98u, &a);
    return 1u;
}
