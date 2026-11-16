#include "tc_rt.h"

u32 fn_802a0e6c(u32 param_1, u32 param_2)
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
        wr8(r3 + 8u, 0xbu);
        wr8(r3 + 9u, 8u);
        wr8(r3 + 0xau, 7u);
        wr8(r3 + 0xbu, rd8(param_1 + 5u));
        wr8(r3 + 0xcu, rd8(param_1 + 4u));
        wr8(r3 + 0xdu, rd8(param_1 + 3u));
        wr8(r3 + 0xeu, rd8(param_1 + 2u));
        wr8(r3 + 0xfu, rd8(param_1 + 1u));
        wr8(r3 + 0x10u, rd8(param_1));
        wr8(r3 + 0x11u, (u8)param_2);
        a.r[0] = r3;
        (void)tc_call(0x8029db78u, &a);
        r3 = 1u;
    }
    return r3;
}
