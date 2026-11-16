#include "tc_rt.h"

u32 fn_80094864(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)rd8(((((u32)param_2 - 0x287u) << 4u) & 0xfffffff0u) - 0x7fb60e4au);
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_1 + (r31 * 0xacu) + 0x26cu;
    a.r[2] = (u32)param_2;
    a.r[3] = param_3;
    a.r[4] = param_4;
    r3 = tc_call(0x800f31d8u, &a);
    if (r3 != 0u) {
        r5 = rd32((u32)param_1 + 0x25cu);
        r4 = (r5 * 0x38u) - 0x7fb65020u;
        wr32(r4 + ((r31 << 2u) & 0xfffffffcu) + 0x24u, (u32)param_2);
        wr8(r4 + 0x54u, (u8)param_3);
        if (r5 == 0x1eu || r5 == 0x1fu) {
            wr8(r31 - 0x7fb66de8u, (u8)param_3);
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
