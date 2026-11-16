#include "tc_rt.h"

u32 fn_801b3658(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80185e5cu, &a);
    wr32(param_1, 0x80372540u);
    return param_1;
}
