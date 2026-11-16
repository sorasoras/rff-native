#include "tc_rt.h"

void fn_8020c6cc(u32 param_1)
{
    TcArgs a = {0};
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1, 0xffffffffu);
    wr32(param_1 + 4u, 0xffffffffu);
    a.r[0] = param_1 + 0x10u;
    (void)tc_call(0x8020bae8u, &a);
    return;
}
