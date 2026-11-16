#include "tc_rt.h"

void fn_801aebb4(s32 param_1, s32 param_2)
{
    u32 r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x2cu;
    (void)tc_call(0x801c2590u, &a);
    r4 = rd32((u32)param_1 + 0x118u);
    if ((s32)r4 >= 0) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        (void)tc_call(0x801206f4u, &a);
        wr32((u32)param_1 + 0x118u, 0xffffffffu);
    }
    if (rd32((u32)param_1 + 0x10u) != 0u) {
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = 0u;
        (void)tc_call(0x800f732cu, &a);
    }
    wr32((u32)param_1 + 0x10u, 0u);
    wr32((u32)param_2 + 0xd30u, 0u);
    wr32((u32)param_2 + 0xd34u, 1u);
    return;
}
