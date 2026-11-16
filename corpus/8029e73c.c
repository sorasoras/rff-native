#include "tc_rt.h"

void fn_8029e73c(u32 param_1)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr8(0x817fdfedu, rd8(param_1));
    wr8(0x817fdfecu, rd8(param_1 + 1u));
    wr8(0x817fdfebu, rd8(param_1 + 2u));
    wr8(0x817fdfeau, rd8(param_1 + 3u));
    wr8(0x817fdfe9u, rd8(param_1 + 4u));
    wr8(0x817fdfe8u, rd8(param_1 + 5u));
    wr8(0x817fdfffu, rd8(param_1 + 6u));
    wr8(0x817fdffeu, rd8(param_1 + 7u));
    wr8(0x817fdffdu, rd8(param_1 + 8u));
    wr8(0x817fdffcu, rd8(param_1 + 9u));
    wr8(0x817fdffbu, rd8(param_1 + 0xau));
    wr8(0x817fdffau, rd8(param_1 + 0xbu));
    wr8(0x817fdff9u, rd8(param_1 + 0xcu));
    wr8(0x817fdff8u, rd8(param_1 + 0xdu));
    wr8(0x817fdff7u, rd8(param_1 + 0xeu));
    wr8(0x817fdff6u, rd8(param_1 + 0xfu));
    wr8(0x817fdff5u, rd8(param_1 + 0x10u));
    wr8(0x817fdff4u, rd8(param_1 + 0x11u));
    wr8(0x817fdff3u, rd8(param_1 + 0x12u));
    wr8(0x817fdff2u, rd8(param_1 + 0x13u));
    wr8(0x817fdff1u, rd8(param_1 + 0x14u));
    wr8(0x817fdff0u, rd8(param_1 + 0x15u));
    a.r[0] = 0x817fdfe8u;
    a.r[1] = 0x817fdff0u;
    a.r[2] = (u32)rd8(param_1 + 0x16u);
    (void)tc_call(0x8029c8b4u, &a);
    return;
}
