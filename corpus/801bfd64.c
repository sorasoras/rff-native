#include "tc_rt.h"

void fn_801bfd64(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    TcArgs a = {0};
    wr32(param_1 + 4u, param_3);
    wr32(param_1, param_2);
    a.r[0] = param_1 + 8u;
    a.r[1] = param_4;
    a.r[2] = 0x10u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = param_1 + 0x18u;
    a.r[1] = param_5;
    a.r[2] = 0x10u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = param_1 + 0x28u;
    a.r[1] = param_6;
    a.r[2] = 0x10u;
    (void)tc_call(0x80004338u, &a);
    return;
}
