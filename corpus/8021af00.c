#include "tc_rt.h"

u32 fn_8021af00(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800f3d44u, &a);
    wr32(param_1, 0x80378848u);
    return param_1;
}
