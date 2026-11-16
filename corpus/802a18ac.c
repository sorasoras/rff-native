#include "tc_rt.h"

u32 fn_802a18ac(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr16(r3 + 2u, 0xau);
        wr16(r3 + 4u, 0u);
        wr8(r3 + 8u, 0x33u);
        wr8(r3 + 9u, 0xcu);
        wr8(r3 + 0xau, 7u);
        wr8(r3 + 0xbu, (u8)param_1);
        wr8(r3 + 0xcu, (u8)((s32)param_1 >> 8));
        wr8(r3 + 0xdu, (u8)param_2);
        wr8(r3 + 0xeu, (u8)param_3);
        wr8(r3 + 0xfu, (u8)((s32)param_3 >> 8));
        wr8(r3 + 0x10u, (u8)param_4);
        wr8(r3 + 0x11u, (u8)((param_4 >> 8u) & 0xffu));
        a.r[0] = r3;
        (void)tc_call(0x8029db78u, &a);
        r3 = 1u;
    }
    return r3;
}
