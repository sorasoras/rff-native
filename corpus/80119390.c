#include "tc_rt.h"

u32 fn_80119390(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800ce4d4u, &a);
    wr32(param_1, 0x80362650u);
    a.r[0] = param_1 + 0x24u;
    (void)tc_call(0x800cfca0u, &a);
    wr32(param_1 + 0x48u, param_2);
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    (void)tc_call(0x800ce5b4u, &a);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x4cu, 0u);
    return param_1;
}
