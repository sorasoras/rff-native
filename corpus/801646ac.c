#include "tc_rt.h"

u32 fn_801646ac(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801efc58u, &a);
    wr32(param_1, 0x803695c0u);
    wr32(param_1 + 0x148u, 0u);
    wr32(param_1 + 0x140u, 0x1c710u);
    wr32(param_1 + 0x14cu, 0x1080u);
    wr32(param_1 + 0x150u, 0x1au);
    return param_1;
}
