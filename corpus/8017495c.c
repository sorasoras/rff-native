#include "tc_rt.h"

u32 fn_8017495c(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80148ae4u, &a);
    wr32(param_1 + 0x140u, 0x10010u);
    wr32(param_1, 0x8036e4e0u);
    wr32(param_1 + 0x790u, 0x3du);
    return param_1;
}
