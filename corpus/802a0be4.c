#include "tc_rt.h"

void fn_802a0be4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = param_1;
    if (param_1 == 0u) {
        a.r[0] = 2u;
        r3 = tc_call(0x8028a274u, &a);
        if (r3 == 0u) {
            return;
        }
    }
    wr16(r3 + 2u, 0xdu);
    wr16(r3 + 4u, 0u);
    wr8(r3 + 8u, 3u);
    wr8(r3 + 9u, 8u);
    wr8(r3 + 0xau, 0xau);
    wr8(r3 + 0xbu, (u8)param_2);
    wr8(r3 + 0xcu, (u8)((s32)param_2 >> 8));
    wr8(r3 + 0xdu, (u8)param_3);
    wr8(r3 + 0xeu, (u8)((s32)param_3 >> 8));
    wr8(r3 + 0xfu, (u8)param_4);
    wr8(r3 + 0x10u, (u8)((s32)param_4 >> 8));
    wr8(r3 + 0x11u, (u8)param_5);
    wr8(r3 + 0x12u, (u8)((s32)param_5 >> 8));
    wr8(r3 + 0x13u, (u8)param_6);
    wr8(r3 + 0x14u, (u8)((param_6 >> 8u) & 0xffu));
    a.r[0] = r3;
    (void)tc_call(0x8029db78u, &a);
    return;
}
