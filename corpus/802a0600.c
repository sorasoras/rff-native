#include "tc_rt.h"

u32 fn_802a0600(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr16(r3 + 2u, 0xdu);
        wr16(r3 + 4u, 0u);
        wr8(r3 + 8u, 0x19u);
        wr8(r3 + 9u, 4u);
        wr8(r3 + 0xau, 0xau);
        wr8(r3 + 0xbu, rd8(param_1 + 5u));
        wr8(r3 + 0xcu, rd8(param_1 + 4u));
        wr8(r3 + 0xdu, rd8(param_1 + 3u));
        wr8(r3 + 0xeu, rd8(param_1 + 2u));
        wr8(r3 + 0xfu, rd8(param_1 + 1u));
        wr8(r3 + 0x10u, rd8(param_1));
        wr8(r3 + 0x11u, (u8)param_2);
        wr8(r3 + 0x12u, (u8)param_3);
        wr8(r3 + 0x13u, (u8)param_4);
        wr8(r3 + 0x14u, (u8)((param_4 >> 8u) & 0xffu));
        a.r[0] = r3;
        (void)tc_call(0x8029db78u, &a);
        r3 = 1u;
    }
    return r3;
}
