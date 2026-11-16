#include "tc_rt.h"

u32 fn_8023901c(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32((u32)param_1 + 8u, 0xeu);
    wr32((u32)param_1 + 0x18u, param_2);
    wr32((u32)param_1 + 0x14u, 0x20u);
    wr32((u32)param_1 + 0x20u, 0u);
    wr32((u32)param_1 + 0x28u, param_3);
    if (rd32(0x80570ad4u) != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x18u);
        a.r[1] = rd32((u32)param_1 + 0x14u);
        (void)tc_call(0x8022770cu, &a);
    }
    r3 = tc_call(0x8022c2b0u, &a);
    r30 = r3;
    wr32((u32)param_1 + 0xcu, 2u);
    a.r[0] = 2u;
    a.r[1] = (u32)param_1;
    r3 = tc_call(0x80239adcu, &a);
    r31 = r3;
    if (rd32(0x80571650u) == 0u && rd32(0x805715c4u) == 0u) {
        (void)tc_call(0x80237c80u, &a);
    }
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    return r31;
}
