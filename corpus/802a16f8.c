#include "tc_rt.h"

void fn_802a16f8(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    wr16((u32)param_1 + 2u, 7u);
    wr16((u32)param_1 + 4u, 0u);
    wr8((u32)param_1 + 8u, 0x1eu);
    wr8((u32)param_1 + 9u, 0xcu);
    wr8((u32)param_1 + 0xau, 4u);
    wr8((u32)param_1 + 0xbu, (u8)param_2);
    wr8((u32)param_1 + 0xcu, (u8)((param_2 >> 8u) & 0xffu));
    wr8((u32)param_1 + 0xdu, (u8)param_3);
    wr8((u32)param_1 + 0xeu, (u8)((param_3 >> 8u) & 0xffu));
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8029db78u, &a);
    return;
}
