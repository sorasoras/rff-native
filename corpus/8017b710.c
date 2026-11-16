#include "tc_rt.h"

u32 fn_8017b710(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800f3d44u, &a);
    wr32(param_1, 0x8036f1a8u);
    wr32(param_1 + 0x12cu, 3u);
    wr32(param_1 + 0x128u, 0xffffffffu);
    return param_1;
}
