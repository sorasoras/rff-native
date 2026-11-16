#include "tc_rt.h"

void fn_802a1b28(s32 param_1)
{
    TcArgs a = {0};
    wr16((u32)param_1 + 2u, 3u);
    wr16((u32)param_1 + 4u, 0u);
    wr8((u32)param_1 + 8u, 5u);
    wr8((u32)param_1 + 9u, 0x10u);
    wr8((u32)param_1 + 0xau, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8029db78u, &a);
    return;
}
