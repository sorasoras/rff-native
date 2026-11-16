#include "tc_rt.h"

void fn_8029ff48(s32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    wr16((u32)param_1 + 2u, 0xau);
    wr16((u32)param_1 + 4u, 0u);
    wr8((u32)param_1 + 8u, 0xau);
    wr8((u32)param_1 + 9u, 4u);
    wr8((u32)param_1 + 0xau, 7u);
    wr8((u32)param_1 + 0xbu, rd8(param_2 + 5u));
    wr8((u32)param_1 + 0xcu, rd8(param_2 + 4u));
    wr8((u32)param_1 + 0xdu, rd8(param_2 + 3u));
    wr8((u32)param_1 + 0xeu, rd8(param_2 + 2u));
    wr8((u32)param_1 + 0xfu, rd8(param_2 + 1u));
    wr8((u32)param_1 + 0x10u, rd8(param_2));
    wr8((u32)param_1 + 0x11u, (u8)param_3);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8029db78u, &a);
    return;
}
