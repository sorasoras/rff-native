#include "tc_rt.h"

void fn_800d585c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if (param_2 >= 0) {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d56bcu, &a);
        if (param_2 >= (s32)r3) {
            return;
        }
        wr32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x480u, (u32)param_3);
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x800d569cu, &a);
        if ((u32)param_2 == r3 && (u32)param_3 == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = 0u;
            (void)tc_call(0x800d5520u, &a);
        }
    }
    return;
}
