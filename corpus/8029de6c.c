#include "tc_rt.h"

void fn_8029de6c(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r3 = (u32)rd8(param_1);
    r4 = (u32)rd8(param_1 + 1u) + (((u32)rd8(param_1 + 2u) << 8u) & 0xffffff00u);
    wr8(0x817fdfe8u, rd8(param_1 + 3u));
    r4 = r4 & 0xffffu;
    wr8(0x817fdfe9u, rd8(param_1 + 4u));
    wr32(0x817fdfecu, (((u32)rd8(param_1 + 7u) << 0x10u) & 0xffff0000u) + (u32)rd8(param_1 + 5u) + ((((u32)rd8(param_1 + 8u) << 0x18u) & 0xff000000u) + (((u32)rd8(param_1 + 6u) << 8u) & 0xffffff00u)));
    wr32(0x817fdff4u, (((u32)rd8(param_1 + 0xbu) << 0x10u) & 0xffff0000u) + (u32)rd8(param_1 + 9u) + ((((u32)rd8(param_1 + 0xcu) << 0x18u) & 0xff000000u) + (((u32)rd8(param_1 + 0xau) << 8u) & 0xffffff00u)));
    wr32(0x817fdff8u, (((u32)rd8(param_1 + 0xfu) << 0x10u) & 0xffff0000u) + (u32)rd8(param_1 + 0xdu) + ((((u32)rd8(param_1 + 0x10u) << 0x18u) & 0xff000000u) + (((u32)rd8(param_1 + 0xeu) << 8u) & 0xffffff00u)));
    wr32(0x817fdffcu, (((u32)rd8(param_1 + 0x13u) << 0x10u) & 0xffff0000u) + (u32)rd8(param_1 + 0x11u) + ((((u32)rd8(param_1 + 0x14u) << 0x18u) & 0xff000000u) + (((u32)rd8(param_1 + 0x12u) << 8u) & 0xffffff00u)));
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x80294654u, &a);
    return;
}
