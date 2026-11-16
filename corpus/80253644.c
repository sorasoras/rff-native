#include "tc_rt.h"

void fn_80253644(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0;
    r5 = rd32(0x80576c88u);
    r3 = r5 + ((param_1 << 1u) & 0xfffffffcu);
    if ((param_1 & 1u) != 0u) {
        wr32(r3 + 0x200u, (rd32(r3 + 0x200u) & 0xfff83fffu) | ((param_2 << 0xeu) & 0x7c000u));
    } else {
        wr32(r3 + 0x200u, (rd32(r3 + 0x200u) & 0xfffffe0fu) | ((param_2 << 4u) & 0x1f0u));
    }
    wr8(0xcc008000u, 0x61u);
    r3 = rd32(r3 + 0x200u);
    wr32(0xcc008000u, r3);
    wr16(r5 + 2u, 0u);
    return;
}
