#include "tc_rt.h"

void fn_8015a2b8(s32 param_1, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    r3 = tc_call(0x80159d54u, &a);
    if (r3 != 0u) {
        if (rd32(r3 + 0x10u) == 1u) {
            wr16((u32)param_1 + 0x7fcu, 0u);
        } else {
            wr16((u32)param_1 + 0x7bcu, 0u);
        }
        a.r[0] = r3;
        a.r[1] = 1u;
        (void)tc_call(0x80159390u, &a);
    }
    return;
}
