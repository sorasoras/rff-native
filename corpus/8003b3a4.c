#include "tc_rt.h"

void fn_8003b3a4(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        r4 = rd32((u32)param_2 - 4u);
        if (rd32(r4 + 0x1cu) != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 1u;
            r3 = tc_call(0x8003b20cu, &a);
            wr32(r3 + 0x1cu, 0u);
        }
    }
    return;
}
