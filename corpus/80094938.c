#include "tc_rt.h"

void fn_80094938(s32 param_1, s32 param_2)
{
    u32 r4 = 0, r7 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + ((u32)param_2 * 0xacu) + 0x26cu;
    (void)tc_call(0x800f33a0u, &a);
    r7 = rd32((u32)param_1 + 0x25cu);
    r4 = (r7 * 0x38u) - 0x7fb65020u;
    wr32(r4 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x24u, 0x2e8u);
    wr8(r4 + 0x54u, 0xffu);
    if (r7 == 0x1eu || r7 == 0x1fu) {
        wr8((u32)param_2 - 0x7fb66de8u, 0xffu);
    }
    return;
}
