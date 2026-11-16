#include "tc_rt.h"

void fn_800b31dc(s32 param_1, s32 param_2)
{
    u32 r4 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = (u32)param_2;
    if ((u32)param_2 != 0xffffffffu) {
        if ((u32)param_2 == 0xfffffffeu) {
            r4 = rd32((u32)param_1 + 0xe5cu);
            if (r4 != 0xffffffffu) {
                r5 = r4;
                wr32((u32)param_1 + 0xe5cu, 0xffffffffu);
            }
        }
        if (r5 == 0xfffffffeu) {
            a.r[0] = 0x805711d4u;
            a.r[1] = (u32)param_1;
            (void)tc_call(0x8016d614u, &a);
        } else {
            a.r[0] = 0x805711d4u;
            a.r[1] = (u32)param_1;
            a.r[2] = r5;
            (void)tc_call(0x8016d4d0u, &a);
        }
        wr32((u32)param_1 + 0xe60u, 0xffffffffu);
        wr32((u32)param_1 + 0xe64u, 0xffffffffu);
    }
    return;
}
