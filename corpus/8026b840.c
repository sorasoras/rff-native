#include "tc_rt.h"

void fn_8026b840(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    wr32(param_1 + 8u, param_2);
    wr32(param_1 + 0xcu, param_3);
    wr32(param_1, rd32(param_1 + 8u));
    wr32(param_1 + 4u, rd32(param_1 + 8u));
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, rd32(param_1 + 0xcu));
    (void)tc_call(0x8026b8ecu, &a);
    return;
}
