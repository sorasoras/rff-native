#include "tc_rt.h"

void fn_8015c664(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x46cu, 0u);
    wr32((u32)param_1 + 0x484u, 0xffffffffu);
    wr32((u32)param_1 + 0x48cu, 0xffffffffu);
    wr32((u32)param_1 + 0x488u, 0xffffffffu);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8015d1ecu, &a);
    wr32((u32)param_1 + 0x4b0u, 1u);
    a.r[0] = (u32)param_1 + 0x10u;
    (void)tc_call(0x8015be1cu, &a);
    a.r[0] = (u32)param_1 + 0xcu;
    (void)tc_call(0x8015c938u, &a);
    return;
}
