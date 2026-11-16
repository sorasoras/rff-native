#include "tc_rt.h"

s32 fn_80094f08(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xd8u;
    (void)tc_call(0x8007ae0cu, &a);
    wr32((u32)param_1 + 0x108u, 0u);
    wr32((u32)param_1 + 0x110u, 0xffffffffu);
    wr32((u32)param_1 + 0x114u, 0xffffffffu);
    wr32((u32)param_1 + 0x10cu, 0u);
    return param_1;
}
