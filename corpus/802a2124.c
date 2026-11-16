#include "tc_rt.h"

void fn_802a2124(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr16((u32)param_1 + 2u, 4u);
    wr16((u32)param_1 + 4u, 0u);
    wr8((u32)param_1 + 8u, 0x47u);
    wr8((u32)param_1 + 9u, 0xcu);
    wr8((u32)param_1 + 0xau, 1u);
    wr8((u32)param_1 + 0xbu, (u8)param_2);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8029db78u, &a);
    return;
}
