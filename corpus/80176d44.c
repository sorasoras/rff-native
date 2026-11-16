#include "tc_rt.h"

u32 fn_80176d44(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80148ae4u, &a);
    wr32(param_1, 0x8036eeacu);
    wr32(param_1 + 0x778u, 0x105du);
    wr32(param_1 + 0x77cu, 0x105eu);
    wr32(param_1 + 0x780u, 0x105fu);
    wr32(param_1 + 0x78cu, 0x3bu);
    wr32(param_1 + 0x790u, 0x18u);
    wr32(param_1 + 0x794u, 0x3fu);
    wr32(param_1 + 0x7c0u, 1u);
    wr32(param_1 + 0x140u, 0x10002010u);
    return param_1;
}
