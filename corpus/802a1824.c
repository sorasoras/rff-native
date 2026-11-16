#include "tc_rt.h"

void fn_802a1824(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr16((u32)param_1 + 2u, 6u);
    wr16((u32)param_1 + 4u, 0u);
    wr8((u32)param_1 + 8u, 0x24u);
    wr8((u32)param_1 + 9u, 0xcu);
    wr8((u32)param_1 + 0xau, 3u);
    wr8((u32)param_1 + 0xbu, rd8(param_2 + 2u));
    wr8((u32)param_1 + 0xcu, rd8(param_2 + 1u));
    wr8((u32)param_1 + 0xdu, rd8(param_2));
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8029db78u, &a);
    return;
}
