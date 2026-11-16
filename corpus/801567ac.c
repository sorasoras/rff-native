#include "tc_rt.h"

void fn_801567ac(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x24u, 0u);
    wr32((u32)param_1 + 0x54u, 0u);
    wr32((u32)param_1 + 0x20u, 0u);
    wr32((u32)param_1 + 0x4cu, 0u);
    wr32((u32)param_1 + 0x44u, 0u);
    wr32((u32)param_1 + 0x48u, 8u);
    a.r[0] = (u32)param_1 + 0x28u;
    a.r[1] = 0xffffffffu;
    a.r[2] = 0x1cu;
    (void)tc_call(0x8000443cu, &a);
    wr8((u32)param_1 + 0x50u, 0xffu);
    wr8((u32)param_1 + 0x52u, 0xffu);
    wr8((u32)param_1 + 0x51u, 0xffu);
    wr8((u32)param_1 + 0x53u, 0xffu);
    return;
}
