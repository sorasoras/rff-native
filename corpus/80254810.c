#include "tc_rt.h"

void fn_80254810(s32 param_1)
{
    u32 r6 = 0;
    if (param_1 < 5) {
        wr8(0xcc008000u, 8u);
        r6 = rd32(0x80576c88u);
        wr8(0xcc008000u, 0x30u);
        wr32(0xcc008000u, rd32(r6 + 0x80u));
        wr8(0xcc008000u, 0x10u);
        wr32(0xcc008000u, 0x1018u);
        wr32(0xcc008000u, rd32(r6 + 0x80u));
    } else {
        wr8(0xcc008000u, 8u);
        r6 = rd32(0x80576c88u);
        wr8(0xcc008000u, 0x40u);
        wr32(0xcc008000u, rd32(r6 + 0x84u));
        wr8(0xcc008000u, 0x10u);
        wr32(0xcc008000u, 0x1019u);
        wr32(0xcc008000u, rd32(r6 + 0x84u));
    }
    wr16(r6 + 2u, 1u);
    return;
}
