#include "tc_rt.h"

void fn_8029ffa4(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 == 0u) {
        return;
    }
    wr16(r3 + 2u, 0x19u);
    wr16(r3 + 4u, 0u);
    wr8(r3 + 8u, 0xbu);
    wr8(r3 + 9u, 4u);
    wr8(r3 + 0xau, 0x16u);
    wr8(r3 + 0xbu, rd8(param_r3 + 5u));
    wr8(r3 + 0xcu, rd8(param_r3 + 4u));
    wr8(r3 + 0xdu, rd8(param_r3 + 3u));
    wr8(r3 + 0xeu, rd8(param_r3 + 2u));
    wr8(r3 + 0xfu, rd8(param_r3 + 1u));
    wr8(r3 + 0x10u, rd8(param_r3));
    wr8(r3 + 0x11u, rd8(param_r4 + 0xfu));
    wr8(r3 + 0x12u, rd8(param_r4 + 0xeu));
    wr8(r3 + 0x13u, rd8(param_r4 + 0xdu));
    wr8(r3 + 0x14u, rd8(param_r4 + 0xcu));
    wr8(r3 + 0x15u, rd8(param_r4 + 0xbu));
    wr8(r3 + 0x16u, rd8(param_r4 + 0xau));
    wr8(r3 + 0x17u, rd8(param_r4 + 9u));
    wr8(r3 + 0x18u, rd8(param_r4 + 8u));
    wr8(r3 + 0x19u, rd8(param_r4 + 7u));
    wr8(r3 + 0x1au, rd8(param_r4 + 6u));
    wr8(r3 + 0x1bu, rd8(param_r4 + 5u));
    wr8(r3 + 0x1cu, rd8(param_r4 + 4u));
    wr8(r3 + 0x1du, rd8(param_r4 + 3u));
    wr8(r3 + 0x1eu, rd8(param_r4 + 2u));
    wr8(r3 + 0x1fu, rd8(param_r4 + 1u));
    wr8(r3 + 0x20u, rd8(param_r4));
    a.r[0] = r3;
    (void)tc_call(0x8029db78u, &a);
    return;
}
