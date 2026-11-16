#include "tc_rt.h"

u32 fn_80174784(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80148ae4u, &a);
    wr32(param_1, 0x8036e3f0u);
    a.r[0] = param_1 + 0x7c4u;
    (void)tc_call(0x800cdb68u, &a);
    wr32(param_1 + 0x140u, 0x100010u);
    wr32(param_1 + 0x77cu, 0x1079u);
    wr32(param_1 + 0x790u, 0x19u);
    return param_1;
}
