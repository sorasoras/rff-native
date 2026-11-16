#include "tc_rt.h"

u32 fn_80175c78(u32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8017567cu, &a);
    r31 = param_1 + 0x14cu;
    wr32(param_1, 0x8036e930u);
    a.r[0] = r31;
    (void)tc_call(0x8006f1b4u, &a);
    wr32(r31, 0x80350198u);
    wr32(param_1 + 0x134u, 0x1074u);
    wr32(param_1 + 0x138u, 0x17u);
    return param_1;
}
