#include "tc_rt.h"

u32 fn_802fc4a8(u32 param_1)
{
    TcArgs a = {0};
    wr8(param_1, 0u);
    wr8(param_1 + 1u, 0u);
    wr8(param_1 + 2u, 0u);
    wr8(param_1 + 3u, 0u);
    wr8(param_1 + 4u, 0u);
    wr8(param_1 + 5u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x38u, 0u);
    a.r[0] = param_1 + 0x40u;
    (void)tc_call(0x8022671cu, &a);
    a.r[0] = param_1 + 0x40u;
    a.r[1] = param_1;
    (void)tc_call(0x80226e98u, &a);
    a.r[0] = param_1 + 0x70u;
    (void)tc_call(0x8022671cu, &a);
    a.r[0] = param_1 + 0x70u;
    a.r[1] = param_1;
    (void)tc_call(0x80226e98u, &a);
    return param_1;
}
