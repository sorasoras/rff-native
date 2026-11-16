#include "tc_rt.h"

void fn_80254170(u32 param_1, u32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x80576c88u);
    if (rd32(r31 + 0x5fcu) != 0u) {
        (void)tc_call(0x802508fcu, &a);
    }
    if (rd32(r31) == 0u) {
        (void)tc_call(0x80250cc0u, &a);
    }
    wr8(0xcc008000u, 0x40u);
    wr32(0xcc008000u, param_1);
    wr32(0xcc008000u, param_2);
    return;
}
