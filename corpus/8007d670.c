#include "tc_rt.h"

u32 fn_8007d670(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8006f1b4u, &a);
    wr32(param_1, 0x80350198u);
    return param_1;
}
