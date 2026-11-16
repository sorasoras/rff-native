#include "tc_rt.h"

void fn_80077b70(u32 param_1)
{
    u32 r4 = 0, r5 = 0;
    r5 = rd32(0x8046adecu);
    while (r5 != 0u) {
        r4 = r5;
        r5 = rd32(r5);
        r4 = rd32(r4 + 8u);
        wr32(r4 + 0x74u, (rd32(r4 + 0x74u) & 0xfdffffffu) | ((param_1 << 0x19u) & 0x2000000u));
    }
    return;
}
