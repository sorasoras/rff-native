#include "tc_rt.h"

void fn_80158e5c(s32 param_1, s32 param_2)
{
    u32 r4 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        r4 = rd32((u32)param_1 + 0x91cu);
        if (r4 != 0xffffffffu) {
            a.r[0] = 0x804b9e80u;
            a.r[1] = r4;
            (void)tc_call(0x801206f4u, &a);
            wr32((u32)param_1 + 0x91cu, 0xffffffffu);
        }
    }
    return;
}
