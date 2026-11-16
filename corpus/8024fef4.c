#include "tc_rt.h"

void fn_8024fef4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r8 = 0;
    r3 = param_1;
    if (param_1 == 0x19u) {
        r3 = 0xau;
    }
    r8 = r3 - 9u;
    wr8(0xcc008000u, 8u);
    wr8(0xcc008000u, (u8)(r8 | 0xa0u));
    wr32(0xcc008000u, param_2 & 0x3fffffffu);
    wr8(0xcc008000u, 8u);
    wr8(0xcc008000u, (u8)(r8 | 0xb0u));
    wr32(0xcc008000u, param_3);
    return;
}
