#include "tc_rt.h"

u32 fn_8010c1c4(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0x61u) {
        r3 = 2u;
    } else {
        r4 = rd32((u32)param_1 + 0xcu);
        if ((s32)r4 >= 0) {
            if ((s32)rd32((u32)param_1 + 0x18u) > 30) {
                wr32((u32)param_1 + 0x18u, 0u);
            } else {
                a.r[0] = (u32)param_1;
                a.r[1] = r4;
                (void)tc_call(0x8010c0ccu, &a);
                wr32((u32)param_1 + 0x18u, rd32((u32)param_1 + 0x18u) + 1u);
            }
        }
        r3 = 0u;
    }
    return r3;
}
